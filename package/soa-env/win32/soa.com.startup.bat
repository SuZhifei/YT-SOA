@echo off

call soa.env.bat

start soa.com.service.exe

::@pause
::start soa.test.com-listener.exe

::@ping 127.0.0.1 -n 1 >nul

::@pause
::start soa.test.com-controller.exe