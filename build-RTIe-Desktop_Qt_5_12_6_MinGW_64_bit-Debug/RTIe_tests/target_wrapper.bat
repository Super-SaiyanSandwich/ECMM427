@echo off
SetLocal EnableDelayedExpansion
(set PATH=F:\QT\5.12.6\mingw73_64\bin;!PATH!)
if defined QT_PLUGIN_PATH (
    set QT_PLUGIN_PATH=F:\QT\5.12.6\mingw73_64\plugins;!QT_PLUGIN_PATH!
) else (
    set QT_PLUGIN_PATH=F:\QT\5.12.6\mingw73_64\plugins
)
%*
EndLocal
