#!/bin/bash
if [ -z "$1" ]; then
    echo "Usage: ./new_c_project.sh filename"
    exit 1
fi

cp template.c "$1.c"
echo "Created $1.c from template."