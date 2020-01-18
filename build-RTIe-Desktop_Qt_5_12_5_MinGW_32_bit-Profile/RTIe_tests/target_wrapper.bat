@echo off
SetLocal EnableDelayedExpansion
(set PATH=C:\Qt\5.12.5\mingw73_32\bin;!PATH!)
if defined QT_PLUGIN_PATH (
    set QT_PLUGIN_PATH=C:\Qt\5.12.5\mingw73_32\plugins;!QT_PLUGIN_PATH!
) else (
    set QT_PLUGIN_PATH=C:\Qt\5.12.5\mingw73_32\plugins
)
%*
EndLocal
