@echo off
del /s /f /q garrysmod_common
rmdir garrysmod_common
git clone --recursive https://github.com/danielga/garrysmod_common --branch x86-64-support-sourcesdk
exit