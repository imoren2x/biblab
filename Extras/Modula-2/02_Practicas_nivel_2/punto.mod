MODULE Punto;

IMPORT Graph,Lib;

VAR
    i, color: INTEGER;

BEGIN
    Graph.InitCGA(); (* ¢ InitEGA, InitVGA, InitHerc, InitATT *)
    Graph.GraphMode();
    FOR i:=0 TO 200 DO
     FOR color:=0 TO 3 DO
       Graph.Plot(i(*=x*),i(*=y*),color(*numero del color*));
     END;
    END;
    Lib.Delay(10000);
    Graph.TextMode();

END Punto.
