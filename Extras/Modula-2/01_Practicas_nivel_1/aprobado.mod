MODULE aprobado;

IMPORT IO;
IMPORT Str;

CONST
    N = 20;

TYPE
    Nota = REAL;
    Notas = ARRAY [1..3] OF  Nota;
    Name = ARRAY [1..N] OF CHAR;
    regalum = RECORD
            Nombre: Name;
            Nota: Notas;
            END;
    alumnos = ARRAY [1..N] OF regalum;

(*
 * ennota: Fija la nota j-esima del alumno i-esimo
 *  en el array c.
 *)
PROCEDURE ennota(VAR i:CARDINAL; j:CARDINAL; VAR c:alumnos);
    VAR

    BEGIN
        c[i].Nota[j] := IO.RdReal();

END ennota;

(*
 * Funcion que devuelve la nota media de todos
 *  los alumnos en el j-esimo examen.
 *)
PROCEDURE mediaeva(c: alumnos; n:CARDINAL; j:CARDINAL): REAL;
    VAR
        media: REAL;
        k: CARDINAL;
    BEGIN
        media := 0.;
        FOR k:=1 TO n DO
            media := media + c[k].Nota[j];
        END;
        RETURN media;
END mediaeva;

(* 
 * Procedimiento que, a partir de la media m
 *  y de la nota i-esima, imprime por pantalla
 *  el resultado de su nota.
 *)
PROCEDURE aprobados(c:alumnos; m:REAL; n:CARDINAL; i:CARDINAL);
    VAR
        k: CARDINAL;

    BEGIN
        FOR k:=1 TO n DO
            IO.WrLn;
            IO.WrStr("El alumno ");
            IO.WrStr(c[k].Nombre);IO.WrStr(" ha sacado: ");
            IF c[k].Nota[i] >= 8.5 THEN
                IO.WrStr("sobresaliente");
            ELSIF c[k].Nota[i] >= 7.5 THEN
                IO.WrStr("Notable");
            ELSIF c[k].Nota[i] >= m THEN
                IO.WrStr("aprobado");
            ELSE
                IO.WrStr("suspenso");
            END;
            IO.WrLn;
        END;(*FOR*)

END aprobados;

VAR
    i, j, n: CARDINAL;
    a, c: CHAR;
    chavales: alumnos;
    media: REAL;

BEGIN
    IO.RdLn;
    IO.WrLn;
    IO.WrStr("Cuantos chavales se han matriculado en Teleco Superior ");
    IO.WrLn;
    IO.WrStr("en el curso 1.999/2.000?:");
    IO.WrStr(">> ");
    n := IO.RdCard();
    FOR i:=1 TO n DO
        IO.WrLn;
        IO.RdLn;
        IO.WrStr("Escribe su nombre: ");
        IO.RdStr(chavales[i].Nombre);
        IO.RdLn;
        FOR j:=1 TO 3 DO
            IO.WrStr("Escribe la nota de la evaluaci¢n ");
            IO.WrCard(j, 1);
            IO.WrStr(" :");
            ennota(i, j, chavales);
        END;
    END;(*FOR*)

    FOR i := 1 TO 3 DO
        media := mediaeva(chavales, n, i);
        
        aprobados(chavales, media, n, i);
    END;

END aprobado.