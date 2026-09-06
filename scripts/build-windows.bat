@echo off
powershell -ExecutionPolicy Bypass -File "%~dp0build-windows.ps1"
if errorlevel 1 exit /b 1
