#!/usr/bin/env python3
import argparse
import io
import os
import shutil
import sys
import tempfile
import urllib.error
import urllib.request
import zipfile
from pathlib import Path


REPO_OWNER = "micro-ROS"
REPO_NAME = "micro-ros.github.io"
DEFAULT_BRANCHES = ["main", "master"]

MD_DIRS = ["_docs", "_posts", "_pages", "docs"]
IMAGE_EXTS = {
    ".png",
    ".jpg",
    ".jpeg",
    ".gif",
    ".svg",
    ".webp",
    ".bmp",
    ".tif",
    ".tiff",
    ".ico",
}


def download_zip(branch: str) -> bytes:
    url = f"https://github.com/{REPO_OWNER}/{REPO_NAME}/archive/refs/heads/{branch}.zip"
    try:
        with urllib.request.urlopen(url, timeout=60) as resp:
            return resp.read()
    except urllib.error.HTTPError as e:
        if e.code == 404:
            return b""
        raise


def find_repo_root(extract_dir: Path) -> Path:
    entries = [p for p in extract_dir.iterdir() if p.is_dir()]
    if len(entries) == 1:
        return entries[0]
    for p in entries:
        if (p / "_pages").exists() or (p / "docs").exists():
            return p
    raise RuntimeError("Unable to locate extracted repo root.")


def copy_tree_files(root: Path, rel_dir: str, out_root: Path) -> int:
    src_dir = root / rel_dir
    if not src_dir.exists():
        return 0
    count = 0
    for path in src_dir.rglob("*"):
        if not path.is_file():
            continue
        if path.suffix.lower() not in {".md", ".markdown"}:
            continue
        rel = path.relative_to(root)
        dest = out_root / rel
        dest.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(path, dest)
        count += 1
    return count


def copy_images(root: Path, out_root: Path) -> int:
    count = 0
    for path in root.rglob("*"):
        if not path.is_file():
            continue
        if path.suffix.lower() not in IMAGE_EXTS:
            continue
        rel = path.relative_to(root)
        dest = out_root / rel
        dest.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(path, dest)
        count += 1
    return count


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Download micro-ROS website repo and extract markdown/images."
    )
    parser.add_argument(
        "--output",
        default="/home/aa/pico/micro_ros_pico_dev/doc/document",
        help="Destination directory for extracted content.",
    )
    parser.add_argument(
        "--branch",
        default="",
        help="Branch to download (default: try main, then master).",
    )
    args = parser.parse_args()

    branches = [args.branch] if args.branch else DEFAULT_BRANCHES

    zip_bytes = b""
    used_branch = ""
    for br in branches:
        if not br:
            continue
        zip_bytes = download_zip(br)
        if zip_bytes:
            used_branch = br
            break
    if not zip_bytes:
        print("Failed to download zip from GitHub.", file=sys.stderr)
        return 2

    out_root = Path(args.output).expanduser().resolve()
    out_root.mkdir(parents=True, exist_ok=True)

    with tempfile.TemporaryDirectory() as tmpdir:
        tmp_path = Path(tmpdir)
        with zipfile.ZipFile(io.BytesIO(zip_bytes)) as zf:
            zf.extractall(tmp_path)
        repo_root = find_repo_root(tmp_path)

        md_count = 0
        for md_dir in MD_DIRS:
            md_count += copy_tree_files(repo_root, md_dir, out_root)
        img_count = copy_images(repo_root, out_root)

    print(f"Branch: {used_branch}")
    print(f"Markdown files copied: {md_count}")
    print(f"Image files copied: {img_count}")
    print(f"Output: {out_root}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
