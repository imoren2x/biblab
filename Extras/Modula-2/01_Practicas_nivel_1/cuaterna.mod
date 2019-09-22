MODULE cuaterna;

IMPORT IO,Window;

CONST
N=20;

TYPE
terna=ARRAY [1..3] OF LONGCARD;
matriz=ARRAY [1..N] OF terna;
matrix=ARRAY [1..N] OF LONGCARD;

PROCEDURE linealDep(v:terna;a,b,c:LONGCARD):BOOLEAN;
BEGIN
RETURN (v[2]*c=v[3]*b) AND (v[1]*c=v[3]*a) AND (v[1]*b=v[2]*a);
END linealDep;

PROCEDURE nolineal(s:matriz;a,b,c:LONGCARD;n:LONGCARD):BOOLEAN;
VAR
i:LONGCARD;
BEGIN
 FOR i:=1 TO n DO
  IF linealDep(s[VAL(CARDINAL,i)],a,b,c) THEN
   RETURN FALSE;
  END;
 END;
RETURN TRUE;
END nolineal;

VAR
x,a,b,c,i:LONGCARD;
n:CARDINAL;
s:matriz;
X: matrix;
r:CHAR;

BEGIN
s[1,1]:=1; s[1,2]:=0; s[1,3]:=0; X[1]:=1;
x:=1; a:=1; b:=0; c:=0; n:=1;
WHILE n<N DO
 x:=x+1;
 FOR a:=2 TO x DO
  FOR b:=0 TO a DO
   FOR c:=0 TO b DO
    IF ((x*x*x=a*a*a + b*b*b + c*c*c) AND
      nolineal(s,a,b,c,VAL(LONGCARD,n))) THEN (*­OL!*)
      n:=n+1;
      X[n]:=x;
      s[n,1]:=a;s[n,2]:=b;s[n,3]:=c;
     END;
    END;
   END;
  END;
 END;

IO.WrLn;IO.WrStr("Las diez primeras cuaternas linealmente independientes, son: ");
IO.WrLn;IO.WrLn;
FOR i:=1 TO N DO
 IO.WrStr(">>> ");IO.WrLngCard(X[VAL(CARDINAL,i)],3);IO.WrStr(" = ");
 IO.WrLngCard(s[VAL(CARDINAL,i),1],5);IO.WrStr(" ");
 IO.WrLngCard(s[VAL(CARDINAL,i),2],5);IO.WrStr(" ");
 IO.WrLngCard(s[VAL(CARDINAL,i),3],5);IO.WrStr(" ");
 IO.WrLn;
END;
r:=CHR(0);
WHILE r=CHR(0) DO
 IO.WrLn;IO.WrStr("Pulse una tecla para continuar. ");
 r:=IO.RdKey();
 END;
 Window.Clear;

END cuaterna.
