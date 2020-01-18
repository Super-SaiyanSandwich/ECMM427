#!/bin/sh
DYLD_LIBRARY_PATH=/Users/jordan/opt/anaconda3/lib${DYLD_LIBRARY_PATH:+:$DYLD_LIBRARY_PATH}
export DYLD_LIBRARY_PATH
QT_PLUGIN_PATH=/Users/jordan/opt/anaconda3/plugins${QT_PLUGIN_PATH:+:$QT_PLUGIN_PATH}
export QT_PLUGIN_PATH
exec "$@"
