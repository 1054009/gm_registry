@echo off
premake5 --os=windows vs2022
premake5 --os=linux gmake2
pause