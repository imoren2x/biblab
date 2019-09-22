(*
 *
 * Laboratorio de Programacion 1.
 * Examen del 8 de Febrero de 1.999 (Turno 1)
 *
 *)

MODULE exaf99t1;

IMPORT IO;
IMPORT Window;
IMPORT MATHLIB;

CONST
    N = 40;
    pi = 3.141516;
    M = 10;

TYPE
    sets = SET OF CHAR;
    cadena = ARRAY [1..N] OF CHAR;
    vector = ARRAY [1..M] OF INTEGER;

(* PROCEDURE *)
    PROCEDURE pausa();
        VAR
        a:CHAR;
        BEGIN
        IO.WrLn;
        a:=CHR(0);
        WHILE a=CHR(0) DO
         IO.WrStr("Pulse una tecla para continuar.");
         a:=IO.RdKey();
         END;
    END pausa;

    PROCEDURE long(c:ARRAY OF CHAR;VAR j:CARDINAL;s:sets;VAR ok:BOOLEAN):CARDINAL;
        VAR
        l:CARDINAL;
        BEGIN
        l:=0;
        WHILE ((c[j]<>CHR(0)) AND (c[j] IN s)) DO
        l:=l+1;
        j:=j+1;
        END;

        IF NOT(c[j] IN s) THEN
         j:=j+1;
        ELSIF (c[j]=CHR(0)) THEN
         ok:=TRUE;
        END;
        RETURN l;
    END long;

    PROCEDURE bolanieve();
        VAR
        c:cadena;
        bola,fin:BOOLEAN;
        l1,l2,j:CARDINAL;
        s:sets;
        BEGIN
        IO.RdLn;Window.Clear;IO.WrLn;
        IO.WrStr("Introduce la bola de nieve. ");IO.WrLn;
        IO.WrStr(">>> ");
        IO.RdStr(c);
        j:=1;fin:=FALSE;s:=sets{};s:=s+sets{'a'..'z'}+sets{'A'..'Z'};
        l1:=long(c,j,s,fin);
        l2:=long(c,j,s,fin);
        IF l1>=l2 THEN
         bola:=FALSE;
        ELSE
         l1:=l2;bola:=TRUE;
         WHILE ((NOT(fin)) AND (bola)) DO
         l2:=long(c,j,s,fin);
         IF l1<l2 THEN
          l2:=l1;
          l2:=long(c,j,s,fin);
          ELSE
           bola:=FALSE;
          END;
          END;
        END;
         IF ((l2>l1) AND (bola)) THEN
          IO.WrLn;IO.WrStr("Hay una bola de nieve.");
          ELSE
          IO.WrLn;IO.WrStr("No hay una bola de nieve.");
          END;
          pausa();
    END bolanieve;

    PROCEDURE funcion();

        PROCEDURE f(x:LONGREAL):LONGREAL;
            BEGIN
            RETURN  30.*MATHLIB.Sin(x);
        END f;

        PROCEDURE representar();
            VAR
            i,j,k:CARDINAL;
            p,x:LONGREAL;
            BEGIN
            x:=0.;
            p:=(pi)/24.;
            FOR i:=1 TO 24 DO
              FOR j:=1 TO 40 DO
               IO.WrStr(" ");
              END;
              FOR k:=1 TO VAL(CARDINAL,f(x)) DO
               IO.WrStr(" ");
              END;
              IO.WrStr("*");
              x:=x+p;
              IO.WrLn;
            END;
        END representar;

        VAR
        i:CARDINAL;

        BEGIN
            IO.RdLn;Window.Clear;IO.WrLn;
            IO.WrStr("Bueno, vamos a dibujar la funci¢n seno desde 0 hasta pi.");IO.WrLn;
            representar();
            pausa();

    END funcion;

    PROCEDURE Str2Cad();
         PROCEDURE convierte(c:ARRAY OF CHAR):CARDINAL;
         VAR
         n,i:CARDINAL;
         BEGIN
         n:=0;i:=0;

         WHILE c[i]<>CHR(0) DO
          n:=n*10 + (ORD(c[i])-48);
          i:=i+1;
          END;

         RETURN n
         END convierte;

         PROCEDURE base10(n,a:CARDINAL):CARDINAL;
         VAR
         num:CARDINAL;
         b:CARDINAL;
         BEGIN
         num:=(n MOD 10);
         n:=n DIV 10;
         b:=a;
         WHILE (n DIV 10 >0) DO
          num:=num+(n MOD 10)*a;
          a:=a*b;
          n:=n DIV 10;
          END;
          num:=num+(n MOD 10)*a;
         RETURN num;

         END base10;

        VAR
        c:cadena;
        a,n,num:CARDINAL;
        baseok:BOOLEAN;
        BEGIN
        IO.RdLn;Window.Clear;IO.WrLn;
        IO.WrStr("Introduce la cadena de caracteres que va a ser procesada.");IO.WrLn;
        IO.WrStr(">>> ");
        IO.RdStr(c);
        baseok:=TRUE;
        WHILE baseok DO
         IO.RdLn;
         IO.WrLn;IO.WrStr("Introduce la base en que estaba el n£mero anterior.");
         IO.WrLn;IO.WrStr(">>> ");
         a:=IO.RdCard();
        IF a>=17 THEN
         baseok:=TRUE;
         IO.WrStr("Esta base no es correcta.");
        ELSE
         baseok:=FALSE;
        END;
        END;
        n:=convierte(c);
        num:=base10(n,a);
        IO.WrLn;IO.WrStr("El n£mero en base 10 es el ");IO.WrCard(num,10);
        IO.WrStr(".");
        pausa();

    END Str2Cad;

        PROCEDURE Ordenar();
         PROCEDURE intercambio(VAR v:ARRAY OF INTEGER);
          PROCEDURE subir_menor_burbuja(VAR v:ARRAY OF INTEGER;posicion:CARDINAL);
             PROCEDURE intercambiar(VAR x:INTEGER; VAR y:INTEGER);
              VAR
              aux:INTEGER;
              BEGIN
              aux:=x;
              x:=y;
              y:=aux;
             END intercambiar;

          VAR
          i:CARDINAL;
          BEGIN
          FOR i:=M TO posicion+1 BY -1 DO
           IF v[i-1]>v[i] THEN
            intercambiar(v[i-1],v[i]);
            END;
           END;
          END subir_menor_burbuja;

         VAR
         i:CARDINAL;
         BEGIN
         FOR i:=1 TO M DO
          subir_menor_burbuja(v,i);
         END;
         END intercambio;

        VAR
        v:vector;
        i:CARDINAL;
        BEGIN
        IO.RdLn;Window.Clear;IO.WrLn;
        IO.WrStr("Bueno, venga, este vector necesita valores, as¡ que d selos.");IO.WrLn;
        FOR i:=1 TO M DO
         IO.WrLn;IO.WrStr("Escribe el valor para la componente ");IO.WrCard(i,1);IO.WrStr(" .");IO.WrLn;
         IO.WrStr(">>> ");
         v[i]:=IO.RdInt();
        END;
         intercambio(v);
         IO.WrLn;IO.WrStr("El vector resultante es este.");
         FOR i:=1 TO M DO
          IO.WrInt(v[i],2);IO.WrStr(" ");
         END;
         pausa();
        END Ordenar;

