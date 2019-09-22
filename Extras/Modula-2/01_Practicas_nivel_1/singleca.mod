MODULE singlecad;

IMPORT IO;

CONST
N=1000;

TYPE
divisores=SET OF CARDINAL;
regdivi=RECORD
	div:divisores;
	a:ARRAY [1..N] OF BOOLEAN;
	END;


PROCEDURE numera(VAR a:CHAR):INTEGER;
VAR
n:INTEGER;

BEGIN
n:=0;
WHILE ((a<>CHR(13)) AND (a<>'/')) DO
 n:=n*10 + VAL(INTEGER,(ORD(a)-48));
 a:=IO.RdChar();
END;
RETURN n;
END numera;

PROCEDURE depura(VAR d:regdivi;a:INTEGER;b:INTEGER);
VAR
i,j:CARDINAL;
BEGIN

FOR i:=1 TO N DO
 IF d.a[i] THEN
     FOR j:=1 TO i DO
       IF ((d.a[i]) AND ((i MOD j)=0)) THEN
        d.a[j]:=FALSE;
        END;
      END;
  END;
END;

END depura;


PROCEDURE sim(a:INTEGER;b:INTEGER):INTEGER;
VAR
da,db:regdivi;
i:INTEGER;

BEGIN
da.div:=divisores{};
db.div:=divisores{};

FOR i:=1 TO ABS(a) DO
 da.a[i]:=FALSE;
END;

FOR i:=1 TO ABS(b) DO
 db.a[i]:=FALSE;
END;

FOR i:=2 TO ABS(a) DO
 IF (a MOD i)=0 THEN
   INCL(da.div,VAL(CARDINAL,i));
   da.a[i]:=TRUE;
  END;
END;

FOR i:=2 TO ABS(b) DO
 IF (b MOD i)=0 THEN
   INCL(db.div,VAL(CARDINAL,i));
  END;
END;

da.div:=da.div*db.div;
depura(da,a,b);

IF (a<0) AND (b<0) THEN
 a:=-a;
 b:=-b;
END;

IF da.div<>divisores{} THEN
 FOR i:=2 TO ABS(a) DO
  IF ((VAL(CARDINAL,i) IN da.div) AND (da.a[i])) THEN
   a:=a DIV i;
   b:=b DIV i;
  END;
 END;

END;
RETURN a;
END sim;

PROCEDURE suma(VAR a:INTEGER;VAR b:INTEGER;c:INTEGER;d:INTEGER);
BEGIN
a:=a*d+c*b;
b:=b*d;

a:=sim(a,b);

END suma;

PROCEDURE resta(VAR a:INTEGER;VAR b:INTEGER;c:INTEGER;d:INTEGER);
BEGIN
suma(a,b,-c,d);
END resta;

PROCEDURE mul(VAR a:INTEGER;VAR b:INTEGER;c:INTEGER;d:INTEGER);
BEGIN
a:=a*c;
b:=b*d;
a:=sim(a,b);

END mul;

PROCEDURE divi(VAR a:INTEGER;VAR b:INTEGER;c:INTEGER;d:INTEGER);
BEGIN
mul(a,b,d,c);
END divi;



VAR
a,c:CHAR;
n1,d1,n2,d2:INTEGER;

BEGIN

IO.RdLn;IO.WrLn;
IO.WrStr("Introduce el primer n£mero fraccionario: ");
a:=IO.RdChar();
n1:=numera(a);
IF a='/' THEN
  a:=IO.RdChar();
  d1:=numera(a);
END;

IO.RdLn;
IO.WrStr("Introduce la operaci¢n: ");
c:=IO.RdChar();

IO.RdLn;IO.WrLn;
IO.WrStr("Introduce el segundo n£mero fraccionario: ");
a:=IO.RdChar();
n2:=numera(a);
IF a='/' THEN
  a:=IO.RdChar();
  d2:=numera(a);
END;

CASE c OF
  '+': suma(n1,d1,n2,d2); |
  '-': resta(n1,d1,n2,d2);|
  '*': mul(n1,d1,n2,d2);  |
  '/': divi(n1,d1,n1,d2); |

ELSE IO.WrStr("Operador inv lido.");
END;

IO.WrLn;
IO.WrStr("El resultado es:");
IO.WrInt(n1,5);IO.WrStr("/");IO.WrInt(d1,5);

END singlecad.
