(*
 *
 * Laboratorio de Programacion I, Feb. 2000, grupo B.
 *
 * exaf00b.MOD
 *)

MODULE exaf00b;

IMPORT IO;
IMPORT Window;

CONST
    N = 100;
    n = 10;

TYPE
    cadena = ARRAY [1..N] OF CHAR;
    (**)
    polinomiox = ARRAY [1..10] OF REAL;
    (**)
    sets = SET OF CHAR;
    texto = cadena;
    parrafo = ARRAY [1..n] OF texto;
    superset = ARRAY [1..n] OF sets;
    (**)
    torrex = parrafo;

(* PROCEDURES *)
    PROCEDURE pausa();
        VAR
            a: CHAR;

        BEGIN
            IO.RdLn;IO.WrLn;
            IO.WrStr("Pulse una tecla para continuar. ");
            a := IO.RdKey();

    END pausa;

    PROCEDURE invertir();
        PROCEDURE input2cad():cadena;
            VAR
                c: cadena;
                i: CARDINAL;
                a: CHAR;

            BEGIN
                i := 1;
                WHILE a<>CHR(13) DO
                    c[i] := a;
                    i := i + 1;
                    a := IO.RdChar();
                END;
                c[i] := CHR(0);
                RETURN c;

        END input2cad;

        PROCEDURE pares(VAR c: cadena);

            PROCEDURE length(c:cadena; j: CARDINAL): CARDINAL;
            VAR
                l: CARDINAL;
            BEGIN
                l:=0;
                (*j:=j+1;*)
                WHILE ((c[j+l]<>CHR(0)) AND (c[j+l]<>CHR(32))) DO
                 l:=l+1;
                END;
                RETURN l-1;
            END length;

            PROCEDURE encadena(c: cadena; VAR j: CARDINAL; VAR fin: BOOLEAN);
                VAR

                BEGIN
                WHILE ((c[j]<>CHR(32)) AND (c[j]<>CHR(0))) DO
                j:=j+1;
                END;
                IF c[j]=CHR(0) THEN
                 fin:=TRUE;
                ELSIF c[j]=CHR(32) THEN
                 j:=j+1;
                END;

            END encadena;

            PROCEDURE invpal(VAR c:cadena;j:CARDINAL);
            VAR
            i,l:CARDINAL;
            aux:CHAR;
            BEGIN
            l:=length(c,j);
            i:=0;
            WHILE ((j+i)<=(j+l)) DO
            aux:=c[j+l];
            c[j+l]:=c[i+j];
            c[j+i]:=aux;
            i:=i+1;
            l:=l-1;
            END;
            END invpal;

           PROCEDURE escribe(VAR c:cadena);
           VAR
           i:CARDINAL;

           BEGIN
           i:=1;
           IO.WrLn;IO.WrStr("La cadena resultante es la siguiente: ");
           IO.WrLn;IO.WrStr(">>> ");
           WHILE c[i]<>CHR(0) DO
           IO.WrChar(c[i]);
           i:=i+1;
           END;
           END escribe;

          VAR
          i,j:CARDINAL;
          fin:BOOLEAN;
          BEGIN
          i:=1;
          j:=1;
          fin:=FALSE;
          (*encadena(c,j,fin);*)
          WHILE NOT(fin) DO
          encadena(c,j,fin);
          i:=i+1;
          IF (i MOD 2)=0 THEN
           invpal(c,j);
          END;
          (* IF c[i]=CHR(13) THEN
           fin:=TRUE;
          END; *)
          END;
          escribe(c);
          pausa();
          END pares;
        VAR
        c:cadena;

        BEGIN
        IO.RdLn;Window.Clear;IO.WrLn;
        IO.WrStr("Introduce la cadena de caracteres y date prisita, colega.");
        IO.WrLn;IO.WrStr(">>> ");
        IO.RdStr(c);
        pares(c);
        END invertir;

        PROCEDURE polinomio();
         PROCEDURE inputpol(VAR p:polinomiox);
         VAR
         i:CARDINAL;
         BEGIN
         IO.WrLn;IO.RdLn;
         FOR i:=1 TO 10 DO
          p[i]:=0.;
         END;
         FOR i:=1 TO 10 DO
         IO.RdLn;IO.WrLn;IO.WrStr("Introduce el coeficiente de grado ");IO.WrCard(10-i,1);
         IO.WrStr(":");IO.WrLn;IO.WrStr(">>> ");
         p[i]:=IO.RdReal();
         END;
         END inputpol;

         PROCEDURE suma(p,p1:polinomiox):polinomiox;
         VAR
         psum:polinomiox;
         i:CARDINAL;
         BEGIN
         FOR i:=1 TO 10 DO
          psum[i]:=0.;
         END;
         FOR i:=1 TO 10 DO
          psum[i]:=p[i]+p1[i];
         END;
         RETURN psum;
         END suma;

        PROCEDURE printf(p:polinomiox);
        VAR
        i:CARDINAL;
        BEGIN
        IO.WrLn;
        IO.WrStr("El polinomio resultante es: ");
        FOR i:=1 TO 10 DO
         IO.WrLn;IO.WrStr("El coeficiente de grado ");IO.WrCard(10-i,1);
         IO.WrStr("es: ");IO.WrReal(p[i],5,5);
        END;
        pausa();
        END printf;

        VAR
        p,p1,psum:polinomiox;
        BEGIN
        IO.RdLn;Window.Clear;IO.WrLn;
        IO.WrStr("Venga, campe¢n, dame el primer polinomio que quieres que");
        IO.WrLn;IO.WrStr("  te sume.");
        inputpol(p);
        IO.WrLn;IO.WrStr("Ahora dame el segundo polinomio a sumar. ");
        inputpol(p1);
        psum:=suma(p,p1);
        printf(psum);

        END polinomio;

        PROCEDURE letras();
        VAR
        p:parrafo;
        a,i,j:CARDINAL;
        s,s1,ant,s3:sets;
        BEGIN
        IO.RdLn;Window.Clear;IO.WrLn;
        IO.WrStr("¨Cu ntas l¡neas tiene el p rrafo?");IO.WrLn;
        IO.WrStr(">>> ");
        a:=IO.RdCard();
        FOR i:=1 TO a DO
         IO.WrLn;IO.WrStr("Escribe el texto para la l¡nea ");
         IO.WrCard(i,1);IO.WrStr(":");
         IO.WrLn;IO.WrStr(">>> ");
         IO.RdStr(p[i]);
        END;
        s:=sets{};s:=s+sets{'a'..'z'}+sets{'A'..'Z'};
        j:=1;s1:=sets{};ant:=s;s3:=s;
        FOR i:=1 TO a DO
         WHILE p[i,j]<>CHR(0) DO
          IF (p[i,j] IN s) THEN
           s1:=s1+sets{p[i,j]};
          END;
          s3:=s1*ant*s3;
          ant:=s1;
          END;
          END;
          IO.WrLn;IO.WrStr("Los caracteres comunes a todas las l¡neas son:");
          IO.WrLn;IO.WrStr(">>> ");
         FOR i:=0 TO 255 DO
          IF CHR(i) IN s3 THEN
           IO.WrChar(CHR(i));
           IO.WrStr(" ");
           END;
         END;
          pausa();
        END letras;

        PROCEDURE torre();
          PROCEDURE colocapiso();
          VAR
          p:torrex;
          BEGIN

          END colocapiso;

          PROCEDURE retirapiso();
          VAR
          BEGIN
          END retirapiso;

          PROCEDURE abandona();
          VAR
          BEGIN
          END abandona;

        VAR
        a:CHAR;
        fin:BOOLEAN;
        BEGIN
        fin:=TRUE;
        WHILE fin DO
        IO.RdLn;Window.Clear;IO.WrLn;
        IO.WrStr("     Torre de letras.");IO.WrLn;
        IO.WrStr("1. Colocar un piso.");IO.WrLn;
        IO.WrStr("2. Retirar un piso.");IO.WrLn;
        IO.WrStr("3. Abandonar construcci¢n.");IO.WrLn;
        IO.WrStr("4. Salir.");
        IO.WrLn;IO.WrStr("Elige una opci¢n.");IO.WrLn;
        IO.WrStr(">>> ");
        a:=IO.RdChar();
        CASE a OF
         |'1': colocapiso();
         |'2': retirapiso();
         |'3': abandona();
         |'4': fin:=FALSE;
         ELSE
           IO.WrStr("Opci¢n incorrecta.");
         END;
         END;
        END torre;

VAR
    fin: BOOLEAN;
    a: CHAR;

BEGIN
    fin := TRUE;
    WHILE fin DO
        IO.RdLn;Window.Clear;IO.WrLn;
        IO.WrStr("   Men£. Feb'2000 ");IO.WrLn;IO.WrLn;
        IO.WrStr("1. Invertir palabras pares. ");IO.WrLn;
        IO.WrStr("2. Suma de polinomios. ");IO.WrLn;
        IO.WrStr("3. Letras comunes. ");IO.WrLn;
        IO.WrStr("4. Torre de letras. ");IO.WrLn;
        IO.WrStr("5. Salir.");IO.WrLn;IO.WrLn;
        IO.WrStr("Elige una opci¢n: ");IO.WrLn;
        IO.WrStr(">>> ");
        a := IO.RdChar();

        CASE a OF
            | '1': invertir();
            | '2': polinomio();
            | '3': letras();
            | '4': torre();
            | '5': fin := FALSE;
        ELSE
           IO.WrLn;IO.WrStr("Opci¢n incorrecta. ");
        END;
    END;

END exaf00b.
