#!/usr/bin/env python3
import datetime
import re
import unicodedata
from pathlib import Path


ROOT = Path("/home/aa/pico/micro_ros_pico_dev/doc/document")
OUTPUT_FILES = {
    "combined": ROOT / "micro_ros_site_combined.md",
    "docs": ROOT / "micro_ros_site_docs.md",
    "posts": ROOT / "micro_ros_site_posts.md",
}

FRONT_MATTER_RE = re.compile(r"^---\s*\n.*?\n---\s*\n", re.DOTALL)
SITE_PREFIXES = ("https://micro.ros.org", "http://micro.ros.org")


def normalize_links(text: str) -> str:
    for prefix in SITE_PREFIXES:
        text = text.replace(prefix, "")
    text = text.replace("/docs/", "/_docs/")
    text = text.replace("/blog/", "/_posts/")
    text = text.replace("/posts/", "/_posts/")
    text = re.sub(r"\(([^)]+)\.html\)", r"(\1.md)", text)
    return text


def normalize_image_paths(text: str, src_path: Path) -> str:
    def split_url(url: str) -> tuple[str, str]:
        if "#" in url:
            base, frag = url.split("#", 1)
            return base, "#" + frag
        if "?" in url:
            base, query = url.split("?", 1)
            return base, "?" + query
        return url, ""

    def is_external(url: str) -> bool:
        return url.startswith(("http://", "https://", "data:", "mailto:"))

    def fix_url(url: str) -> str:
        base, suffix = split_url(url)
        for prefix in SITE_PREFIXES:
            if base.startswith(prefix):
                base = base[len(prefix) :]

        if is_external(base) or base.startswith("#") or base == "":
            return base + suffix

        if base.startswith("/"):
            base = base[1:]

        if base.startswith(("img/", "download/", "assets/")):
            return base + suffix

        # Resolve relative paths against the source file directory
        rel_path = (src_path.parent / base).resolve()
        try:
            rel = rel_path.relative_to(ROOT)
            return rel.as_posix() + suffix
        except ValueError:
            return base + suffix

    # Markdown image syntax
    def md_img_repl(match: re.Match) -> str:
        alt = match.group(1)
        url = match.group(2)
        tail = match.group(3) or ""
        return f"![{alt}]({fix_url(url)}){tail}"

    text = re.sub(r"!\[([^\]]*)\]\(([^)\s]+)([^)]*)\)", md_img_repl, text)

    # HTML image tag src
    def html_img_repl(match: re.Match) -> str:
        before = match.group(1)
        url = match.group(2)
        after = match.group(3)
        return f'{before}{fix_url(url)}{after}'

    text = re.sub(r'(<img[^>]*\ssrc=["\'])([^"\']+)(["\'])', html_img_repl, text)
    return text


def clean_markdown(text: str, src_path: Path) -> str:
    text = FRONT_MATTER_RE.sub("", text, count=1)
    text = normalize_links(text)
    text = normalize_image_paths(text, src_path)
    return text


def anchor_for(rel: str) -> str:
    # Preserve Unicode letters/numbers (e.g., Korean) and collapse spaces/punct to '-'
    s = rel.strip().replace("/", " ").replace(".", " ")
    out = []
    prev_dash = False
    for ch in s:
        cat = unicodedata.category(ch)
        if ch.isalnum() or cat[0] in ("L", "N", "M"):
            out.append(ch.lower())
            prev_dash = False
        else:
            if not prev_dash:
                out.append("-")
                prev_dash = True
    slug = "".join(out).strip("-")
    return slug or "section"


def write_combined(out_path: Path, files: list[Path], title: str):
    today = datetime.date.today().isoformat()
    sections = []
    for p in files:
        rel = p.relative_to(ROOT)
        content = p.read_text(encoding="utf-8", errors="replace")
        content = clean_markdown(content, p)
        sections.append((rel.as_posix(), content))

    with out_path.open("w", encoding="utf-8") as f:
        f.write(f"# {title}\n\n")
        f.write(f"_Generated: {today}_\n\n")
        f.write("This file concatenates micro-ROS website markdown content.\n")
        f.write("Each section starts with the source path to preserve provenance.\n\n")
        f.write("## Table of Contents\n")
        for rel, _ in sections:
            anchor = anchor_for(rel)
            f.write(f"- [{rel}](#source-{anchor})\n")
        f.write("\n")

        for rel, content in sections:
            anchor = anchor_for(rel)
            f.write("\n---\n")
            f.write(f"\n## Source: `{rel}`\n")
            f.write(f'<a id="source-{anchor}"></a>\n\n')
            f.write(content)
            if not content.endswith("\n"):
                f.write("\n")


def main() -> int:
    md_files = [
        p
        for p in ROOT.rglob("*.md")
        if p.name not in {p.name for p in OUTPUT_FILES.values()}
    ]
    md_files = sorted(md_files, key=lambda p: str(p).lower())

    files_docs = [p for p in md_files if "/_docs/" in p.as_posix()]
    files_posts = [p for p in md_files if "/_posts/" in p.as_posix()]

    write_combined(OUTPUT_FILES["docs"], files_docs, "micro-ROS website docs (combined)")
    write_combined(OUTPUT_FILES["posts"], files_posts, "micro-ROS website posts (combined)")
    write_combined(OUTPUT_FILES["combined"], md_files, "micro-ROS website content (combined)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
