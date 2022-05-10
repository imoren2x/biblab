Excepciones disponibles por defecto
======

| N     | Nombre            | Descripción                           |
|-------|-------------------|---------------------------------------|
| 1     | BaseException     | Clase de la que heredan todas las excepciones. |
| 2     | Exception(BaseException) | Superclase de todas las excepciones que no sean de salida. |
| 3     | StandardError(Exception) | Clase base para todas las excepciones que no tengan que ver con salir del intérprete. |

 4 ArithmeticError(StandardError)
	Clase base para los errores aritméticos.

 5 FloatingPointError(ArithmeticError)
	Error en una operación de coma flotante.

 6 OverflowError(ArithmeticError)
	Resultado demasiado grande para poder representarse.

 7 ZeroDivisionError(ArithmeticError)
	Falló la condición de un estamento assert.

 8 AttributeError(StandardError)
	No se encontró el atributo.

 9 GeneratorExit(Exception)
	Se pide que se salga de un generador.

10 EOFError(StandardError)
	Se intentó leer más allá del final de fichero.

11 EnvironmentError(StandardError)
	Clase padre de los errores relacionados con la entrada/salida.

12 IOError(EnvironmentError)
	Error en una operación de entrada/salida.

13 OSError(EnvironmentError)
	Error en una llamada a sistema.

14 WindowsError(OSError)
	Error en una llamada a sistema en Windows.

15 ImportError(StandardError)
	No se encuentra el módulo o el elemento del módulo que se quería importar.

16 LookupError(StandardError)
	Clase padre de los errores de acceso.

17 IndexError(LookupError)
	El índice de la secuencia está fuera del rango posible.

18 KeyError(LookupError)
	La clave no existe.

19 MemoryError(StandardError)
	No queda memoria suficiente.

20 NameError(StandardError)
	No se encontró ningún elemento con ese nombre.

21 UnboundLocalError(NameError)
	El nombre no está asociado a ninguna variable.

22 ReferenceError(StandardError)
	El objeto no tiene ninguna referencia fuerte apuntando hacia él.

23 RuntimeError(StandardError)
	Error en tiempo de ejecución no especificado.

24 NotImplementedError(RuntimeError)
	Ese método o función no está implementado.

25 SyntaxError(StandardError)
	Clase padre para los errores sintácticos.

26 IndentationError(SyntaxError)
	Error en la indentación del archivo.

27 TabError(IndentationError)
	Error debido a la mezcla de espacios y tabuladores.

28 SystemError(StandardError)
	Error interno del intérprete.

29 TypeError(StandardError)
	Tipo de argumento no apropiado.

30 ValueError(StandardError): Valor del argumento no apropiado.

31 UnicodeError(ValueError)
	Clase padre para los errores relacionados con unicode.

32 UnicodeDecodeError(UnicodeError)
	Error de decodificación unicode.

33 UnicodeEncodeError(UnicodeError)
	Error de codificación unicode.

34 UnicodeTranslateError(UnicodeError)
	Error de traducción unicode.

35 StopIteration(Exception)
	Se utiliza para indicar el final del iterador.

36 Warning(Exception)
	Clase padre para los avisos.

37 DeprecationWarning(Warning)
	Clase padre para avisos sobre características obsoletas.

38 FutureWarning(Warning)
	Aviso. La semántica de la construcción cambiará en un futuro.

39 ImportWarning(Warning)
	Aviso sobre posibles errores a la hora de importar.

40 PendingDeprecationWarning(Warning)
	Aviso sobre características que se marcarán como obsoletas en un futuro próximo.

41 RuntimeWarning(Warning)
	Aviso sobre comportmaientos dudosos en tiempo de ejecución.

42 SyntaxWarning(Warning)
	Aviso sobre sintaxis dudosa.

43 UnicodeWarning(Warning)
	Aviso sobre problemas relacionados con Unicode, sobre todo con problemas de conversión.

44 UserWarning(Warning)
	Clase padre para avisos creados por el programador.

45 KeyboardInterrupt(BaseException)
	El programa fué interrumpido por el usuario.

46 SystemExit(BaseException)
	Petición del intérprete para terminar la ejecución.