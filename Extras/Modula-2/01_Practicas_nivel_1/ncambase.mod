MODULE ncambase;

IMPORT IO;
IMPORT Window;

TYPE
A=ARRAY [1..3] OF CARDINAL;

PROCEDURE numeros(VAR a:A);
VAR
j,i:CARDINAL;
c:CHAR;

BEGIN
IO.RdLn;
FOR i:=1 TO 3 DO
c:=IO.RdChar();
j:=10; a[i]:=0;
WHILE ((c<>CHR(47)) AND (c<>CHR(13))) DO
 a[i]:=a[i]*j+(ORD(c)-48);
 c:=IO.RdChar();
 END;
 END;

END numeros;

PROCEDURE Base10(VAR n:CARDINAL;b:CARDINAL);
VAR
sal:CARDINAL;
i,j:CARDINAL;

BEGIN
i:=10;
sal:=0;
j:=1;
WHILE n>0 DO
  sal:= sal + (n MOD i)*j;
  (* i:=i*10;*)
  j:=j*b;
  n:=n DIV i;
  END;

n:=sal;

END Base10;


PROCEDURE Bdes(n:CARDINAL;b:CARDINAL):CARDINAL;
VAR
i,r:CARDINAL;

BEGIN
r:=(n MOD b);
n:=(n DIV b);
i:=10;
WHILE (n>0) DO
      r:=(n MOD b)*i + r;
      n:=(n DIV b);
      i:=i*10;
      END;

RETURN r;

END Bdes;


VAR
r:A;
res:CARDINAL;

BEGIN

IO.RdLn;
IO.WrStr("Introduce el n£mero formateado adecuadamente: ");
numeros(r);
Base10(r[2],r[1]);
res:=Bdes(r[2],r[3]);
IO.WrLn;
IO.WrStr("El n£mero en la base destino es el: ");
IO.WrCard(res,5);

END ncambase.
