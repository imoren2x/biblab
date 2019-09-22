MODULE cambase;

IMPORT IO;
IMPORT Window;

PROCEDURE leern():CARDINAL;
VAR
i,n:CARDINAL;
c:CHAR;

BEGIN
i:=10;
c:=IO.RdChar();
IF c<>CHR(13) THEN
 n:=ORD(c)-48;
 c:=IO.RdChar();
ELSE
 Window.GotoXY(1,24);
END;

WHILE c<>CHR(13) DO
 n:= n*i + (ORD(c)-48);
 c:=IO.RdChar();
 END;
RETURN n;

END leern;

VAR
n,b,r,i:CARDINAL;

BEGIN
IO.RdLn;
IO.WrStr("Introduce el n£mero en base 10: ");
n:=leern();IO.RdLn;
IO.WrStr("Ahora dame la base del nuevo n£mero: ");
b:=leern();
r:=(n MOD b);
n:=(n DIV b);
i:=10;
WHILE (n>0) DO
      r:=(n MOD b)*i + r;
      n:=(n DIV b);
      i:=i*10;
      END;

IO.WrStr("El n£mero en la base nueva es el :");
IO.WrCard(r,10);

END cambase.
