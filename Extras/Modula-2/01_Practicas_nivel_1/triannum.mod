MODULE triannum;

IMPORT IO;
IMPORT Window;

PROCEDURE dib(i:CARDINAL;c:CHAR);
VAR
j:CARDINAL;
BEGIN
FOR j:=1 TO i DO
 IO.WrStr(c);
END;

END dib;

PROCEDURE escr(i:CARDINAL);

VAR
j:CARDINAL;
a:CHAR;
BEGIN
j:=1;
WHILE j<i DO
dib(1,CHR(j+48));
j:=j+1;
END;
dib(1,CHR(i+48));
j:=i-1;
WHILE j>0 DO
dib(1,CHR(j+48));
j:=j-1;
END;
(*FOR j:=1 TO bel(i) DO
 dib(1,'*');
 dib(1,' ');
END;*)

END escr;

VAR
a:CARDINAL;
i,j:CARDINAL;
c:CHAR;

BEGIN
a:=1;
WHILE a<>0 DO
IO.RdLn;Window.Clear;IO.WrLn;
IO.WrStr("¨Cu ntas filas tiene tu tri ngulo? (salir=0)");IO.WrLn;IO.WrStr(">>> ");
a:=IO.RdCard();
FOR i:=1 TO a DO
 dib(a-i,CHR(32));
 escr(i);
 IO.WrLn;
END;
IF a<>0 THEN
IO.WrLn;IO.WrStr("Pulsa una tecla para continuar.");
c:=IO.RdKey();
END;
END;

END triannum.
