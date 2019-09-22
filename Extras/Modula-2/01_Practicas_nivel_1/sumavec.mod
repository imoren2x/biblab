MODULE sumavec;

IMPORT IO;
IMPORT Window;

TYPE
    Vector = ARRAY [1..10] OF INTEGER;

PROCEDURE dimension(VAR d:CARDINAL);
BEGIN
IO.WrStr("Introduzca la dimensi¢n de los vectores a escribir: ");
 IO.RdLn;
 d:=IO.RdCard();

END dimension;

PROCEDURE leer_vec(VAR v:Vector; d,num:CARDINAL);
VAR
i:CARDINAL;

BEGIN
IO.RdLn;
FOR i:=1 TO d DO
    IO.WrLn;
    IO.WrStr("Introduzca la componente "); IO.WrCard(i,2);
    IO.WrStr(" del vector n£mero  ");IO.WrCard(num,2); IO.WrStr(" :");
    v[i]:=IO.RdInt();
    (* Window.Clear;*)
    END;

END leer_vec;

PROCEDURE escribir(v:Vector; d:CARDINAL);
VAR
i:CARDINAL;

BEGIN
IO.RdLn;
FOR i:=1 TO d DO
    IO.WrLn;
    IO.WrStr("La componente "); IO.WrCard(i,2);
    IO.WrStr(" del vector es: "); IO.WrInt(v[i],1);
    END;

END escribir;

PROCEDURE suma_vec(v1,v2:Vector;d:CARDINAL):Vector;
VAR
i:CARDINAL;
vec:Vector;
BEGIN
FOR i:=d TO 1 BY -1 DO
    vec[i]:=v1[i] + v2[i];
    END;

RETURN vec;

END suma_vec;

VAR
v1,v2,vsum:Vector;
dim:CARDINAL;

BEGIN

dimension(dim);
leer_vec(v1,dim,1);
leer_vec(v2,dim,2);
vsum:=suma_vec(v1,v2,dim);
escribir(vsum,dim);

END sumavec.
