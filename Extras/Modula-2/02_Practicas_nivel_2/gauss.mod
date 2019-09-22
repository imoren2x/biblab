MODULE gauss;

IMPORT IO;

CONST
    N = 3;

TYPE
    Fila = ARRAY [1..N] OF INTEGER;
    A = ARRAY [1..N] OF Fila;

PROCEDURE encolar(VAR a:A;b:BOOLEAN;i:CARDINAL;VAR c:CHAR);

    VAR
    n: INTEGER;

BEGIN
n:=0;
WHILE ((c<>'x') AND (c<>'y') AND (c<>'=') AND (c<>CHR(13))) DO
 IF (c>=CHR(48)) AND (c<=CHR(57)) THEN
  n:=n*10 + VAL(INTEGER,(ORD(c)-48));
  c:=IO.RdChar();
 ELSE
  c:=IO.RdChar();
 END; (*¨y si hay un espacio en mitad del n£mero?*)
END;

IF b THEN
 n:=-n;
END;

IF c='x' THEN
 a[i,1]:=n;
ELSIF c='y' THEN
 a[i,2]:=n;
ELSIF c='=' THEN
 n:=-n;
 a[i,3]:=n;
END;

IF (c<>'=') THEN
c:=IO.RdChar();
END;

END encolar;


PROCEDURE ec2vec(i:CARDINAL):A;
VAR
e:A;
signo:BOOLEAN;
a:CHAR;

BEGIN
a:=IO.RdChar();

WHILE ((a<>CHR(13)))(* AND (a<>'=') AND (a<>'x') AND (a<>'y'))*) DO
 IF a='-' THEN
    signo:=TRUE;
    a:=IO.RdChar();
    encolar(e,signo,i,a);
  ELSIF ((a='+') OR ((a>=CHR(48)) AND (a<=CHR(57)))) THEN
    signo:=FALSE;
    IF a='+' THEN
     a:=IO.RdChar();
     encolar(e,signo,i,a);
    ELSIF (a<>'=') THEN
     encolar(e,signo,i,a);
     END;
  ELSE
    a:=IO.RdChar();
  END;
END;

RETURN e;

END ec2vec;


PROCEDURE Resuelve(e:A);
VAR
num,den,x:INTEGER;

BEGIN
IO.WrStr("La soluci¢n para el sistema es: ");
IO.WrLn;
IO.WrStr("1. X= ");
x:=(((e[1,3] * e[2,2]) - (e[1,2]*e[2,3]))DIV(((e[1,1]*e[2,2]) - e[1,2]*e[2,1])));
IF x<=MAX(INTEGER) THEN
 IO.WrCard(x,10);
ELSE
 IO.WrStr("No existe soluci¢n al sistema. ");
 END;
IO.WrLn;
IO.WrStr("2. Y= ");

IF x<=MAX(INTEGER) THEN
x:=(((e[1,1] * e[2,3]) - (e[2,1]*e[1,3]))DIV(((e[1,1]*e[2,2]) - e[1,2]*e[2,1])));
ELSE
 IO.WrStr("No existe soluci¢n al sistema. ");
END;
IO.WrCard(x,10);


END Resuelve;

VAR
ec:A;

BEGIN
IO.RdLn;IO.WrLn;
IO.WrStr("Introduce la primera ecuaci¢n algebraica:");
ec:=ec2vec(1);
IO.RdLn;
IO.WrStr("Introduce la segunda ecuaci¢n algebraica");
ec:=ec2vec(2);

Resuelve(ec);

END gauss.
