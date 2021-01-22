@echo off

set BASEDIR=%CD%

set FOLDER_LIST=("biblab" "django_polska_biblioteka")

@echo on

for %%f in %FOLDER_LIST% do (
    cd %%f && git fetch && cd %BASEDIR%
)

@echo off
REM git fetch origin develop:develop

:endScript