MODULE ELEMENTOS;

IMPORT IO;
IMPORT Window;
IMPORT MATHLIB;

CONST
    N = 50;
    M = 1500;

TYPE
    vector = ARRAY [1..N] OF CARDINAL;
    cadena = ARRAY [1..M] OF CHAR;

(* PROCEDURES *)

    (*
     *
     *)
    PROCEDURE pausa();

        VAR
            a : CHAR;

        BEGIN
            a := CHR(0);

        WHILE a = CHR(0) DO
            IO.WrLn;
            IO.WrStr("Pulse una tecla para continuar.");
            a := IO.RdKey();
        END;

    END pausa;

    PROCEDURE secuencia();

        (* *)
        PROCEDURE long(v : ARRAY OF CARDINAL; VAR i : CARDINAL; VAR ok : BOOLEAN) : CARDINAL;

            VAR
                ini : CARDINAL;
                long : CARDINAL;
            BEGIN
                ini := i;
                long := 1;
                i := i + 1;
                WHILE (v[i] <> v[ini]) AND (i < 50) DO
                    i := i + 1;
                   long := long + 1;
                END;

                IF i = 50 THEN
                    ok := TRUE;
                    RETURN 0;
                ELSE
                    RETURN long;
                END;

            END long;

        VAR
            a: LONGREAL;
            l1, l2, i: CARDINAL;
            v: vector;
            fin, leido: BOOLEAN;

        BEGIN
            IO.RdLn;Window.Clear;IO.WrLn;
            IO.WrStr("A continuacipn, dime el denominador del n£mero cuyo periodo vamos a hallar.");
            IO.WrLn;IO.WrStr(">>> ");
            a := IO.RdLngReal();
            a := 1./a;

            FOR i := 1 TO 50 DO
                v[i]:=VAL(CARDINAL,a*10.);
                a:=a*10.-VAL(LONGREAL,v[i]);
            END;

            i := 1;
            fin := FALSE;
            l1 := long(v, i, fin);
            l2 := long(v, i, fin);

            IF (l1 = l2) AND (NOT(fin)) THEN
                IO.WrLn;
                IO.WrStr("La longitud del periodo es ");
                IO.WrCard(l2,1);
                IO.WrStr(" .");
                pausa();
                leido := TRUE;
            ELSE
                l1 := l2;
                WHILE NOT(fin) DO
                    l2 := long(v, i, fin);
                    IF ((l1=l2) AND (NOT(fin)) AND (NOT(leido))) THEN
                        IO.WrLn;
                        IO.WrStr("La longitud del periodo es ");
                        IO.WrCard(l2, 1);
                        IO.WrStr(" .");
                        pausa();
                    ELSE
                        l1 := l2;
                        l2 := long(v, i, fin);
                    END;
                END;
            END;

            IF (l1 = l2) AND NOT(leido) THEN
                IO.WrLn;
                IO.WrStr("La longitud del periodo es ");
                IO.WrCard(l2, 1);
                IO.WrStr(" .");
                pausa();
            END;

    END secuencia;

        PROCEDURE comentario();

            PROCEDURE nocomment(p:ARRAY OF CHAR; c:ARRAY OF CHAR; f:ARRAY OF CHAR; VAR des:ARRAY OF CHAR);

                VAR

                BEGIN
                  (* buscaycopia *)

            END nocomment;

            VAR
                p, c, f, des: cadena;

        BEGIN
            IO.RdLn;
            Window.Clear;
            IO.WrLn;
            IO.WrStr("Introduce la palabra que quieres que sea el principio del comentario.");
            IO.WrLn;
            IO.WrStr(">>> ");
            IO.RdStr(p);
            IO.WrLn;
            IO.WrLn;
            IO.WrStr("Ahora, introduce la palabra que ser  el final del comentario.");
            IO.WrLn;
            IO.WrStr(">>> ");
            IO.RdStr(f);
            IO.WrLn;
            IO.WrLn;
            IO.WrStr("Ahora, introduce la cadena de caracteres, por favor.");
            IO.WrLn;
            IO.WrStr(">>> ");
            IO.RdStr(f);
            nocomment(p, c, f, des);
            IO.WrLn;
            IO.WrStr("La cadena resultante es:");IO.WrLn;
            IO.WrStr(">>> ");
            IO.WrStr(des);
            pausa();

        END comentario;

        PROCEDURE sopaletra();
            VAR
            BEGIN
        END sopaletra;

        PROCEDURE romanos();
            VAR
            BEGIN
        END romanos;


VAR
    fin: BOOLEAN;
    a: CARDINAL;
    b: CHAR;

BEGIN
    fin:=FALSE;

    WHILE NOT(fin) DO
        IO.RdLn;
        Window.Clear;
        IO.WrLn;
        IO.WrStr("           Men£ Principal. ");IO.WrLn;IO.WrLn;
        IO.WrStr("1. Secuencia 1/n.");IO.WrLn;
        IO.WrStr("2. Comentario/Fincomentario.");IO.WrLn;
        IO.WrStr("3. Sopa de letras.");IO.WrLn;
        IO.WrStr("4. Romanos.");IO.WrLn;
        IO.WrStr("5. Salir.");IO.WrLn;IO.WrLn;
        IO.WrStr("Elige una de las opciones.");IO.WrLn;
        IO.WrStr(">>> ");
        a:=IO.RdCard();
        CASE a OF
            | 1: secuencia();
            | 2: comentario();
            | 3: sopaletra();
            | 4: romanos();
            | 5: IO.WrLn;IO.RdLn;IO.WrStr("Esta seguro de que desea salir? (s/n)");
                b := IO.RdKey();
                IF CAP(b) = 'S' THEN
                    fin := TRUE;
                END;

        ELSE
            IO.WrStr("La opcion elegida es incorrecta.");
            pausa();

        END;

    END; (* WHILE *)

END ELEMENTOS.
