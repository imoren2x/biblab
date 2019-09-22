MODULE single2;

IMPORT IO;
IMPORT MATHLIB;

CONST
    N = 200;

TYPE
    divisores = ARRAY [1..N] OF BOOLEAN;

PROCEDURE numera(VAR a:CHAR):INTEGER;
VAR
n:INTEGER;
neg:BOOLEAN;

BEGIN
n:=0;
IF a='-' THEN
 neg:=TRUE;
ELSE
 neg:=FALSE;
WHILE ((a<>CHR(13)) AND (a<>'/') AND (a<>'-')) DO
 n:=n*10 + VAL(INTEGER,(ORD(a)-48));
 a:=IO.RdChar();
END;

END;
IF neg THEN
 RETURN -n;
ELSE
 RETURN n;
END;
END numera;




PROCEDURE sim(VAR a:INTEGER;VAR b:INTEGER);

        PROCEDURE depura(VAR s:divisores);
        VAR
        i,j:CARDINAL;
        BEGIN

        FOR i:=1 TO N DO
         IF s[i] THEN
          FOR j:=1 TO i-1 (*VAL(CARDINAL,MATHLIB.Sqrt(VAL(LONGREAL,i))) *) DO
           IF ((s[j]) AND ((i MOD j)=0)) THEN
            s[j]:=FALSE;
           END;
          END;
         END;
        END;

        END depura;

VAR
seta,setb:divisores;
i:INTEGER;
m:CARDINAL;

BEGIN

FOR i:=1 TO N DO
 seta[i]:=FALSE;
 setb[i]:=FALSE;
END;

FOR i:=2 TO ABS(a) DO
 IF (a MOD i)=0 THEN
   seta[i]:=TRUE;
  END;
END;

FOR i:=2 TO ABS(b) DO
 IF (b MOD i)=0 THEN
   setb[i]:=TRUE;
  END;
END;

IF a>=b THEN
 m:=ABS(a);
ELSIF b>a THEN
 m:=ABS(b);
END;

FOR i:=1 TO m DO
 IF ((seta[i]) AND (setb[i])) THEN
   seta[i]:=TRUE;
 ELSE
   seta[i]:=FALSE;
 END;
END;

depura(seta);

IF (a<0) AND (b<0) THEN
 a:=-a;
 b:=-b;
END;

IF a>=b THEN
 m:=ABS(a);
ELSIF b>a THEN
 m:=ABS(b);
END;

FOR i:=2 TO m DO
  IF (seta[i]) THEN
   a:=a DIV i;
   b:=b DIV i;
  END;
END;

END sim;

PROCEDURE suma(VAR a:INTEGER;VAR b:INTEGER;c:INTEGER;d:INTEGER);
BEGIN
a:=a*d+c*b;
b:=b*d;

sim(a,b);

END suma;

PROCEDURE resta(VAR a:INTEGER;VAR b:INTEGER;c:INTEGER;d:INTEGER);
BEGIN
suma(a,b,-c,d);
END resta;

PROCEDURE mul(VAR a:INTEGER;VAR b:INTEGER;c:INTEGER;d:INTEGER);
BEGIN
a:=a*c;
b:=b*d;
sim(a,b);

END mul;

PROCEDURE divi(VAR a:INTEGER;VAR b:INTEGER;c:INTEGER;d:INTEGER);
BEGIN
mul(a,b,d,c);
END divi;


(*=============================================*)
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

END single2.
