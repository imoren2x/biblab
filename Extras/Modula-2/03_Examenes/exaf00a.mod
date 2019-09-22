(*
 *
 * Laboratorio de Programacion I, Feb. 2000, 1 B, grupo A.
 *
 * exaf00a.MOD
 *)

MODULE exaf00a;

IMPORT IO;
IMPORT Window;

CONST
    N = 100;
    n = 5;
    q = 4;
    Q = 3;

TYPE
    conj = SET OF CHAR;
    cad = ARRAY [1..N] OF CHAR;

(**)
sucursal = RECORD
    ingresos: REAL;
    gastos: REAL;
END;
empresa=ARRAY [1..n] OF sucursal;
emporio=ARRAY [1..q] OF empresa;
(**)
fila=ARRAY [1..Q] OF CARDINAL;
matriz=ARRAY [1..Q],[1..Q] OF CARDINAL;


PROCEDURE pausa();
VAR
a:CHAR;
BEGIN
IO.WrLn;
IO.WrStr("Pulse una tecla para continuar.");
a:=IO.RdKey();
END pausa;

PROCEDURE consecutivas();
          PROCEDURE encadena(VAR c:ARRAY OF CHAR;VAR a:CHAR;s:conj);
          VAR
          i:CARDINAL;
          BEGIN
          i:=0;

          WHILE (a IN s) DO
          c[i]:=a;
          a:=IO.RdChar();
          i:=i+1;
          END;
          c[i]:=CHR(0);
          END encadena;

          PROCEDURE compara(c:ARRAY OF CHAR;a:ARRAY OF CHAR):BOOLEAN;
          VAR
          igual:BOOLEAN;
          i:CARDINAL;
          BEGIN
          igual:=TRUE;
          i:=0;
          WHILE ((c[i]<>CHR(0)) AND (a[i]<>CHR(0))) DO
           igual:=igual AND (c[i]=a[i]);
           i:=i+1;
          END;
          RETURN igual;
          END compara;


VAR
c,ant:cad;
a:CHAR;
s:conj;

BEGIN
Window.Clear;IO.RdLn;IO.WrLn;

s:=conj{'a'..'z'}; s:=s+conj{'A'..'Z'};

IO.WrStr("Escribe la cadena de caracteres.");IO.WrLn;
IO.WrStr(">>> ");
a:=IO.RdChar();
encadena(ant,a,s);
a:=IO.RdChar();
encadena(c,a,s);
WHILE ((a<>CHR(13)) AND (NOT(compara(c,ant)))) DO
IF compara(c,ant) THEN
 IO.WrStr(" Verdadero");
 pausa();
END;
a:=IO.RdChar();
ant:=c;
encadena(c,a,s);
END;
IF compara(c,ant) THEN
 IO.WrStr("Verdadero.");IO.WrLn;IO.WrLn;
 pausa();
ELSIF NOT(compara(c,ant)) THEN
 IO.WrStr("Falso.");IO.WrLn;IO.WrLn;
 pausa();
END;

END consecutivas;

PROCEDURE beneficio();

          PROCEDURE metedatos(VAR e:emporio);
          VAR
          i,j:CARDINAL;

          BEGIN
          FOR i:=1 TO q DO
           FOR j:=1 TO n DO
            e[i,j].ingresos:=0.;
            e[i,j].gastos:=0.;
           END;
          END;
          IO.RdLn;IO.WrLn;IO.WrLn;Window.Clear;
          IO.WrStr("Venga, mostro, mete los datos de las empresas.");IO.WrLn;
          FOR i:=1 TO q DO
           IO.WrStr("Introduce los datos de la empresa ");IO.WrCard(i,1);IO.WrStr(".");
           IO.WrLn;IO.RdLn;
           FOR j:=1 TO n DO
            IO.WrStr("Introduce los ingresos de la sucursal ");IO.WrCard(j,1);IO.WrStr(".");IO.WrLn;
            IO.WrStr(">>> ");
            e[i,j].ingresos:=IO.RdReal();
            IO.WrStr("Introduce los gastos de la sucursal ");IO.WrCard(j,1);IO.WrStr(".");IO.WrLn;
            IO.WrStr(">>> ");
            e[i,j].gastos:=IO.RdReal();
           END;
          END;

          END metedatos;

          PROCEDURE masingresos(e:emporio;VAR i:CARDINAL;VAR j:CARDINAL):REAL;
          VAR
          m,t,r:REAL;
          k,l:CARDINAL;
          BEGIN
          t:=0.;r:=0.;
          FOR k:=1 TO q DO
           FOR l:=1 TO n DO
            t:=e[k,l].ingresos - e[k,l].gastos;
            IF t>=m THEN
             m:=t;
            END;
            END;
            IF m>=r THEN
             r:=m;
            END;
            END;

           i:=k;
           j:=l;
           RETURN r;
           END masingresos;

VAR
e:emporio;
i,j:CARDINAL;
r:REAL;

BEGIN
metedatos(e);
r:=masingresos(e,i,j);
IO.WrLn;
IO.WrStr("La sucursal con m s beneficios es la ");IO.WrCard(j,1);IO.WrLn;
IO.WrStr("   que pertenece a la empresa ");IO.WrCard(i,1);
pausa();

END beneficio;

