#!/bin/bash
c_files=$(find . -maxdepth 1 -type f -name ".c")
for file in $c_files; do
	gcc -c -o "${file%.c}.o" "$file"
done
ar rcs liball.a *.o
