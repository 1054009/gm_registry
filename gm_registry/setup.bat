@echo off
rmdir /s /q garrysmod_common
mkdir garrysmod_common
cd ./garrysmod_common
git clone --recursive https://github.com/danielga/garrysmod_common x86
git clone --recursive https://github.com/danielga/garrysmod_common --branch x86-64-support-sourcesdk x86_64
cd ../
start projects.bat
exit