rem kdkdk

set auxdir=%CD%\z-temp
set pdflatex="C:\Program Files\MiKTeX 2.9\miktex\bin\pdflatex.exe"
set destfile=A.Mi Proyecto fin de carrera.tex
set dest="%CD%\%destfile%"
echo %dm%

%pdflatex% -max-print-line=120 -interaction=nonstopmode %dest% -aux-directory="%auxdir%"

set bibtex="C:\Program Files\MiKTeX 2.9\miktex\bin\bibtex.exe"
set destfilename=A.Mi Proyecto fin de carrera

%bibtex% "%auxdir%\%destfilename%"

rem Tercera parte
set makeindex="C:\Program Files\MiKTeX 2.9\miktex\bin\makeindex.exe"

%makeindex% "%auxdir%\%destfilename%.idx" -t "%auxdir%\%destfilename%.ilg" -o "%auxdir%\%destfilename%.ind"