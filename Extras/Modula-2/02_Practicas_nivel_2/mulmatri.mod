MODULE mulmatrix;

IMPORT IO;

CONST
N=3;

TYPE
Columnas=ARRAY [1..N] OF INTEGER;
Matriz= ARRAY [1..N] OF Columnas;

VAR
m1,m2,msum:Matriz;
i,j,k:CARDINAL;

BEGIN
IO.RdLn;
IO.WrStr("Bueno, venga, vamos a multiplicar dos matrices de tama¤o ");
IO.WrCard(N,1);IO.WrStr(" por ");IO.WrCard(N,1);
IO.WrLn;IO.RdLn;
FOR i:=1 TO 2 DO
IO.WrLn;
IO.WrStr("Introduce los valores de la matriz ");IO.WrCard(i,1);
IO.WrStr(" :");IO.WrLn;IO.RdLn;
 FOR j:=1 TO N DO
   IO.RdLn;
  FOR k:=1 TO N DO
   IO.RdLn;
   IO.WrStr("Introduce el valor para la posici¢n ");IO.WrCard(j,1);
   IO.WrStr(",");IO.WrCard(k,1);IO.WrStr(" :");
   IF i=1 THEN
    m1[j][k]:=IO.RdCard();
   ELSE
    m2[j][k]:=IO.RdCard();
   END;
   END;
  END;
END;
IO.RdLn;

FOR i:=1 TO N DO
 FOR j:=1 TO N DO
  msum[i][j]:=0;
  END;
END;

FOR i:=1 TO N DO
 FOR j:=1 TO N DO
  FOR k:=1 TO N DO
   msum[i][j]:=msum[i][j] + m1[i,k]*m2[k,j];
  END;
 END;
END;

IO.WrStr("El valor de la matriz suma es:");
FOR i:=1 TO N DO
 FOR j:=1 TO N DO
  IO.WrCard(msum[i,j],1);
  IO.WrLn;
 END;
END;

END  mulmatrix.
