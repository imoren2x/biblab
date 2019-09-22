MODULE dosletras;

IMPORT IO;
IMPORT Window;

VAR
c1,c2,a,b:CHAR;
i:CARDINAL;

BEGIN
IO.RdLn;
IO.WrStr("Dime cu les son los dos caracteres que tengo que encontrar :");
c1:=IO.RdChar();
c2:=IO.RdChar();
IF ((c1=CHR(13)) OR (c2=CHR(13))) THEN
   IO.WrStr("No son v lidos los caracteres fin de cadena. ");
   Window.GotoXY(1,8);
   END;
IO.RdLn;
IO.WrStr("Bueno, venga, mete la cadena de caracteres en ASCIIZ: ");IO.WrLn;
a:=IO.RdChar();
b:=IO.RdChar();
i:=0;
WHILE ((a<>CHR(13)) AND (b<>CHR(13))) DO
      IF a=c1 THEN
        IF b=c2 THEN
           i:=i+1;
           IO.WrLn;
           IO.WrStr("Los dos caracteres han aparecido ");
           IO.WrCard(i,1);IO.WrStr(" veces.");
         END;
       ELSE
         a:=b;
         b:=IO.RdChar();
       END;
END;

END dosletras.
