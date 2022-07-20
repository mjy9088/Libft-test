#!/bin/sh

if ! ./checker "$1"; then
  echo "File $1 has disallowed characters"
fi

if [ "$SKIP_NORMINETTE" = "1" ] || ! norminette "$1" > "$1.norm.txt"; then
  echo "Norm error on $1"
  cat "$1.norm.txt"
  exit 1
fi

if ! gcc -c -o "$1.o" -c "$1" -Wall -Wextra -Werror > "$1.compile.log"; then
  echo "Failed to compile $1"
  cat "$1.compile.log"
  exit 1
fi
