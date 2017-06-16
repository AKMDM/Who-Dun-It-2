@echo off
color 30
echo.
echo	============================================================================
echo	=                                                                          =
echo	=                                 WHODUNIT                                 =
echo	=                                                                          =
echo	============================================================================
SET Day=%date:~0,2%
SET month=%date:~3,2%
SET year=%date:~6,4%
set /p TYPE="Would you like to build a pk3 or pk7? (default pk3): " % = %
cd Whodunit_Beta
if (%TYPE%) == (pk7) (goto PK7) else (goto PK3)
:PK7
echo Building PK7
..\tools\7za a -t7z ..\whodunit_%day%-%month%-%year%.pk7 *.* *
goto Done

:PK3
echo Building PK3
..\tools\7za a -tzip ..\whodunit_%day%-%month%-%year%.pk3 *.* *
goto Done

:Done
echo Writed by Prepper
pause >nul