VAR
fin:BOOLEAN;
a:CARDINAL;

BEGIN
fin:=FALSE;
WHILE NOT(fin) DO
IO.RdLn;Window.Clear;IO.WrLn;
IO.WrStr("- - - - - - - - - - - - - M E N é   P R I N C I P A L - - - - - - - - - - - - ");IO.WrLn;IO.WrLn;
IO.WrStr("Nombre Apellidos, 2000.                              e-mail");IO.WrLn;
IO.WrStr("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");IO.WrLn;
IO.WrLn;

IO.WrStr("[1] Bola de nieve. ");IO.WrLn;
IO.WrStr("[2] Representar una funci¢n.");IO.WrLn;
IO.WrStr("[3] Str2Cad.");IO.WrLn;
IO.WrStr("[4] Ordenar.");IO.WrLn;
IO.WrStr("[5] Salir.");IO.WrLn;IO.WrLn;
IO.WrStr("Eliga uno de los programas.");IO.WrLn;
IO.WrStr(">>> ");
a:=IO.RdCard();
CASE a OF
     | 1: bolanieve();
     | 2: funcion();
     | 3: Str2Cad();
     | 4: Ordenar;
     | 5: fin:=TRUE;
     ELSE IO.WrStr("Opci¢n incorrecta.");pausa();
     END;

END;

END exaf99t1.