PROCEDURE procesamiento();
          PROCEDURE input(VAR m:matriz);
          VAR
          i,j:CARDINAL;
          a:CARDINAL;
          BEGIN
          Window.Clear;IO.RdLn;IO.WrLn;
          FOR i:=1 TO Q DO
           FOR j:=1 TO Q DO
            IO.WrStr("Da un valor para la posici¢n ");IO.WrCard(i,1);
            IO.WrStr(" ");IO.WrCard(j,1);IO.WrLn;IO.WrStr(">>> ");
            m[i,j]:=IO.RdCard();
           END;
          END;
          END input;

        PROCEDURE color(VAR m:matriz);
         PROCEDURE iz(j:CARDINAL):CARDINAL;
         VAR

         BEGIN
         IF j=1 THEN
          RETURN 3;
         ELSE
          RETURN j-1;
          END;
          END iz;

        PROCEDURE d(j:CARDINAL):CARDINAL;
        VAR

        BEGIN
        IF j=3 THEN
         RETURN 1;
        ELSE
         RETURN j+1;
        END;
        END d;

        PROCEDURE ar(i:CARDINAL):CARDINAL;
        BEGIN
        IF i=1 THEN
         RETURN 3;
        ELSE
         RETURN i-1;
        END;
        END ar;

        PROCEDURE ab(i:CARDINAL):CARDINAL;
        BEGIN
        IF i=3 THEN
         RETURN 1;
        ELSE
         RETURN i+1;
        END;
        END ab;

        VAR
        i,j:CARDINAL;
        BEGIN
        FOR i:=1 TO Q DO
         FOR j:=1 TO Q DO
          m[i,j]:=(m[i,iz(j)]+m[i,d(j)]+m[ar(i),j]+m[ab(i),j])DIV(4);
          END;
         END;
         END color;

        PROCEDURE output(m:matriz);
        VAR
        i,j:CARDINAL;

        BEGIN
        IO.WrLn;
        FOR i:=1 TO Q DO
         FOR j:=1 TO Q DO
          IO.WrLn;IO.WrStr("El nuevo valor de la posici¢n ");IO.WrCard(i,1);
          IO.WrStr(",");IO.WrCard(j,1);IO.WrStr("es: ");IO.WrLn;
          IO.WrStr(">>> ");IO.WrCard(m[i,j],1);
          pausa();
         END;
        END;
        END output;


VAR
m:matriz;

BEGIN
input(m);
color(m);
output(m);

END procesamiento;

PROCEDURE ordenacion();
          PROCEDURE metedatos(VAR e:emporio);
          VAR
          i,j:CARDINAL;

          BEGIN
          FOR i:=1 TO q DO
           FOR j:=1 TO n DO
            e[i,j].ingresos:=0.;
            e[i,j].gastos:=0.;
           END;
          END;
          IO.RdLn;IO.WrLn;IO.WrLn;Window.Clear;
          IO.WrStr("Venga, mostro, mete los datos de las empresas.");IO.WrLn;
          FOR i:=1 TO q DO
           IO.WrStr("Introduce los datos de la empresa ");IO.WrCard(i,1);IO.WrStr(".");
           IO.WrLn;IO.RdLn;
           FOR j:=1 TO n DO
            IO.WrStr("Introduce los ingresos de la sucursal ");IO.WrCard(j,1);IO.WrStr(".");IO.WrLn;
            IO.WrStr(">>> ");
            e[i,j].ingresos:=IO.RdReal();
            IO.WrStr("Introduce los gastos de la sucursal ");IO.WrCard(j,1);IO.WrStr(".");IO.WrLn;
            IO.WrStr(">>> ");
            e[i,j].gastos:=IO.RdReal();
           END;
          END;

          END metedatos;

          PROCEDURE intercambiar(VAR x,y:sucursal);
          VAR
          aux:sucursal;
          BEGIN
          aux.ingresos:=x.ingresos;
          aux.gastos:=x.gastos;
          x.ingresos:=y.ingresos;
          x.gastos:=y.gastos;
          y.ingresos:=aux.ingresos;
          y.gastos:=aux.gastos;

          END intercambiar;

          PROCEDURE subir_menor_burbuja(VAR e:ARRAY OF sucursal;p:CARDINAL);
          VAR
          i:CARDINAL;
          BEGIN
          FOR i:=q TO p+1 BY -1 DO
           IF ((e[i-1].ingresos)-(e[i-1].gastos))>((e[i].ingresos)-(e[i].gastos)) THEN
            intercambiar(e[i-1],e[i]);
           END;
           END;
          END subir_menor_burbuja;

          PROCEDURE burbuja(VAR c:ARRAY OF sucursal);
          VAR
          i:CARDINAL;
          BEGIN
          FOR i:=1 TO q-1 DO
           subir_menor_burbuja(c,i);
           END;
          END burbuja;

VAR
o:emporio;
i:CARDINAL;
BEGIN
Window.Clear;IO.RdLn;IO.WrLn;
metedatos(o);
FOR i:=1 TO n DO
 burbuja(o[i]);
 END;

END ordenacion;

(*=======================================================*)
VAR
fin:BOOLEAN;
c:CHAR;

BEGIN
fin:=TRUE;

WHILE fin DO
Window.Clear;
IO.RdLn;
IO.WrLn;
IO.WrStr("     Men£, febrero 2000 ");
IO.WrLn;
IO.WrStr("1. Palabras consecutivas.");IO.WrLn;
IO.WrStr("2. Cantidad de beneficio.");IO.WrLn;
IO.WrStr("3. Procesamiento de imagen.");IO.WrLn;
IO.WrStr("4. Ordenaci¢n.");IO.WrLn;
IO.WrStr("5. Salir.");IO.WrLn;
IO.WrLn;IO.WrLn;
IO.WrStr("           ");
IO.WrStr("A continuaci¢n, elija una de los programas:  ");
IO.WrLn;IO.WrStr(">>> ");
c:=IO.RdChar();
CASE c OF
 '1': consecutivas(); |
 '2': beneficio(); |
 '3': procesamiento(); |
 '4': ordenacion(); |
 '5': fin:=FALSE;
 ELSE
  IO.WrLn;IO.WrStr("Error, escoga otra opci¢n.");
  END;

END;

END exaf00a.
