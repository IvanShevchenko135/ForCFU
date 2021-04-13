md H:\MyTemp
copy C:\autoexec.bat H:\MyTemp
copy C:\config.sys H:\MyTemp
dir H:\MyTemp /p
ren H:\MyTemp\*.* *.bak
del H:\MyTemp\*.bak
dir H:\MyTemp /p
rd H:\MyTemp
dir H:\