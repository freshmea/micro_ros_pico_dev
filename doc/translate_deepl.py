#!/usr/bin/env python3
import argparse
import os
import sys
import time
import urllib.parse
import urllib.request


DEEPL_FREE_ENDPOINT = "https://api-free.deepl.com/v2/translate"
MAX_CHARS = 4500
MAX_TOTAL_CHARS = 500000


def split_preserve_separators(text: str) -> list[str]:
    parts = []
    buf = []
    i = 0
    while i < len(text):
        if text.startswith("\n\n", i):
            if buf:
                parts.append("".join(buf))
                buf = []
            parts.append("\n\n")
            i += 2
            continue
        buf.append(text[i])
        i += 1
    if buf:
        parts.append("".join(buf))
    return parts


def chunk_parts(parts: list[str], max_chars: int) -> list[str]:
    chunks = []
    cur = []
    cur_len = 0
    for part in parts:
        part_len = len(part)
        if part_len > max_chars:
            if cur:
                chunks.append("".join(cur))
                cur = []
                cur_len = 0
            for i in range(0, part_len, max_chars):
                chunks.append(part[i : i + max_chars])
            continue
        if cur_len + part_len > max_chars and cur:
            chunks.append("".join(cur))
            cur = []
            cur_len = 0
        cur.append(part)
        cur_len += part_len
    if cur:
        chunks.append("".join(cur))
    return chunks


def deepl_translate(
    text: str,
    auth_key: str,
    target_lang: str,
    endpoint: str,
    use_header_auth: bool,
) -> str:
    payload = {
        "text": text,
        "target_lang": target_lang,
    }
    if not use_header_auth:
        payload["auth_key"] = auth_key
    data = urllib.parse.urlencode(payload).encode("utf-8")
    req = urllib.request.Request(endpoint, data=data, method="POST")
    if use_header_auth:
        req.add_header("Authorization", f"DeepL-Auth-Key {auth_key}")
    with urllib.request.urlopen(req, timeout=60) as resp:
        body = resp.read().decode("utf-8", errors="replace")
    # Minimal JSON parse without extra deps
    # Expected: {"translations":[{"detected_source_language":"EN","text":"..."}]}
    marker = '"text":"'
    idx = body.find(marker)
    if idx == -1:
        raise RuntimeError(f"Unexpected response: {body[:200]}")
    idx += len(marker)
    out = []
    escape = False
    while idx < len(body):
        ch = body[idx]
        if escape:
            if ch == "n":
                out.append("\n")
            elif ch == "t":
                out.append("\t")
            else:
                out.append(ch)
            escape = False
        else:
            if ch == "\\":
                escape = True
            elif ch == '"':
                break
            else:
                out.append(ch)
        idx += 1
    return "".join(out)


def main() -> int:
    parser = argparse.ArgumentParser(description="Translate a markdown file via DeepL.")
    parser.add_argument("--input", required=True)
    parser.add_argument("--output", required=True)
    parser.add_argument("--target-lang", default="KO")
    parser.add_argument("--auth-key", default=os.environ.get("DEEPL_AUTH_KEY", ""))
    parser.add_argument("--sleep", type=float, default=0.1)
    parser.add_argument("--endpoint", default=DEEPL_FREE_ENDPOINT)
    parser.add_argument("--use-header-auth", action="store_true")
    parser.add_argument("--max-total-chars", type=int, default=MAX_TOTAL_CHARS)
    parser.add_argument("--start-chunk", type=int, default=1)
    parser.add_argument("--end-chunk", type=int, default=0)
    parser.add_argument("--append", action="store_true")
    args = parser.parse_args()

    if not args.auth_key:
        print("Missing DeepL auth key. Use --auth-key or DEEPL_AUTH_KEY.", file=sys.stderr)
        return 2

    src_text = open(args.input, "r", encoding="utf-8", errors="replace").read()
    if args.max_total_chars and len(src_text) > args.max_total_chars:
        src_text = src_text[: args.max_total_chars]
    parts = split_preserve_separators(src_text)
    chunks = chunk_parts(parts, MAX_CHARS)

    start = max(args.start_chunk, 1)
    end = args.end_chunk if args.end_chunk > 0 else len(chunks)
    end = min(end, len(chunks))

    mode = "a" if args.append else "w"
    with open(args.output, mode, encoding="utf-8") as f:
        for i, chunk in enumerate(chunks, 1):
            if i < start or i > end:
                continue
            out = deepl_translate(
                chunk,
                args.auth_key,
                args.target_lang,
                args.endpoint,
                args.use_header_auth,
            )
            f.write(out)
            if args.sleep:
                time.sleep(args.sleep)
            if i % 5 == 0:
                print(f"Translated {i}/{len(chunks)} chunks...", file=sys.stderr)
    print(f"Completed chunks {start}-{end} of {len(chunks)}.", file=sys.stderr)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
