#!/bin/sh
DYLD_IMAGE_SUFFIX=_debug
export DYLD_IMAGE_SUFFIX
exec /Users/jordan/Qt/5.12.5/clang_64/bin/rcc "$@"
