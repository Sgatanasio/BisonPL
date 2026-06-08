#!/bin/bash

usage() {
    echo "Usage: $0 [-c|-v]"
    echo "  -c    Copy ejemplo17_correcto to ejemplo17"
    echo "  -v    Copy ejemplo17_vacio to ejemplo17"
    exit 1
}

if [ $# -ne 1 ]; then
    usage
fi

case "$1" in
    -c)
        SRC="ejemplo17_correcto"
        ;;
    -v)
        SRC="ejemplo17_vacio"
        ;;
    *)
        usage
        ;;
esac

if [ ! -d "$SRC" ]; then
    echo "Error: '$SRC' not found"
    exit 1
fi

rm -rf ejemplo17 && cp -r "$SRC" ejemplo17 && echo "Done: '$SRC' copied to 'ejemplo17'"
