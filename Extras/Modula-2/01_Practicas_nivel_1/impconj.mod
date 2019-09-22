MODULE impconj;

IMPORT IO;
IMPORT Window;

CONST
m=MIN(CARDINAL);
M=MAX(CARDINAL);

TYPE
sets=SET OF [m..M];

PROCEDURE char2set(VAR s:sets);
VAR
a:CHAR;
n:CARDINAL;

BEGIN
a:=IO.RdChar();
n:=0;
WHILE a<>CHR(13) DO
 n:=n*10 + (ORD(a)-48);
 a:=IO.RdChar();
END;

INCL(s,n);

END char2set;


VAR
c:CHAR;
i:CARDINAL;
seta:sets;

BEGIN
c:='s';
WHILE (c='s') OR (c='S') DO
 IO.WrLn;IO.RdLn;
 IO.WrStr("Introduce el elemento en el conjunto." );IO.WrLn;
 IO.WrStr(">>> ");
 char2set(seta);IO.WrLn;IO.RdLn;
 IO.WrStr("¨quieres m s? s/n ");
 c:=IO.RdChar();
 Window.Clear;
 END;

IO.RdLn;
IO.WrLn;
IO.WrStr("Los elementos que hay en el conjunto son: ");IO.WrLn;
FOR i:=m TO M DO
 IF i IN seta THEN
   IO.WrInt(i,1);
   IO.WrLn;
  END;
 END;

END impconj.
