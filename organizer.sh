#!/bin/bash

for filepath in "."/*; do
    [ -f "$filepath" ] || continue 
    filename=$(basename "$filepath") 
    if [[ "$filename" != *_* ]]; then
        continue
    fi

    prefix="${filename%%_*}"
    [ -d "$prefix" ] || mkdir "$prefix"
    if [[ "$filename" == "$prefix"* ]]; then
        mv "$filepath" "$prefix"
    fi
done

