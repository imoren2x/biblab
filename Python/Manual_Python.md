Python para todos (Python 2.x y 3.x)
======

Manual: http://mundogeek.net/tutorial-python/ \
Markdown Cheatsheet: https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet \
Differences between Python 2.x and Python 3.x: https://sebastianraschka.com/Articles/2014_python_2_3_key_diff.html

```
I. Parte b�sica
1. Tipos, colecciones, variables, constantes, operadores, control de flujo,
funciones, recursividad, comentarios, arg, i/o/e std, ficheros, m�dulos y paquetes, entorno de ejecuci�n
2. OOP
3. Excepciones
4. M�dulos y paquetes
5. Ficheros

II. Parte intermedia
6. 1 pdb � The Python Debugger
7. 2 Testing, documentaci�n (Pydoc, Epydoc)
9. 4 Distribuir paquetes, decoradores, generadores y patrones de dise�o (singleton, factory, etc.)

III. Parte avanzada
10. 1 Sockets
11. 2 Threads
12. 3 Databases, XML, YAML
13. 4 Expresiones regulares
14. 6 Webs
15. 7 Marshalling
16. 8 Code obfuscation

Python standard libraries
References
```
-----------------------------------------------------

I. Parte b�sica:
======

```
Cap�tulo 1. Tipos, Colecciones, operadores, control de flujo,
    funciones, comentarios, arg, i/o std, m�dulos
    1.1 Tipos y colecciones
        1.1.1 N�meros: int
        1.1.2 Strings: str
        1.1.3 Booleanos: bool
        1.1.4 Colecciones:
            1 Listas: list []
            2 Tuplas: tuple ()
            3 Diccionarios: dict {}
            4 Conjuntos: set {}
    1.2 Operadores aritm�ticos, de bits, booleanos y relacionales
    1.3 Control de flujo
    1.4 Funciones
    1.5 Comentarios
    1.6 Argumentos desde la l�nea de comandos (sys.argv[])
    1.7 Entrada y salida est�ndar
    1.8 M�dulos importantes
    1.9 Entorno de ejecuci�n: Python (__name__, etc.) (hay que a�adirlo)

Cap�tulo 2. OOP
    2.1 Clases y objetos
        2.1.1 Constructores y destructores
        2.1.2 Atributos de clase (est�ticos)
    2.2 Herencia (simple, m�ltiple), overriding de m�todos y sobrecarga de m�todos, polimorfismo
        2.2.1 Herencia m�ltiple
        2.2.2 Polimorfismo
        2.2.3 Sobrecarga de m�todos
        2.2.4 Sobrecarga de operadores
    2.3 M�todos p�blicos, privados y especiales

Cap�tulo 3. Excepciones
    3.1 Tratamiento de excepciones: try, except y raise.
    3.2 Definici�n de nuevas excepciones: clase Exception + herencia

Cap�tulo 4. M�dulos
    4.1 M�dulos
    4.2 Paquetes

Cap�tulo 5. Ficheros
    5.1 Apertura/Cierre de ficheros: f.open(), f.close()
    5.2 Lectura/Escritura de ficheros:
        .read(iN)/.write(sText),
        .readline()/.writeline(sText),
        .readlines()/.writelines(lsText)
    5.3 Acceso a ficheros: tell() y seek()
```

# Cap�tulo 1. Tipos, Colecciones, operadores, control de flujo, funciones, i/o std

```
1.1 Tipos y colecciones
    1.1.1 N�meros: int
    1.1.2 Strings: str
    1.1.3 Booleanos: bool
    1.1.4 Colecciones:
        1 Listas: list []
        2 Tuplas: tuple ()
        3 Diccionarios: dict {}
        4 Conjuntos: set {}
1.2 Operadores aritm�ticos, de bits, booleanos y relacionales
1.3 Control de flujo
1.4 Funciones
1.5 Comentarios
1.6 Argumentos desde la l�nea de comandos (sys.argv[])
1.7 Entrada y salida est�ndar
1.8 M�dulos importantes
1.9 Entorno de ejecuci�n: Python (__name__, etc.)
```

## 1.1 Tipos y colecciones
Python built-in types: [The Python Standard Library � Built-in Types]

Tipo:
```python
>> type(<variable>)
```

Casting:
```python
>> str(<variable>)
>> int(<variable>)
```

Borrado:
```python
>> del <variable>
```

### 1.1.1 N�meros
Entero:
```python
    Normal:     >>> x = 3       ( type(x) = int )
    Long:       >>> x = 3L      ( type(x) = long )
    Octal:      >>> x = 023     ( x = 19 en base 10)
    Hex:        >>> x = 0x17    ( x = 23 en base 10)
```
Coma flotante:
```python
    >>> x = 15.57   ( type(x) = float )
```
Complejos:
```python
    >>> x = 3 + 2j  ( type(x) = complex )
```

### 1.1.2 Cadenas de caracteres (Strings)
Puede expresarse de varias formas:
* Comillas simples: ```'hola'```
* Comillas dobles: ```"hola"```
* Unicode: ```u"���"``` (en Python 3.0, todo es Unicode)
* Raw:
```python
r"ab\c"  # No hay que escapar la barra invertida.
r'El libro dice "hola, caracola".'
```
* Comillas triples:
```
"""
se puede
extender por
varios p�rrafos
"""
```
* Caracteres de escape:
```
    \n  New line
    \t  Tab space
```
* Operadores:
```
    +       concatenaci�n
    int *   repetici�n
```
#### M�todos:

| M�todo                                | Retorna           | Descripci�n | Example |
|---------------------------------------|-------------------|-------------|---------|
| ```S.count(substr[, start[, end]])``` | ```return int```  | Number of sub-string occurrences. |   |
| ```S.find(sub[, start[, end]])```     | ```return int```  | Find index position of sub-string. |  |
| ```S.join(sequence)```                | ```return str```  | Use str to join sequence of str. | ```" ".join(["It", "is", "ok"]) -> 'It is ok'``` |
| ```S.split([sep [,maxsplit]])```      | ```return list``` | Split S str from left-to-right using sep as separator. | ```'It is ok'.split(' ') -> ['It', 'is', 'ok']``` |
| ```S.rsplit([sep [,maxsplit]])```     | ```return list``` | Split S str from right-to-left using sep as separator. | ```'It is ok'.rsplit(' ') -> ['It', 'is', 'ok']``` |
| ```S.partition(sep)```                | ```return 3-tuple``` | Partition of string in 3-tuple, before, sep and after. | ```'It is ok'.rpartition(' ') -> ('It is', ' ', 'ok')```  |
| ```S.rpartition(sep)```                | ```return 3-tuple``` | Partition of string in 3-tuple, before, sep and after. |   |
| ```S.replace(old, new[, count])```    | ```return str```  | Replace old sub-string with the new one. |    |

##### References:
* [Python 3: String methods]
* [Python 2: String]
* [Python 3: String]
* [Python 3: String constants]
* [Learn Python 3: String formatting]
* [Python 3: String >> String formatting]

#### printf-style formatting
* Reference: [Python 3 Standard library >> Built-in Types >> printf-style formatting]

#### Custom string formatting

* Reference: [Python 3: String >> Custom String Formatting]

#### f-strings (new in Python 3.6)

* Reference: [Python 3: Lexical Analysis >> f-string]

More references:
* [3.10.4 Documentation � The Python Standard Library � Text Processing Services]

### 1.1.3 Booleanos:
Valores:
```python
True, False
```

### 1.1.4 Colecciones

#### 1.1.4.1 Listas: ```[]```
```python
    l = [22, True, "una lista", [1, 2]]
          0    1        2          3
         -4   -3       -2         -1

    Slicing:
        [inicio, fin]   [inicio:fin:salto]  [inicio:] [:fin]
        l[0:1] = [22]
        l[0:2] = [22, True]
        l[0::] imprimir toda la lista.
        l[::-1] imprimir en orden inverso.
```
* Operaciones:

```
    +   concatenaci�n   lappended = l1 + l2
    []  Acceso y rango  L[i], 0 <= i <= len(L)

```

#### M�todos:

| M�todo                                | Retorna           | Descripci�n | Example |
|---------------------------------------|-------------------|-------------|---------|
| ```L.append(<object>)```  | ```return None``` | A�adir un elemento en la cola. |    |
| ```L.remove(value)``` |                         |     |   |
| ```L.extend(iterable)```  |                     |     |    |
| ```L.count(value)```  |                     |     |    |
| ```L.index(value[, start[, stop]])``` |                     |     |    |
| ```L.insert(index, object)```  |                     |     |    |
| ```L.pop([index])```  | ```return <element>``` | Devuelve un elemento y lo elimina.    |    |
| ```L.reverse()``` |                     |     |    |
| ```L.sort(cmp=None, key=None, reverse=False)``` | ```None``` | Python 2    |    |
| ```L.sort(*, key=None, reverse=False)``` | ```None``` | Python 3, eq. a ```sorted``` |    |

##### References:
* [Python 3 Tutorial Data structures]
* [Python 3 built-in Functions > Sorted](https://docs.python.org/3/library/functions.html#sorted)
* [Python 3 sorting HOW TO](https://docs.python.org/3/howto/sorting.html#sortinghowto)
* [Python 2 built-in Functions > Sorted](https://docs.python.org/2/library/functions.html#sorted)

#### Comprehensi�n de listas:

```python
>>> Linput = [1, 2, 3, 4, 5, 6]
>>> Lout = [f(element) for element in Linput if condition]
```

- **Filter:** \
Devuelve elementos de la lista que dan True en la funci�n. \
Ejemplo:
```python
Linput = [1, 2, 3, 4, 5, 6]
function(Linput) returns True or False
Loutput = filter(function, Linput)
```

- **Map:** \
Aplica la funcion 'function' a cada elemento de la lista. \
Devuelve la lista de resultados. \
Ejemplo:
```python
>>> Linput = list([...])
>>> function(eleminput) elemoutput
>>> Loutput = map(function, Linput)
```

- **Reduce** (only in Python 2): \
La funci�n reduce aplica una funci�n a pares de elementos de una secuencia hasta dejarla en un solo valor. \
Ejemplo:
```python
>>> Linput = list([...])
>>> sumar(x, y)
>>> Loutput = reduce(sumar, Linput)
>>> Loutput = reduce(lambda x, y: x + y, Linput)
```
En Python 3.x, la funci�n ```reduce``` puede hacerse con [functools.reduce].

#### 1.1.4.2 Tuplas: ```()```
Las tuplas son como las listas, peros sus elementos son inmutables y su estructura es m�s ligera.
```python
>>> t =  1, 2, 3
>>> t = (1, 2, 3)
```

#### 1.1.4.3 Diccionarios: ```{:}```
Almacenan pares clave-valor, accesibles por la cable. \
No hay orden en los elementos que la componen. \
Ejemplo:
```python
d = dict({1: 'hola', 2: 3})
```

Sus operaciones principales son:

� Obtener un valor:
```python
d[k]                #
d.get(k[, default]) # Valor por defecto si no existe #
```
� Saber si un valor est� o no
```python
k in d          # True/False si tiene clave #
d.has_key(k)    # True/False si tiene clave #
```
� Lista de claves
```python
d.keys() #lista de claves, return <dict_keys> #
list(<dict_keys>) (p.ej., [1, 2]) #Python 3.0#
```
� Lista de valores
```python
d.values() #lista de valores, return <dict_values> #
list(<dict_values>) (p.ej., ['hola', 3]) #Python 3.0#
```
� Lista de claves y valores:
```python
d.items() #lista de tuplas (k, v), return <dict_items>#
list(<dict_items>) (p.ej., [(1, 'hola'), (2, 3)] #Python 3.0#
```
� Borrar una entrada y devolver el valor: ```d.pop(k[, d])```

� Combinar dos diccionarios: ```z = dict(x.items() + y.items())```

� Actualizaci�n de pares del diccionario: ```d1.update(d2)```

Los tipos son objetos, con sus m�todos.

**NOTA:** Uso de diccionarios (y otros tipos mutables) como argumento por defecto en las funciones.

* Referencia: [Python 3 Tutorial Data structures, dictionaries]

#### 1.1.4.4 Conjuntos: ```set({})```
TODO

### 1.1.5 Tipos mutables y tipos inmutables
TODO


## 1.2 Operadores aritm�ticos, de bits, booleanos y relacionales
Se aplican a los n�meros.
Para otras operaciones, �sese el m�dulo [math](https://docs.python.org/3/library/math.html).

Operadores aritm�ticos:
```
+   suma
-   resta
*   multiplicaci�n
/   divisi�n
//  divisi�n entera
%   m�dulo
**  exponenciaci�n
```

Operadores de bits (bitwise):
```
&       and
|       or
^       xor
~       not
<< >>   desplazamiento (inserta ceros)
```

Operadores booleanos:
```
and     r = True and False
or      r = True or False
not     r = not True
```

Operadores relacionales (devuelven un tipo booleano):
```
==      5 == 3 es False
!=      5 != 3 es True
<>      Equivalent to !=
<       5 < 3 es False
>       5 > 3 es True
<=      5 <= 3 es True
>=      5 >= 3 es False
```

Operadores miembro:
```
in      Returns True if variable found in sequence, False otherwise.
    e.g.:   x = [1, 2, 3, 4]
            1 in x  (True)

not in
```
 
Operadores de identidad:
```
    is      Evaluates to true if the variables on either side of the operator point to the same object and false otherwise.
    is not  Evaluates to false if the variables on either side of the operator point to the same object and true otherwise.
```

Operadores de asignaci�n:

```= += -= *= /= %= **= //=```


## 1.3 Control de flujo
* Selecci�n: ```if```
* Bucle: ```for```, ```while```

### 1.3.1 Sentencia condicional ```if```

```python
if a > 3:
    print("%i es mayor que 3" %(a))
elif a > 2:
    print("%i es mayor que 2" %(a))
else:
    print("%i no es mayor que 2" %(a))
```

A if B else C:
```python
    variable = "par" if (num % 2 == 0) else "impar"
```

### 1.3.2 Bucle ```for ... in```
Bucle que recorre un tipo secuencia. \
Ejemplo:
```python
secuencia = ["uno", "dos", "tres"]
for elemento in secuencia:
    print(elemento)
```

Para iterar con �ndices sobre los elementos:
```python
>>> a = ['Mary', 'had', 'a', 'little', 'lamb']
>>> for i in range(0, len(a)):
        print(i, a[i])
```
o con enumerate
```python
>>> seasons = ['Spring', 'Summer', 'Fall', 'Winter']
>>> list(enumerate(seasons))
    [(0, 'Spring'), (1, 'Summer'), (2, 'Fall'), (3, 'Winter')]
>>> list(enumerate(seasons, start=1))
    [(1, 'Spring'), (2, 'Summer'), (3, 'Fall'), (4, 'Winter')]
```
Combinaci�n de bucle for y lista:
```python
>>> [o for o in [1, 2, 3, 4, 5, 6] if o > 3]
>>> [4, 5, 6]
```

### 1.3.3 Bucle ```while```
Bucle que contin�a mientras una condici�n se cumple:

```python
edad = 0
while edad < 18:
    edad = edad + 1
    print("Felicidades, tienes " + str(edad))
```

### 1.3.4 Control del bucle

| Instr     | Desc                                  |
|-----------|---------------------------------------|
| ```break```     | Terminates the loop statement and transfers execution to the statement immediately following the loop. |
| ```continue```  | Causes the loop to skip the remainder of its body and immediately retest its condition prior to reiterating.
| ```pass```      | The pass statement in Python is used when a statement is required syntactically but you do not want any command or code to execute.

## 1.4 Funciones
Definici�n:

```python
    def miFuncion(param1, param2):
    def miFuncion(param1, param2 = 3):              # Valores por defecto
    def miFuncion(param1, param2 = None, *otros):   # Tupla
    def miFuncion(param1, param2 = None, **otros):  # Diccionario

    return puede devolver un valor aislado o una tupla.
```

Llamada:
```python
    miFuncion(param2 = 3, param1 = "hola") #Cambio de orden#
    miFuncion(5) #valores por defecto (param2 = 3)#
    miFuncion(param1 = 5)
```

Paso por valor y paso por referencia:
* En Python, al igual que en Java, el paso de par�metros es por valor, pero por valor a la referencia. \
El objeto pasado no puede cambiarse, pero s� se pueden acceder a sus operaciones y atributos a trav�s de sus operaciones.

Tipos mutables e inmutables: las tuplas y los tipos simples son tipos inmutables.

Sentencias multi-l�nea: se indican con una l�nea invertida SIN espacio detr�s.
```
total = item_one + \
    item_two + \
    item_three
```

### 1.4.1 Funciones generadoras
Con Tuplas:
```python
Linput = list([...])
Loutput = (n ** 2 for n in Linput)
```

Con funci�n generadora:
```python
def mi_generador(n, m, s):
    while n <= m:
        yield n
        n += s
```

### 1.4.2 Funciones lambda
Funciones an�nimas en l�nea.
Ejemplo:
```python
lambda n: n % 2.0 == 0
```

### 1.4.3 Decoradores
Un decorador no es es m�s que una funci�n que recibe una funci�n como par�metro y devuelve otra funci�n como resultado. \

Decorador simple, ejemplo:
```python
def mi_decorador(funcion):
    def funcionDecorada(*args):
        print "Llamada a la funcion", funcion.__name__
        retorno = funcion(*args)
        return retorno
    return funcionDecorada
```

Aplicaci�n:
```python
@mi_decorador
def imp(s):
    print s
```

Decoradores con par�metros:

```python
def deco(i):
    def _deco(f):
        def inner(*args, **kwargs):
            for n in range(i):
                r = f(*args, **kwargs)
            return r
        return inner
    return _deco
```

Aplicaci�n:
```python
@deco(2)
def saluda(nombre):
    print "hola", nombre
```

Ejemplo 2:

```python
@decorador_con_parametros
def deco(func, i):
    def inner(*args, **kwargs):
        for n in range(i):
           r = func(*args, **kwargs)
        return r
    return inner
```

Aplicaci�n:
```python
@deco(2)
def saludar(nombre):
    print "chau", nombre
```

References:

* [Juanjo Conti (AR): Decoradores en Python I]
* [Juanjo Conti (AR): Decoradores en Python II]
* [Juanjo Conti (AR): Decoradores en Python III]
* [Juanjo Conti (AR): Decoradores en Python ampliados]

### 1.4.3 Funciones de orden superior
```python
lang_func = {
    "es": saludar_es,
    "en": saludar_en,
    "fr": saludar_fr
}

lang_func[lang]()
return lang_fun[lang]
```

L�nea de comentarios docstring: ```__doc__```
```python
def funcion():
    """
    Comentarios de la funci�n tras su definici�n.
    """
```

## 1.5 Comentarios
Comentario simple:
```python
# Esto es un comentario de una l�nea.
```

Comentario m�ltiple:
```python
"""
Esto es un comentario m�ltiple.
Cuantas l�neas como quieras.
"""
```

## 1.6 Argumentos desde la l�nea de comandos (```sys.argv[]```)
Equivalente a ```*argv[]``` de C/C++.
```python
sys.argv = ["comando", "arg1", "arg2"...]
```

## 1.7 Entrada y salida est�ndar (i/o std)

### 1.7.1 Entrada est�ndar: ```input()```

```python
nombre = raw_input(u"�C�mo te llamas?")     # Python 2.x
nombre = input("Hola, �C�mo te llamas?")    # Python 3.x
```

### 1.7.2 Salida est�ndar: ```print()```

```python
print <var>    # Python 2.x
print(<var>)   # Python 3.x
```

```python
print "%s %s" %(strVar, "mundo")
```

| Especificador | Formato       |
|---------------|---------------|
| ```%s```      | String        |
| ```%d```      | Entero        |
| ```%o```      | Octal         |
| ```%x```      | Hexadecimal   |
| ```%f```      | Real          |

Hay tambi�n modificadores para mostrar el n�mero de decimales o el n�mero de d�gitos.

## 1.8 M�dulos importantes

* ```os```     Funciones del sistema operativo
```python
os.system(<string>) #Se ejecuta por consola.
```
* ```sys```    Funciones del propio int�rprete de Python
```python
sys.argv[]
sys.path
```
* ```time```   Funciones para fechas y horas
```python
ascitime (o algo as�)
```

## 1.9 Entorno de ejecuci�n Python

| Funci�n   | Descripci�n           |
|-----------|-----------------------|
| dir()     | lista los nombres que est�n definidos en el scope actual. |
| dir(object) | muestra los nombres que un m�dulo define. |
| locals()  | Muestra un diccionario con las variables disponibles en ese momento. Los pares clave-valor indican nombre de variable y su valor actual. |
| globals() | Igual que locals(), pero muestra variables globales. |
| eval(expression[, globals[, locals]]) | Eval�a una expresi�n y la asigna las variables locales o globales si le le indica. |
| exec() in globals()/locals()  |                   |
| execfile(filename[, globals[, locals]]) |                 |
| ```__import__```  |                               |
| ```__package__``` |                               |
| ```__builtin__``` |                               |
| ```__name__```    |                               |
| ```__main__```    |                               |
| ```__doc__```     |                               |
| <module>.__dict__ |                               |
| help(module/class/object) |                       |

Variables de entorno:

| Name          |   Description                     |
|---------------|-----------------------------------|
| PYTHONPATH    | Has a role similar to PATH. Accessible by ```sys.path``` |
| PYTHONSTARTUP | Contains the path of an initialization file containing Python source code that is executed every time you start the interpreter. Similar to the Unix .profile or .login file. This file, often named .pythonrc.py in Unix, usually contains commands that load utilities or modify PYTHONPATH. |
| PYTHONHOME    | An alternative module search path. It's usually embedded in the PYTHONSTARTUP or PYTHONPATH directories to make switching module libraries easy. |

**References:**
* [The Python Standard Library � Built-in Types]
* [Revamping dict.keys(), .values() and .items()]
*  [Python 2.5.2 tutorial >> 4. More Control Flow Tools >> 4.7.4 Unpacking Argument Lists]
* [Built-in Functions]


## Ap�ndice 1.A. Conversiones de tipos de datos

| Type              | Descrption                |
|-------------------|---------------------------|
| int(x [,base])    | Converts x to an integer. base specifies the base if x is a string. |
| long(x [,base] )  | Converts x to a long integer. base specifies the base if x is a string. |
| float(x)          | Converts x to a floating-point number.    |
| complex(real [,imag]) | Creates a complex number. |
| str(x)            | Converts object x to a string representation. |
| repr(x)           | Converts object x to an expression string. |
| eval(str)         | Evaluates a string and returns an object. |
| tuple(s)          | Converts s to a tuple.        |
| list(s)           | Converts s to a list.         |
| set(s)            | Converts s to a set.          |
| dict(d)           | Creates a dictionary. d must be a sequence of (key,value) tuples. |
| frozenset(s)      | Converts s to a frozen set.   |
| chr(x)            | Converts an integer to a character.   |
| unichr(x)         | Converts an integer to a Unicode character. |
| ord(x)            | Converts a single character to its integer value. |
| hex(x)            | Converts an integer to a hexadecimal string. |
| oct(x)            | Converts an integer to an octal string. |

## Ap�ndice 2.A. N�meros: conversiones, funciones matem�ticas, random
Conversiones de tipos de n�meros:
```python
int(x)
long(x)
float(x)
complex(x) (z = Re(z) + jIm(z))
complex(x, y)
```

Mathematical functions:

| Function            | Returns ( description )             |
|---------------------|-------------------------------------|
| abs(x)              | The absolute value of x: the (positive) distance between x and zero. |
| ceil(x)             | The ceiling of x: the smallest integer not less than x. |
| cmp(x, y)           | -1 if x < y, 0 if x == y, or 1 if x > y. |
| exp(x)              | The exponential of x: ex |
| fabs(x)             | The absolute value of x. |
| floor(x)            | The floor of x: the largest integer not greater than x |
| log(x)              | The natural logarithm of x, for x > 0. |
| log10(x)            | The base-10 logarithm of x for x > 0. |
| max(x1, x2,...)     | The largest of its arguments: the value closest to positive infinity |
| min(x1, x2,...)     | The smallest of its arguments: the value closest to negative infinity |
| modf(x)             | The fractional and integer parts of x in a two-item tuple. |
|                     | Both parts have the same sign as x. |
|                     | The integer part is returned as a float. |
| pow(x, y)           | The value of x**y. |
| round(x [,n])       | x rounded to n digits from the decimal point. Python rounds away from zero as a tie-breaker: round(0.5) is 1.0 and round(-0.5) is -1.0. |
| sqrt(x)             | The square root of x for x > 0. |

Trigonometric Functions:
| Function      |  Description                  |
|---------------|-------------------------------|
| acos(x)       | Return the arc cosine of x, in radians. |
| asin(x)       | Return the arc sine of x, in radians. |
| atan(x)       | Return the arc tangent of x, in radians. |
| atan2(y, x)   | Return atan(y / x), in radians. |
| cos(x)        | Return the cosine of x radians. |
| hypot(x, y)   | Return the Euclidean norm, sqrt(x*x + y*y). |
| sin(x)        | Return the sine of x radians. |
| tan(x)        | Return the tangent of x radians. |
| degrees(x)    | Converts angle x from radians to degrees. |
| radians(x)    | Converts angle x from degrees to radians. |

Mathematical constants:

| Constant          | Returns ( description )             |
|-------------------|-------------------------------------|
| pi                | The mathematical constant pi.       |
| e                 | The mathematical constant e.        |

Module: ```random``` (Random Number Functions)

| Function          | Returns ( description )             |
|-------------------|-------------------------------------|
| choice(seq)       | A random item from a list, tuple, or string.
| randrange ([start,] stop [,step]) | A randomly selected element from range(start, stop, step). |
| random()          | A random float r, such that 0 is less than or equal to r and r is less than 1. |
| seed([x])         | Sets the integer starting value used in generating random numbers. Call this function before calling any other random module function. Returns None. |
| shuffle(lst)      | Randomizes the items of a list in place. Returns None. |
| uniform(x, y)     | A random float r, such that x is less than or equal to r and r is less than y. |


# Cap�tulo 2. Programaci�n orientada a Objetos
```
2.1 Clases y objetos
    self: Par�metro formal y actual
    self: llamada
    m�todos y atributos privados.
2.2 Herencia (simple, m�ltiple), sobrecarga de m�todos, polimorfismo
    2.2.1 Herencia m�ltiple
    2.2.2 Polimorfismo
    2.2.3 Sobrecarga de m�todos
    2.2.4 Sobrecarga de operadores
2.3 M�todos p�blicos, privados y especiales
```

## 2.1 Clases y objetos

```python
class Coche(object):
    """Abstraccion de los objetos coche."""
    anno = 1981 #Atributo de clase#
    def __init__(self, gasolina):
        """M�todo constructor."""
        #Atributos usando el objeto self.
        self.gasolina = gasolina
        print "Tenemos", gasolina, "litros"
    def arrancar(self):
        if self.gasolina > 0:
            print "Arranca"
        else:
            print "No arranca"
    def conducir(self):
        if self.gasolina > 0:
            self.gasolina -= 1
            print "Quedan", self.gasolina, "litros"
        else:
            print "No se mueve"
```
Objeto (clase instanciada):
```python
coche = Coche(3)  # Coche con 3 l de gasolina #
```

Acceso a atributos:
* ```getattr(obj, name[, default])```: Acceso al atributo de objeto.
* ```hasattr(obj,name)```: Chequea un un atributo existe.
* ```setattr(obj,name,value)```: Fija un atributo. En caso de no existir, lo crea.
* ```delattr(obj, name)```: Borra un atributo.

Atributos de clase _built-in_:
* ```__dict__```: Dictionary containing the class's namespace.
* ```__doc__``` : Class documentation string or None if undefined.
* ```__name__```: Class name.
* ```__module__```: Module name in which the class is defined. This attribute is "__main__" in interactive mode.
* ```__bases__```: A possibly empty tuple containing the base classes, in the order of their occurrence in the base class list.

## 2.2 Herencia (simple, m�ltiple), overriding de m�todos y sobrecarga de m�todos, polimorfismo

```python
class CocheDeLujo(Coche):
    # Constructor overriding
    def __init__(self, gasolina, precio):
        self.gasolina = gasolina
        self.precio = precio
        Coche.__init__(self, gasolina)
```

### Subclases y superclases:
* ```issubclass(sub, sup)```: Boolean: True si sub es subclase de sup.
* ```isinstance(obj, Class)```: Boolean: True si obj es objecto de Class o deriva d�l.

La clase ```super``` permite
* referenciar a la clase padre sin referenciar su nombre concreto (v�ase ejemplo 1 abajo),
* en condiciones de herencia m�ltiple, accede a los m�todos padre seg�n el MRO (_Method Resolution order_) establecido en el atributo ```__mro___```.

Ejemplo en herencia simple:
```python

class Rectangle:
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        return self.length * self.width

    def perimeter(self):
        return 2 * self.length + 2 * self.width

class Square(Rectangle):
    def __init__(self, length):
        super(Square, self).__init__(length, length)

```

Referencias:
* [Google: python 3 inheritance super and ```__init__```]
* [RealPython: Supercharge Your Classes With Python super\(\)]
* [Python 3: Built-in Functions >> super]
* [Stack Overflow: Understanding Python super() with ```__init__()``` methods \[duplicate\]]

### Herencia m�ltiple:
```python
class CamionDeLujo(Coche, Lujo):
    ...
```

### Polimorfismo:
```python
coche = Coche(3)
cocheDeLujo = CocheDeLujo(3, 5000000)
```

En Python, no hay polimorfismo como en C++ o en Java.
El objeto padre no puede acceder a los m�todos del hijo.

### Sobrecarga de m�todos:

```python
def arrancar(self, par1, par2 = 3) #Usando var por defecto#
def arrancar(self, par1, *par2) #Usando tuplas#
def arrancar(self, par1, **par2) #Usando diccionarios#
#Usando decoradores:
```

### Sobrecarga de operadores:
Hay m�todos especiales para eso, v�ase la siguiente secci�n.

```python
object.__add__(self, other)
```

## 2.3 M�todos p�blicos, privados y especiales

```python
class Ejemplo:
    def publico(self):
        print "Publico"

    def __privado(self):
        print "Privado"
```

### M�todos especiales:

| M�todo                      | Descripci�n           |
|-----------------------------|-----------------------|
| ```__init__(self, args)```  | Constructor           |
| ```__new__(cls, args)```    | Pre-constructor Py 3.0    |
| ```__del__(self)```         | Destructor            |
| ```__str__(self)```         | ```print(<obj>), str(<obj>), repr(<obj>)``` |
| ```__repr__(self)```        | Pensado para representar el objeto, uso a elecci�n. |
| ```__cmp__(self, otro)```   | 0, <, > |
| ```==, !=```                | Se compara el id. |
| ```__len(self)```           | Longitud, ```len(<obj>)``` |

### Referencias:
* [Python 3 Data model >> 3.1 Special method names]

# Cap�tulo 3. Excepciones
```
3.1 Tratamiento (captura y lanzamiento) de excepciones: try, except y raise.
3.2 Definici�n de nuevas excepciones: clase Exception + herencia
```

## 3.1 Tratamiento de excepciones: try, except y raise.

```python
try:
    num = int("3a")
    print no_existe
except IOError as (errno, strerror):
    print "I/O error({0}): {1}".format(errno, strerror)
except (RuntimeError, TypeError, NameError):
    # La tupla indica excepciones tratadas
    pass
except NameError as e:
    print("La variable %s no existe" %( str(s) ) )
    raise
    # raise NameError('HiThere') # Escribe HiThere como texto de except
except ValueError, ve:
    print("El valor no es un numero")
    raise
else:
    print("Va bien")
# Ejecucion con o sin excepci�n: ficheros, etc. #
finally:
    print("Cerrando ficheros, conexiones, limpiando, etc.")
```

Para ver las 46 excepciones por defecto, cons�ltese el documento [Excepciones.md](./01_Manuales/Excepciones.md).

## 3.2 Definici�n de nuevas excepciones: clase Exception + herencia

```python
class MiError(Exception):
    def __init__(self, valor):
        self.valor = valor

    def __str__(self):
        # repr es como str, menos orientado a strings
        return repr(self.value)
```

Llamada:
```python
try:
    if resultado > 20: raise MiError(33)
except MiError as e: #also, you can write MiError, e
    print("Mi error ocurri�, valor: ", e)
```

Salida:
```
Mi error ocurri�, valor: 33
```

Llamada:
```python
>>> raise MiError("oops!")
Traceback (most recent call last):
File "<stdin>", line 1, in ?
__main__.MiError: "oops!"
```

## Referencias:
* http://docs.python.org/py3k/tutorial/errors.html
* http://docs.python.org/tutorial/errors.html


# Cap�tulo 4. M�dulos
```
4.1 M�dulos
4.2 Paquetes
```

## 4.1 M�dulos
1 M�dulo = 1 archivo que contiene clases, funciones, variables, etc.

Uso:
```python
import <modulo>
...
<modulo>.<elemento>
```

Propiedades
* Los m�dulos representan los espacios de nombres y evitan sus colisiones.
* Visibilidad del m�dulo: mismo directorio o ```sys.path``` (PYTHONPATH)
```python
>>> import sys
>>> sys.path #Devuelve una lista con los directorios del PYTHONPATH#
```
* Importar un elemento concreto
```python
from <modulo> import [<elemento>|*]
```

Atributos del m�dulo:

| Atributo       | Descripci�n       |
|----------------|-------------------|
| ```__name__``` | Toma el nombre del paquete o del main que ejecuta el programa. |
| ```__doc__```  | Primera l�nea del cuerpo del m�dulo. |
| ```__all__```  |                                      |
| ```__path__``` | Para paquetes en m�ltiples directorios. |

```python
import sys

sys.__name__ # devuelve "sys" #
if __name__ == "main":
    ...
```

## 4.2 Paquetes
1 paquete = 1 directorio lleno de m�dulos. \
1 m�dulo  = 1 archivo

Todo paquete es un directorio que contiene un fichero ```__init__.py_``` , que es el inicializador del paquete.

Jerarqu�a de paquetes:

```python
import paq.subpaq.modulo
```

* Repositorio de paquetes: PyPI (Python Package Index) http://pypi.python.org/


# Cap�tulo 5. Ficheros
```
5.1 Apertura/Cierre de ficheros
5.2 Lectura/Escritura de ficheros:
    .read(iN)/.write(sText),
    .readline()/.writeline(sText),
    .readlines()/.writelines(lsText)
5.3 Acceso a ficheros
```

Ejemplo:

```python
with open("myfile.txt") as f:
    for line in f:
        print(line)
```

## 5.1 Apertura/Cierre de ficheros
Apertura:
```python
fMiFileDescr = open(sFileNameWithPath, sMode)
fMiFileDescr = file(sFileNameWithPath, sMode)
    sFileNameWithPath
    sMode   "r" "w" "a" "b" "+" "U"
        "r" "w" "a" Lectura/escritura/append
        "+" Permite lectura y escritura simult�nea
        "U" Universal newline
```

Apertura (recomendada):
```python
with open("myfile.txt") as f:
    for line in f:
        print(line)
```

Cierre:
```python
fMiFileDescr.close()
```

## 5.2 Lectura/Escritura de ficheros:

| Read              | Write             |
|-------------------|-------------------|
| ```.read(iN)```   | ```.write(sText)``` |
| ```.readline()``` | ```.writeline(sText)``` |
| ```.readlines()``` | ```.writelines(lsText)``` |

Lectura:

```python
fMiFileDescr.read(iN)
    completo = f.read()  # Lee hasta el final #
    parte = f2.read(512) # Lee 511 caracteres #

fMiFileDescr.readline() #Devuelve un str con la l�nea le�da#
    while True:
        linea = f.readline()
        if not linea: break
        print linea

fMiFileDescr.readlines()
    Lee todas las l�neas del archivo y devuelve una lista con las l�neas le�das.
    fMiFileDescr.write(sText):
        Escribe una cadena de texto que sirve como par�metro.
    fMiFileDescr.writelines(lsTextList)
        El argumento es una lista de strings.
```

Escritura:

```python
fMiFileDescr.write(sText):
    Escribe una cadena de texto que sirve como par�metro.

fMiFileDescr.writelines(lsTextList)
    El argumento es una lista de strings.
```

File object attributes:
| Attribute       | Description                     |
|-----------------|---------------------------------|
| ```file.closed```    | Returns true if file is closed, false otherwise. |
| ```file.mode```      | Returns access mode with which file was opened. |
| ```file.name```      | Returns name of the file. |
| ```file.softspace``` | Returns false if space explicitly required with print, true otherwise. |

## 5.3 Acceso a ficheros

```.tell()``` Devuelve la distancia en bytes desde el principio del fichero.

```python
.seek(iOffset, iPos)
    iOffset:    n�mero positivo o negativo a usar como desplazamiento.
    iPos:
        0 se refiere al principio del fichero
        1 posici�n actual
        2 final del fichero
```

---------------------------------------------------------------------------

# Parte intermedia

```
6 1 pdb � The Python Debugger
7 2 Testing
8 3 Documentaci�n: Pydoc, Epydoc
9 4 Distribuir
```

# Cap�tulo 6. Python Debugger (pdb)
```
6.1 Use pdb in a program
6.2 Debugger Commands
```

## 6.1 Use pdb in a program
Python supports:
* Setting (conditional) breakpoints
* Single stepping at the source line level,
* Inspection of stack frames,
* Source code listing,
* Evaluation of arbitrary Python code in the context of any stack frame.
* post-mortem debugging and can be called under program control.

Use of pdb:
1. Python prompt for a module
2. Prompt for a script

Python prompt for a module:
```python
>>> import pdb
>>> import mymodule
>>> pdb.run('mymodule.test()')
> <string>(0)?()
(Pdb) continue
> <string>(1)?()
(Pdb) continue
NameError: 'spam'
> <string>(1)?()
(Pdb)
```

Prompt for a script:
```
$> python -m pdb myscript.py
```

Add a breakpoint in Python code:
```python
import pdb; pdb.set_trace() # Add this line
```

Typical usage of a crashed program
```python
>>> import pdb
>>> import mymodule
>>> mymodule.test()
Traceback (most recent call last):
  File "<stdin>", line 1, in ?
  File "./mymodule.py", line 4, in test
    test2()
  File "./mymodule.py", line 3, in test2
    print spam
NameError: spam
>>> pdb.pm()
> ./mymodule.py(3)test2()
-> print spam
(Pdb)
```

Methods of pdb module (different modes of pdb):
* ```pdb.run(statement[, globals[, locals]])```
* ```pdb.runeval(expression[, globals[, locals]])```
* ```pdb.runcall(function[, argument, ...])```
* ```pdb.set_trace()```
* ```pdb.post_mortem([traceback])```
* ```pdb.pm()``` \
Enter post-mortem debugging of the traceback found in sys.last_traceback.

## 6.2 Debugger Commands
```
01 h(elp) [command]
    Without argument, print the list of available commands
02 w(here)
    Print a stack trace, with the most recent frame at the bottom. An arrow indicates the current frame, which determines the context of most commands
03 d(own)
    Move the current frame one level down in the stack trace (to a newer frame).
04 u(p)
    Move the current frame one level up in the stack trace (to an older frame).
05 b(reak) [[filename:]lineno | function[, condition]]
    With a lineno argument, set a break there in the current file.
    With a function argument, set a break at the first executable statement within that function.
    Without argument, list all breaks, including for each breakpoint, the number of times that breakpoint has been hit, the current ignore count, and the associated condition if any.
06 tbreak [[filename:]lineno | function[, condition]]
    Temporary breakpoint, which is removed automatically when it is first hit. The arguments are the same as break.
07 cl(ear) [filename:lineno | bpnumber [bpnumber ...]]
    With a filename:lineno argument, clear all the breakpoints at this line.
    With a space separated list of breakpoint numbers, clear those breakpoints.
    Without argument, clear all breaks (but first ask confirmation).
08 disable [bpnumber [bpnumber ...]]
    Disables (but not clears) the breakpoints given as a space separated list of breakpoint numbers.
09 enable [bpnumber [bpnumber ...]]
    Enables the breakpoints specified.
10 ignore bpnumber [count]
    Sets the ignore count for the given breakpoint number.
11 condition bpnumber [condition]
    Condition is an expression which must evaluate to true before the breakpoint is honored.
    If condition is absent, any existing condition is removed; i.e., the breakpoint is made unconditional.
12 commands [bpnumber]
    Specify a list of commands for breakpoint number bpnumber.
13 s(tep)
    Execute the current line, stop at the first possible occasion (either in a function that is called or on the next line in the current function).
14 n(ext)
    Continue execution until the next line in the current function is reached or it returns. (The difference between next and step is that step stops inside a called function, while next executes called functions at (nearly) full speed, only stopping at the next line in the current function.)
15 unt(il)
    Continue execution until the line with the line number greater than the current one is reached or when returning from current frame.
16 r(eturn)
    Continue execution until the current function returns.
17 c(ont(inue))
    Continue execution, only stop when a breakpoint is encountered.
18 j(ump) lineno
    Set the next line that will be executed. Only available in the bottom-most frame. This lets you jump back and execute code again, or jump forward to skip code that you don�t want to run.
    It should be noted that not all jumps are allowed � for instance it is not possible to jump into the middle of a for loop or out of a finally clause.
19 l(ist) [first[, last]]
    List source code for the current file. Without arguments, list 11 lines around the current line or continue the previous listing. With one argument, list 11 lines around at that line. With two arguments, list the given range; if the second argument is less than the first, it is interpreted as a count.
20 a(rgs)
    Print the argument list of the current function.
21 p expression
    Evaluate the expression in the current context and print its value.
    print can also be used, but is not a debugger command
22 pp expression
    Like the p command, except the value of the expression is pretty-printed using the pprint module.
23 alias [name [command]]
    Creates an alias called name that executes command.
24 unalias name
    Deletes the specified alias.
25 [!]statement
    Execute the (one-line) statement in the context of the current stack frame. The exclamation point can be omitted unless the first word of the statement resembles a debugger command. To set a global variable, you can prefix the assignment command with a global command on the same line, e.g.:
    (Pdb) global list_options; list_options = ['-l']
    (Pdb)
26 run [args ...]
    Restart the debugged Python program.
27 q(uit)
    Quit from the debugger. The program being executed is aborted.
```

#### References:
* [Python 2 debug]
* [Python 2 PDB]
* [Python 2 BDB]
* [Python 3 Debugging and Profiling]


# Cap�tulo 7. Testing
```
7.1 Doctest
7.2 unittest / PyUnit
    Preparaci�n del contexto
```

## 7.1 Doctest
Permite combinar las pruebas con la documentaci�n.

Prueba unitarias + documentaci�n propicia:
- realiza pruebas de forma sencilla
- pruebas actualizadas
- ejemplo de uso del c�digo
- ayuda a entender su prop�sito

Resultados:
* Si va mal, muestra \
� resultado obtenido \
� resultado esperado

* Si todo va bien, no se muestra nada a menos que se indique.

Par�metros:
* ```-v``` al llamar al script \
Par�metro verbose=True en testmod()

Estructura en dos partes:
* Documentaci�n del c�digo: 3 partes \
� Patr�n de entrada (usa >>>) \
� Llamada (usa >>>) \
� Patr�n de salida a comparar \
� Llamada a doctest.testmod(name, verbose = True)

Ejemplos: ```05.Testing.doctest.Ej01.py```, ```05.Testing.doctest.Ej02.py```

## 7.2 unittest / PyUnit
Uso de unittest:
* clase que herede de unittest.TestCase.
* A�adir m�todos que empiecen por 'test'.

Para ejecutar las pruebas, llamar a la funci�n main() del m�dulo, en orden alfab�tico, se ejecutan todos los m�todos que comiencen por test.

Resultados posibles:
* OK
* FAIL: AssertionError
* ERROR: la prueba lanz� excepci�n distinta de AssertionError.

Ejemplos:
* ```05.Testing.unittest.Ej01.py```
* ```05.Testing.unittest.Ej02.py```
* ```05.Testing.unittest.Ej03.py```
* ```05.Testing.unittest.Ej04.py```

### Preparaci�n del contexto (el test fixture)
M�todos de TestCase para construir y destruir el entorno.

Se ejecutan antes y despu�s de las pruebas definidas en esa clase.

Los m�todos son
* ```setUp()```
* ```tearDown()```

NOTA: �Y si dan fail o dan pass?

Ejemplo:
* ```05.Testing.unittest.Ej05.py```
* Ejemplo con fail que vaya al tearDown (como en junit)

### M�todos unittest para comprobaciones:

```
assertAlmostEqual       fail
assertEqual             failIf
assertFalse             failIfAlmostEqual
assertNotAlmostEqual    failIfEqual
assertNotEqual          failUnless
assertRaises            failUnlessAlmostEqual
assertTrue              failUnlessEqual
assert_                 failUnlessRaises
```

El par�metro ```msg``` es un string con lo que debe mostrar si falla.

| Assert                | Description               |
|-----------------------|---------------------------|
| ```assertAlmostEqual(first, second, places=7, msg=None)```    | Comprueba que los objetos pasados como par�metros sean iguales hasta el s�ptimo decimal (o el n�mero de decimales indicado por places). |
| ```assertEqual(first, second, msg=None)```                    | Comprueba que los objetos pasados como par�metros sean iguales. |
| ```assertFalse(expr, msg=None)``` | Comprueba que la expresi�n sea falsa. |
| ```assertNotAlmostEqual(first, second, places=7, msg=None)``` | Comprueba que los objetos pasados como par�metros no sean iguales hasta el s�ptimo decimal (o hasta el n�mero de decimales indicado por places). |
| ```assertNotEqual(first, second, msg=None)```                 | Comprueba que los objetos pasados como par�metros no sean iguales. |
| ```assertRaises(excClass, callableObj, *args, **kwargs)```    | Comprueba que al llamar al objeto callableObj con los par�metros definidos por \*args y \*\*kwargs se lanza una excepci�n de tipo excClass. |
| ```assertTrue(expr, msg=None)```                              | Comprueba que la expresi�n sea cierta. |
| ```assert_(expr, msg=None)```                                 | Comprueba que la expresi�n sea cierta. |
| ```fail(msg=None)```                                          | Falla inmediatamente. |
| ```failIf(expr, msg=None)```                                  | Falla si la expresi�n es cierta. |
| ```failIfAlmostEqual(first, second, places=7, msg=None)```    | Falla si los objetos pasados como par�metros son iguales hasta el s�ptimo decimal (o hasta el n�mero de decimales indicado por places). |
| ```failIfEqual(first, second, msg=None)```                    | Falla si los objetos pasados como par�metros son iguales. |
| ```failUnless(expr, msg=None)```                              | Falla a menos que la expresi�n sea cierta. |
| ```failUnlessAlmostEqual(first, second, places=7, msg=None)``` | Falla a menos que los objetos pasados como par�metros sean iguales hasta el s�ptimo decimal (o hasta el n�mero de decimales indicado por places). |
| ```failUnlessEqual(first, second, msg=None)```                | Falla a menos que los objetos pasados como par�metros sean iguales. |
| ```failUnlessRaises(excClass, callableObj, *args, **kwargs)``` | Falla a menos que al llamar al objeto callableObj con los par�metros definidos por \*args y \*\*kwargs se lance una excepci�n de tipo excClass. |


# Cap�tulo 8. Documentaci�n
```
8.1 Docstrings
    8.1.1 Generaci�n
    8.1.2 Llamadas
8.2 Pydoc
8.3 Epydoc y reStructuredText
    8.3.1 Llamada y par�metros (flags)
    8.3.2 Marcado reStructuredText
        8.3.2.1 Formato: negrita, it�lica, monoespacio, caracteres
        8.3.2.2 Secciones: t�tulo, subt�tulo
        8.3.2.3 Listas: ordenadas, no ordenadas
        8.3.2.4 Campos de funciones y m�todos: :param p:, :Parameters:, :type p: str, :return:, :keyword p:, :raise e:
        8.3.2.5 Campos de variables: :ivar v:, :cvar v:, :var v:, :type v:
        8.3.2.6 Campos m�ltiples: :Parameters:, :Exceptions:, :Variables:, :Ivariables:
        8.3.2.7 Campos de anotaciones: :note:, :attention:, :bug:, :warning:, :see:
        8.3.2.8 Campos de estado: :version:, :change:, :todo:, :status:
        8.3.2.9 Campos de autor�a: :author:, :organization:, :license:, :contact:
    8.3.3 Marcado Epydoc
```

## 8.1 Docstrings
Atributo de cada funci�n y clase.

### 8.1.1 Generaci�n
Dos formas:
1. Poniendo un comentario """ debajo de la definici�n.
2. Usando el m�todo privado ```__doc__``` de un m�dulo (```mymodule.__doc__ = """this is"""```).

### 8.1.2 Uso
Dos formas:
1. ```print mymodule.__doc__```
2. ```help(mymodule)```

Ejemplo: ```08.Doc.Ej01.py```

## 8.2 Pydoc
El m�dulo ```pydoc``` es un componente de ayuda que hace dos funciones de documentaci�n:
* mostrar la informaci�n como texto en la consola
* generar archivos HTML como javadoc
* mostar la info por Web server incluido en el m�dulo

Sintaxis ```pydoc```:
```python
pydoc.py nombre1 [nombre2 ...]
$> python -m pydoc nombre1
```

Muestra la documentaci�n del
* tema
* m�dulo
* clase
* paquete
* funci�n
* palabras clave (keywords)

Si el par�metro es keywords, topics o modules, se listar�n todos los par�metros indicados.

| Flags de pydoc  | Descripci�n     | Ejemplo               |
|-----------------|-----------------|-----------------------|
| ```-w```        | Guarda en HTML  | ```pydoc.py -w nombre1 [nombre2 ...]``` |
| ```-k```        | Busca una palabra | ```pydoc.py -k xml``` |
| ```-p```        | Puerto del servidor HTTP | ```pydoc.py -p puerto``` |
| ```-g```        | Interfaz gr�fica | ```pydoc.py -g``` |

Acceso a HTTP: ```http://localhost:puerto```

## 8.3 Epydoc y reStructuredText
El m�dulo ```pydoc``` es un sistema simple y limitado.
Para generar documentaci�n hay otros sistemas m�s completos:
* Docutils
* Epydoc
* Sphinx

### 8.3.1 EpyDoc
Llamada y par�metros (flags), tres m�todos de llamada:
* script ```epydoc```, aplicaci�n de l�nea de comandos
* ```epydocgui``` (```epydoc.pyw``` en Windows), con interfaz gr�fica
* ```epydoc```, uso como ```pydoc```

Ejemplo: [Python > 02_Ejercicios > 08_Doc > Doc_Ej03.py](https://github.com/imoren2x/biblab/blob/dev_python_manual/Python/02_Ejercicios/08_Doc/Doc_Ej03.py)

Para utilizar ```reStructuredText``` en Epydoc, hay que indicarlo con ```__docformat__``` en el c�digo que ```epydoc``` vaya a procesar.
```python
__docformat__ = "restructuredtext" # En la cabecera o lugar visible

# Otras opciones son: epytext, plaintext, restructuredtext, javadoc
```
Tambi�n se puede usar ```--docformat``` en la l�nea comandos.

| Flags         |   Descripci�n             | Ejemplo           |
|---------------|---------------------------|-------------------|
| ```--html```  | Salida en HTML.           | ```epydoc --html ejemplo.py``` |
| ```--pdf```   | Salida en LaTeX.          | ```epydoc --pdf ejemplo.py``` |
| ```--name```  | Nombre del proyecto.      | |
| ```--url```   | URL del proyecto.         | ```epydoc --name Ejemplo --url http://mundogeek.net ejemplo.py ``` |
| ```--docformat``` | Formato de documento que se ha usado. | ```epydoc --docformat epytext|plaintext|restructuredtext|javadoc``` |
| ```--graph classtree``` | Muestra la clase base y subclases. |    |
| ```--graph callgraph``` | Las llamadas entre funciones y m�todos. |   |
| ```--graph uml-classtree``` | Clases y subclases usando notaci�n UML. |   |
| ```--graph all``` | Todos los graph.  | ```epydoc --graph all ejemplo.py``` |
| ```--pstat``` | Generar grafo de llamadas. Requiere m�dulo ```profile``` o m�dulo ```hotshot```. | ```epydoc --graph all --pstat profile.out ejemplo.py``` |

### 8.3.2 Marcado reStructuredText

#### 8.3.2.1 Formato: negrita, it�lica, monoespacio, caracteres
```
*italica*
**negrita** -> negrita
"monoespacio"
\* es un car�cter especial
```

#### 8.3.2.2 Secciones: t�tulo, subt�tulo
```
T�tulo
======
Subtitulo
---------
```

#### 8.3.2.3 Listas: ordenadas, no ordenadas

Lista no ordenada: ```* - +```
```
* Python
* C
* Java
```

Lista ordenada:
```
#. Python / 1. Python
#. C
#. Java
```

Campos / fields, empiezan y terminan por ```:```, tienen nombre y par�metro.

#### 8.3.2.4 Campos de funciones y m�todos

* ```:param p: Un par�metro.```
* ```:Parameters:``` Lista de par�metros.
```
:Parameters:
    - item 1: item 1 explanation
    - item 2: item 2 explanation
```

* ```:type p: str``` Especifica el tipo esperado para el par�metro p.
* ```:return: True si son iguales``` Valor de retorno.
* ```:rtype: str``` Tipo del valor de retorno.
* ```:keyword p: Un par�metro``` Descripci�n del par�metro con valor por defecto y nombre p.
* ```:raise e: Si el par�metro es cero``` Describe las circunstancias para las que se lanza la excepci�n e.

#### 8.3.2.5 Campos de variables
* ```:ivar v: Una variable``` Descripci�n de la instancia v (p.ej., atributo de una clase).
* ```:cvar v: Una variable``` Descripci�n de la variable est�tica de clase v.
* ```:var v: Una variable``` Descripci�n de la variable v del m�dulo.
* ```:type v: str``` Tipo de la variable v.

#### 8.3.2.6 Campos m�ltiples
```
:Parameters: #:param :
    - item 1: item 1 explanation
    - item 2: item 2 explanation
:Exceptions: #:except:
    - item 1: item 1 explanation
    - item 2: item 2 explanation
:Variables: #:var v:
    - item 1: item 1 explanation
    - item 2: item 2 explanation
:Ivariables: #:ivar v:
    - item 1: item 1 explanation
    - item 2: item 2 explanation
```

#### 8.3.2.7 Campos de anotaciones
```
:note: Una nota
    Una nota sobre el objeto.
:attention: Importante
    Una nota importante sobre el objeto.
:bug: No funciona para el valor 0
    Descripci�n de un error en el objeto.
:warning: Cuidado con el valor 0
    Una advertencia acerca de un objeto.
:see: Ver 'Python para todos'
    Para indicar informaci�n relacionada.
```

#### 8.3.2.8 Campos de estado
```
:version: 1.0
    Versi�n actual del objeto.
:change: Versi�n inicial
    Listado de cambios.
:todo: Internacionalizaci�n
    Un cambio planeado para el objeto.
:status: Versi�n estable
    Estado del objeto.
```

#### 8.3.2.9 Campos de autor�a: :author:, :organization:, :license:, :contact:
```
:author: Raul Gonzalez
    Autor o autores del objeto.
:organization: Mundo geek
    Organizaci�n que cre� o mantiene el objeto.
:license: GPL
    Licencia del objeto.
:contact: zootropo en gmail
    Informaci�n de contacto del autor.
```

### 8.3.3 Marcado Epydoc
Referencias:
* [Epydoc Project]
* [Epydoc documentation: Docstring manual]
* [Epydoc documentation: Epytext Manual]
* [Epydoc documentation: Epydoc Fields]


# Cap�tulo 9. Distribuir aplicaciones Python
```
9.1 distutils
    9.1.1 Preparaci�n de nuevo m�dulo (setup.py)
    9.1.2 Instalaci�n a partir de m�dulos Python
    9.1.3 Generaci�n de Distribuci�n (RPM, tar.gz, .zip)
    (9.1.4 Instalaci�n del distribuible)
9.2 setuptools
    9.2.1 Archivos Eggs: Integraci�n con PyPI
    9.2.2 Dependencias
    9.2.3 find_packages()
    9.2.4 Crear ejecutables: py2exe
```

En Python hay dos m�dulos principales:
* ```distutils```, parte de la librer�a est�ndar.
* ```setuptools```, extensi�n de distutils.

## 9.1 ```distutils```

### 9.1.1 Preparaci�n del ```setup.py``` para instalar el nuevo m�dulo

```setup.py```: Script que instala la aplicaci�n llamando a la funci�n setup de distutils.core.

#### Argumentos de setup.py:
```
01 name: El nombre del paquete.
02 version: El n�mero de versi�n.
03 description: Una l�nea describiendo el paquete.
04 long_description: Descripci�n completa del paquete.
05 author: Nombre del autor de la aplicaci�n.
06 author_email: Correo electr�nico del autor.
07 maintainer: Nombre de la persona encargada de mantener el paquete, si difiere del autor.
08 maintainer_email: Correo de la persona encargada de mantener el paquete, si difiere del autor.
09 url: Web de la aplicaci�n.
10 download_url: Url de la que descargar la aplicaci�n.
11 license: Licencia de la aplicaci�n
```

#### Argumentos que controlan los archivos y directorios que deben instalarse

| Argumento     | Descripci�n               |
|---------------|---------------------------|
| packages      |                           |
| py_modules    | M�dulos que ser�n utilizados por el script principal. |
| scripts       | Lista de cadenas que indica el nombre del m�dulo o m�dulos principales. |
| ext_modules   | Extensiones que utilice el programa: C, C++, Fortran...   |

Ejemplos:
* 09.Dist.Ej01.py
* 09.Dist.Ej02.py
* 09.Dist.Ej03.py

### 9.1.2 Instalaci�n a partir de m�dulos Python
Instalaci�n del programa:
```
$> python setup.py install
```

Acciones:
* M�dulos y paquetes (py_modules y packages) se instalan en el directorio Lib de Python:
* Scripts al directorio scripts de Python.

### 9.1.3 Generaci�n de Distribuci�n (RPM, tar.gz, .zip)
Dos opciones:
1. Opci�n sdist en setup.py
2. Par�metro --formats desde l�nea de comandos
3. Par�metro bdist

1. Opci�n 'sdist' de setup.py
* .tar.gz en Unix
* .zip en Windows.

2. Par�metro --formats
| bztar |  .tar.bz2 |
| gztar |  .tar.gz  |
| tar   |  .tar     |
| zip   |  .zip     |
| ztar  |  .tar.Z   |

Ejemplo: Generar un tar.bz2, un tar.gz y un zip.
```
$> python setup.py sdist --formats=bztar,gztar,zip
```

3. Par�metro bdist
Formatos soportados por bdist:
| rpm     | RPM                 |
| gztar   | .tar.gz             |
| bztar   | .tar.bz2            |
| ztar    | .tar.Z              |
| tar     | .tar                |
| wininst | Instalador Windows  |
| zip     | .zip                |

Ejemplo: Generar un rpm y un instalador de windows.
```
$> python setup.py bdist --formats=wininst,rpm
```

Para generar un .deb se utiliza el paquete stdeb: http://stdeb.python-hosting.com/

## 9.2 ```setuptools```
A�ade funcionalidades nuevas:
* Formato de archivo egg para distribuci�n de aplicaciones Python.
* Busca todos los paquetes que deben instalarse y a�ade posibles dependencias.
* Permite instalar paquetes PyPI con un solo comando.

Su uso es muy parecido a distutils, s�lo cambia la sentencia de importaci�n.

Ejemplo: [Python > 02_Ejercicios > 09_Dist > Ej04.py](https://github.com/imoren2x/biblab/blob/dev_python_manual/Python/02_Ejercicios/09_Dist/Ej04.py)

### 9.2.1 Archivos Eggs: integraci�n con PyPI
Para la generaci�n, se usa el comando bdist_egg de setup.py:
```
$> python setup.py bdist_egg
```
Para la Instalaci�n:
```
easy_install mi-aplicacion.egg
easy_install http://mundogeek.net/mi-aplicacion.egg
```

### 9.2.2 Dependencias
Par�metros en el setup.py:
* install_requires
* dependency_links
* Paquetes: setup_requires
* Tests: tests_require
* Funcionalidades: extras_require

1. ```install_requires```
```python
install_requires = ["apoyo"] #lista de cadenas con paquetes dependientes#
install_requires = ["apoyo >= 1.0 < 2.0"]
```

2. ```dependency_links```, Repositorio donde acudir (p.ej., PyPI).

### 9.2.3 ```find_packages()```
Evita tener que listar los paquetes necesarios.
Ejemplo: [Python > 02_Ejercicios > 09_Dist > Ej05.py](https://github.com/imoren2x/biblab/blob/dev_python_manual/Python/02_Ejercicios/09_Dist/Ej05.py)

## 9.3 Crear ejecutables: ```py2exe```
Requisitos de ```py2exe```:
* Programa principal
* importar ```py2exe```
* argumentos console y windows para indicar el nombre del script(s) que se quiera convertir en ejecutables de consola o de interfaz gr�fica.

Ejemplo: [Python > 02_Ejercicios > 09_Dist > Ej06.py](https://github.com/imoren2x/biblab/blob/dev_python_manual/Python/02_Ejercicios/09_Dist/Ej06.py)

Generaci�n:
```
$> python setup.py py2exe
```

Se genera
* un directorio build con las librer�as compiladas.
* un directorio dist, con los archivos de la aplicaci�n.
  * uno o varios ejecutables con los scripts indicados en console y windows
  * un archivo python*.dll (int�rprete de Python)
  * un archivo library.zip con pyc: m�dulos de la aplicaci�n compilados

Para reducir el n�mero de archivos:
| Argumento         | Descripci�n                   |
|-------------------|-------------------------------|
| ```--bundle```    | A�ade las DLL a library.zip.  |
| ```--bundle 2```  | A�ade las DLL y los pyd a library.zip. |
| ```--bundle 1```  | A�ade las DLL, los pyd y el int�rprete |

Ejemplo: [Python > 02_Ejercicios > 09_Dist > Ej07.py](https://github.com/imoren2x/biblab/blob/dev_python_manual/Python/02_Ejercicios/09_Dist/Ej07.py)

Para inscrustar library.zip en ejecutable, llamar a py2exe con argumento ```zipfile=None``` en ```setup.py```. \
Ejemplo: *ib�dem*


---------------------------------------------------------------------------

# Parte avanzada
```
10 1 Sockets
11 2 Threads and processes
12 3 Databases, XML, YAML
13 4 Expresiones regulares
14 5 Webs
14 6 Marshalling
15 7 Code obfuscation
```

# Cap�tulo 10. Sockets
```
10.1 Definici�n y clasificaci�n
10.2 M�todos sockets para servidor y cliente.
```

## 10.1 Definici�n y clasificaci�n
Los sockets son un concepto abstracto para implementar comunicaciones entre elementos de la red.

Un socket queda definido por:
* IP address
* Port listening
* Protocol

En Python, el m�dulo ```socket``` los implementa.

Se clasifican en dos seg�n el nivel 4 OSI:
* Sockets de flujo (TCP) (```socket.SOCK_STREAM```)
* Sockets de datagramas (UDP) (```socket.SOCK_DGRAM```)

O en tres seg�n el nivel 3 OSI:
* Sockets UNIX (socket.AF_UNIX)
* Socket IPv4 (socket.AF_INET)
* Socket IPv6 (socket.AF_INET6)

Constructor de un socket:
```python
MiSocket = socket.socket()
```

Par�metros:
* Familia (por defecto, ```AF_INET```)
* Tipo (```SOCK_STREAM```)
* Protocolo

## 10.2 M�todos sockets para servidor y cliente
Servidor: ```.socket()```, ```.bind()```, ```.listen()```, ```.accept()```, ```.send()```, ```.recv()``` (SBLASR)

Cliente: ```.socket()```, ```.connect()```, ```.send()```, ```.recv()``` (SCSR)

Ejemplo: crear un servidor y un cliente

### 10.2.1 Creaci�n del servidor:
Pasos para crear un servidor con sockets:
1. Instanciar un socket
```python
MiSocketServer = socket.socket()
```
2. ```bind```: Indicar puerto
```python
MiSocketServer.bind(("localhost", 9999))
```
3. ```listen```: para aceptar conexiones entrantes
```python
MiSocketServer.listen(1) # N�mero de conexiones entrantes >= 1
```
4. ```accept```: escuchar conexiones entrantes \
Bloquea la ejecuci�n hasta que llega el mensaje. \
Al llegar un mensaje, devuelve un socket del cliente y un tupla que contiene el host y puerto de dicha conexi�n:
```python
MiSocketCliente, (HostCliente, PuertoCliente) = MiSocketServer.accept()
```
5. ```send```/```sendfrom```: env�a datos (TCP/UDP) \
```recv```/```recvfrom```: recibe datos (TCP/UDP)
```python
Rx = MiSocketCliente.recv(1024)
print "Recibido: ", Rx
Tx = Rx
MiSocketCliente.send(Tx)
```
6. Una terminada la conexi�n con el socket, se cierra con ```close```.
```python
MiSocketCliente.close()
```

### 10.2.2 Creaci�n del cliente:
1. Instanciar un socket:
```python
MiSocketCliente = socket.socket()
```
2. ```connect```: conectarnos al servidor:
```python
MiSocketCliente.connect("localhost", 9999)
```
3. ```send```/```recv``` (TCP) / ```sendfrom```/```recvfrom``` (UDP):
```python
MiSocketCliente.send("hola")
```

## 10.3 Protocolos de red y sus m�dulos en Python
| Protocol | Application        | Port | Python Module               |
|----------|--------------------|-----:|-----------------------------|
| HTTP     | Web pages          |  80  | httplib, urllib, xmlrpclib  |
| NNTP     | Usenet news        | 119  | nntplib                     |
| FTP      | File transfers     |  20  | ftplib, urllib              |
| SMTP     | Sending email      |  25  | smtplib                     |
| POP3     | Fetching email     | 110  | poplib                      |
| IMAP4    | Fetching email     | 143  | imaplib                     |
| Telnet   | Command lines      |  23  | telnetlib                   |
| Gopher   | Document transfers |  70  | gopherlib, urllib           |

# Cap�tulo 11. Threads y procesos
```
1. Threads
    1.1 Conceptos
    1.2 M�dulo threading de Python
        1.2.1 Definici�n
        1.2.2 Sincronizaci�n
    1.3 M�dulo Queue Python
2. Procesos
    M�dulo subprocess.
    M�dulo os.fork y os.signal
```

## 11.1 Threads

### 11.1.1 Conceptos

* **Thread**. Elemento concurrente ejecutable. "Esp�ritu animado del procedimiento".

* **GIL (Global Interpreter Lock)**

* ```sys.setcheckinterval``` Quantum. Intervalo de tiempo que dispone el procesador para ejecutar una instrucci�n. \
En un scheduler Round Robin, si se supera este tiempo, la instrucci�n sale del procesador como ready y entra la siguiente instrucci�n.

* **Preemption**. Capacidad de un sistema de expeler del procesador una instrucci�n por otra m�s prioritaria.

* **Estados de un thread**: \
Creado, arrancado, en ejecuci�n (*running*), suspendido (*ready*), *blocked*, vivo.

* **Regi�n cr�tica**: \
�rea de memoria o variable que es sensible de ser sobrescrita por varios threads. \
Debe protegerse deste efecto.

* **Deadlock**. Bloqueo de una regi�n cr�tica que nunca se libera. \
Si el lock nunca se libera, el programa queda muerto.

* **Race Condition**. Situaci�n en la que el orden de ejecuci�n de dos threads se invierte. \
Por ejemplo, si un productor-consumidor consume antes de producir el dato.

Threads en Python:
- M�dulo ```threads```. Threads a bajo nivel.
- M�dulo ```threading```. Threads a alto nivel.

Tambi�n puede mencionarse el m�dulo mutex.

### 11.1.2 M�dulo ```threading``` de Python

#### 11.1.2.1 Definiciones
En Python, puede crearse threads de dos formas:
* ```class MiThread(threading.Thread)``` y sobrescribir el m�todo ```run```.
* Instanciar ```threading.Thread(target=...)```

Estados de un Thread.
- Creado. Una vez instanciado el thread de una forma u otra.
- Arrancado. Una vez que se llama al m�todo start().
- Ready. Si el thread est� listo para ser ejecutado (no bloqueado), pero espera a que termine la actual instrucci�n en el procesador.
- Blocked. Si el thread est� esperando alg�n dato o espera una operaci�n de i/o.

M�todos de un thread:
- ```start()``` Arranca un thread ya creado (instanciado)
- ```run()``` M�todo que se ejecuta cuando se arranca.
- ```join()``` Detiene la ejecuci�n de quien llama al thread hasta que �ste termine su ejecuci�n.
- ```name``` Nombre asignado a un thread. No tiene importancia m�s que cuando se usa setName y getName.
- ```isAlive()``` Devuelve True si el thread sigue vivo.
- ```activeCount()``` Return the number of Thread objects currently alive, including Main Thread.
- ```enumerate()``` Return a list of all Thread objects currently alive.

### 11.1.2.2 Sincronizaci�n
Mecanismos de sincronizaci�n:
- Lock
- RLock (Re-entrant lock)
- Semaphore
- Condition
- Event

Los mecanismos ```Lock```, ```RLock``` y ```Semaphore``` usan ```acquire()``` y ```release()```.
Pueden usarse con ```with```.
```python
import threading

some_rlock = threading.RLock()

with some_rlock:
    print "some_rlock is locked while this executes"
```

El mecanismo ```Condition``` usa ```wait```, ```notify```, ```notifyAll```.

### 11.1.3 M�dulo Queue Python
Permite a�adir y quitar informaci�n de forma *thread-safe*.

# 11.2 Procesos
M�dulo ```subprocess```.
M�dulo ```os.execl```, ```os.fork```, ```os.kill``` y ```os.signal```, ```spawn```, etc.

### 11.2.1 M�dulo ```subprocess```
Clase ```Popen``` ejecuta un programa hijo en un nuevo proceso. \
Su constructor es r�pido y sencillo.

```python
from subprocess import Popen
...

Popen ( args,
    bufsize             = 0,
    executable          = None,
    stdin               = None, subprocess.PIPE
    stdout              = None, subprocess.PIPE
    stderr              = None, subprocess.PIPE subprocess.STDOUT
    preexec_fn          = None,
    close_fds           = False,
    shell               = False, True will be executed from shell (shell pipes, filename, environment...)
    cwd                 = None,
    env                 = None,
    universal_newlines  = False,
    startupinfo         = None,
    creationflags       = 0 )
```

El par�metro ```args``` es una lista con el comando a ejecutar. \
Por ejemplo: ```['/bin/vikings', '-input', 'eggs.txt', '-output', 'spam spam.txt', '-cmd', "echo '$MONEY'"]```

M�todos de ```Popen```:
- ```.poll()``` Check if child process has terminated. Set and return ```returncode``` attribute.
- ```.wait()``` Wait for child process to terminate. Set and return returncode attribute.
- ```Popen.communicate(input=None)``` Interact with process: Send data to stdin. Read data from stdout and stderr, until end-of-file is reached. Wait for process to terminate. \
Returns a tuple (stdoutdata, stderrdata). \
Requires stdin=PIPE, stdout=PIPE and stderr=PIPE.
- ```.send_signal(signal)``` Sends the signal signal to the child.
- ```Popen.terminate()``` ```SIGTERM```
- ```Popen.kill()``` ```SIGKILL```
- ```Popen.stdin```, ```Popen.stdout```, ```Popen.stderr``` File objects that provides input or output to the child process.
- ```Popen.pid``` The process ID of the child process.
- ```Popen.returncode``` The child return code, set by ```poll()``` and ```wait()``` (and indirectly by ```communicate()```). A ```None``` value indicates that the process hasn�t terminated yet.

Otros m�todos de ```subprocess```:
- ```subprocess.call(args, ...)``` Run the command described by args. \
Wait for command to be completed, then return code attribute.

```python
subprocess.call(["ls", "-l"])
```

- ```subprocess.check_call(args, ...)```

- ```subprocess.check_output(args, ...)```


# Cap�tulo 12. Databases, XML, YAML, JSON
```
12.1 DB API
    12.1.1 Variables globales
    12.1.2 Excepciones
    12.1.3 Uso b�sico de DB-API
    12.1.4 Tipos SQL
12.2 Otras opciones
```

## 12.1 DB API
Python Database API o DB-API y se recoge en el [PEP 249](http://www.python.org/dev/peps/pep-0249/).

En los ejemplos se usa ```SQLite``` o m�dulo ```sqlite3```.

Para MySQL, driver DB API 2.0 MySQLdb (http://mysql-python.sourceforge.net/).

### 12.1.1 Variables globales
Todo driver compatible con DB-API 2.0 debe tener 3 variables globales:
* ```apilevel```: string con la versi�n DB API que utiliza. Actualmente s�lo puede tomar 1.0 o 2.0
* ```threadsafety```: entero de 0 a 3 que describe el m�dulo para el uso con threads.
  * 0: no se puede compartir el m�dulo entre threads sin utilizar alg�n tipo de mecanismo de sincronizaci�n.
  * 1: se puede compartir el m�dulo pero no las conexiones.
  * 2: m�dulos y conexiones, pero no cursores.
  * 3: totalmente thread-safe
* ```paramstyle```: informa sobre la sintaxis a utilizar para insertar valores en la consulta SQL de forma din�mica.
  * qmark: interrogaciones \
```sql = "select all from t where valor = ?"```
  * numeric: un n�mero indicando la posici�n. \
```sql = "select all from t where valor = :1"```
  * named: el nombre del valor \
```sql = "select all from t where valor=:valor"```
  * format: especificadores de formato similares a los del printf de C. \
```sql = "select all from t where valor=%s"```
  * pyformat: similar al anterior, pero con las extensiones de Python. \
```sql = "select all from t where valor=%(valor)"```

Para sqlite3:
```python
>>> import sqlite3 as dbapi
>>> print dbapi.apilevel
2.0
>>> print dbapi.threadsafety
1
>>> print dbapi.paramstyle
qmark
```

### 12.1.2 Excepciones
Jerarqu�a de excepciones:
```
StandardError
    Warning
    Error
        InterfaceError
        DatabaseError
        OperationalError
        IntegrityError
        InternalError
        ProgrammingError
        NotSupportedError
```

| Excepci�n             | Descripci�n                                       |
|-----------------------|---------------------------------------------------|
| StandardError         | Superclase para todas las excepciones de DB API.  |
| Warning               | Excepci�n que se lanza para avisos importantes    |
| Error                 | Superclase de los errores                         |
| InterfaceError        | Errores relacionados con la interfaz de la base de datos, y no con la base de datos en s�.    |
| DatabaseError         | Errores relacionados con la base de datos.    |
| DataError             | Errores relacionados con los datos, como una divisi�n por cero.   |
| OperationalError      | Errores relacionados con el funcionamiento de la base de datos, como una desconexi�n inesperada. |
| IntegrityError        | Errores relacionados con la integridad referencial.     |
| InternalError         | Error interno de la base de datos.    |
| ProgrammingError      | Errores de programaci�n, como errores en el c�digo SQL.   |
| NotSupportedError     | Excepci�n que se lanza cuando se solicita un m�todo que no est� soportado por la base de datos. |

### 12.1.3 Uso b�sico de DB-API
Conexi�n a la base de datos: ```connect(platform-dependant-parameters)```
  * sqlite3: ```connect(<file>)```, ```connect(":memory:")```
  * MySQLdb: ```connect(host, port, user, password, db)```
Devuelve un objeto tipo Connection que representa la conexi�n con el servidor.
```python
>>> bbdd = dbapi.connect("bbdd.dat")
>>> print bbdd
<sqlite3.Connection object at 0x00A71DA0>
```

Acceso a operaciones: ```cursor```
```python
c = bbdd.cursor()
```

M�todo execute de cursor: ```c.execute(strReq)``` \
Par�metro: una cadena de c�digo SQL a ejecutar. \
Ejemplo: Crear una nueva tabla empleados e insertar una tupla en ella.
```python
c.execute("""create table empleados (dni text, nombre text, departamento text)""")
c.execute("""insert into empleados
    values ('12345678-A', 'Manuel Gil', 'Contabilidad')""")
```

Commit/auto-commit: \
Si la DB soporta transacciones y est�n activadas, hay que llamar a commit; en otro caso, la base de datos estar�a vac�a. \
La DB puede contener tambi�n auto-commits. \
Si no soportan commit, debe haber un commit con implementaci�n vac�a. \

**NOTA:** si se llama a commit siempre, puede cambiarse de base de datos s�lo con modificar la l�nea import (p.ej., de SQL a Postgress).

Rollback: \
Para cancelar la transacci�n actual. \
Si no soporta rollback, su llamada producir� una excepci�n.

Consultas a la DB: ```execute``` y ```cursor```
Tambi�n se puede llamar a los m�todos de ```cursor```
* ```fetchone```
* ```fetchmany```
* ```fetchall```

* ```fetchone```: Devuelve la siguiente tupla del conjunto resultado o None cuando no existen m�s tuplas.
* ```fetchmany```: Devuelve el n�mero de tuplas indicado por el entero pasado como par�metro o bien el n�mero indicado por el atributo ```Cursor.arraysize``` si no se pasa ning�n par�metro (por defecto, 1).
* ```fetchall```: Devuelve un objeto iterable con todas las tuplas.

Consultas: ```selects``` con substituci�n a DB API. \
No usar m�todos de cadena habituales, sino la substituci�n de par�metros de DB API. \
Ejemplo:
```
http://www.mibanco.com/sucursales?ciudad=Madrid
cursor.execute("""select * from sucursales where ciudad=?""", (ciudad,))
```

## 12.1.4 Tipos SQL
Para trabajar con tipos SQL, usar los constructores de la API:
* ```Date(year, month, day)```: Para almacenar fechas.
* ```Time(hour, minute, second)```: Para almacenar horas.
* ```Timestamp(year, month, day, hour, minute, second)```: Para almacenar timestamps (una fecha con su hora).
* ```DateFromTicks(ticks)```: Para crear una fecha a partir de un n�mero con los segundos transcurridos desde el epoch (el 1 de Enero de 1970 a las 00:00:00 GMT).
* ```TimeFromTicks(ticks)```: Similar al anterior, para horas en lugar de fechas.
* ```TimestampFromTicks(ticks)```: Similar al anterior, para timestamps.
* ```Binary(string)```: Valor binario.

## 12.2 Otras opciones
En Python existen m�dulos propios para trabajar con bases de datos.
- Orientadas a objetos:
  * ZODB (Zope Object Database)
  * ORM (Object Relational Mapping Engine)
  * Django ORM, https://djangoproject.com/
  * SQLAlchemy
  * SQLObject
  * Storm
- JPython, Java databases
- IronPython, \.NET databases

# Cap�tulo 13. Expresiones regulares
```
13.1 Expresiones regulares
    13.1.1 Clases de caracteres . [^-] \ \d \D ...
    13.1.2 Grupo ()
    13.1.3 OR |
    13.1.4 Repetici�n {} {,} + * ?
    13.1.5 Posici�n ^ $
    13.1.6 Greedy y non-greedy
    13.1.7 Miscel�nea
13.2 Usando el m�dulo re de Python
```

## 13.1 Expresiones regulares
Una expresi�n regular, regex or regexp, consiste en patrones que describen conjuntos de cadenas de caracteres.
Su utilidad tiene varias aplicaciones:
- buscar dichos patrones en un fichero
- comprobar que una cadena cumple una expresi�n regular
- dividir o agrupar la cadena como indica la expresi�n regular
- substituir cadenas que cumplen un patr�n por otro texto

Hay quince metacaracteres para indicar las expresiones regulares:
```. ( ) \ | [ ] - { } ^ $ + * ?```

La funci�n de cada correponde a
1. Clases de caracteres: ```. [^-] \ \d \D ...```
2. OR ```|```
3. Grupo ```()```
4. Repetici�n ```{} {,} + * ?```
5. Posici�n ```^ $```
6. Miscel�nea

### 13.1.1 Clases de caracteres ```. [^-] \ \d \D ...```
1. Punto ```.``` \
Identifica a cualquier car�cter que no sea una ruptura de l�nea. \
Equivale a ```[^\n]``` en Unix y a ```[^\r\n]``` en Windows.

2. Rango de caracteres ```[] [-] [^-]``` \
Identifica un juego de caracteres que puede estar definido
- como una lista, \
p.ej., ```gr[ea]y``` aceptar�a gray o grey
- por un rango con el car�cter gui�n ```-```
p.ej., ```bg[a-z]``` aceptar�a cualquier car�cter min�sculo.
- como caracteres no admitidos (complemento a los admitidos)
p.ej., ```gr[^ea]y``` no aceptar�a grey ni gray, pero s� griy o gruy

Para indicar caracteres, si se emplea la x indica hexadecimal (p.ej., \xA9).

3. Escape de expresiones regulares \
Indica que el car�cter no debe ser interpretado como metacar�cter. \
Por ejemplo, ```\^ \[ ...```

4. Caracteres shorthand ```\d \D \w \W \s \S```
1. D�gito ```\d \D``` \
```\d``` equivale a ```[0-9]``` \
```\D``` equivale a ```[^0-9]```
2. Palabra ```\w \W``` \
```\w``` equivale a ```[a-zA-Z0-9_]``` \
```\W``` equivale a ```[^a-zA-Z0-9_]```
3. Espacio ```\s \S``` \
```\s``` equivale a ```[ \t\n\r\f\v]``` \
```\S``` equivale a ```[^ \t\n\r\f\v]```

### 13.1.2 OR de patrones ```|```
Indican que cualquier cadena a ambos lados es igualmente v�lida. \
P.ej,. ```a|A``` indica a min�scula o may�scula.

### 13.1.3 Grupo ```()```
Los par�ntesis sirven para delimitar grupos en las expresiones regulares.
Las aplicaciones m�s habituales son:
- Extraer los grupos de la expresi�n regular en la cadena a parsear. \
Por ej., ```(.*)(abc)(.*)```
- Emplear grupos con la barra | para indicar posibles elecciones. \
Por ej., ```(a|b|c)```

### 13.1.4 Repetici�n ```{} {,} + * ?```
Estos caracteres indican que el car�cter a la izquierda se repetir� seg�n se indica.
* ```{n}``` se repetir� n veces. \
p.ej., ```a{3}``` aceptar� aaa
* ```{n,m}``` se repetir� de n a m veces. \
p.ej., ```a{2,3}``` aceptar� aa � aaa
* ```+``` uno o m�s veces \
p.ej., a+ aceptar� a aa aaa ...
* ```*``` cero � m�s veces \
p.ej., ```.*``` aceptar� cu�lquier cadena de caracteres
* ```?``` cero � una vez, tambi�n se emplea para indicar caracteres opcionales. \
p.ej., ```colou?r``` admitir�a color o colour

### 13.1.5 Posici�n ```^ $```
Indican que la expresi�n regular estar� al principio o al final, ```^``` � ```$``` respectivamente. \
Ejemplo: ```^abc$``` indica que la cadena es abc, principio y final.

### 13.1.6 *Greedy* y *non-greedy*
La cadena ```.*?``` Ayuda a coger el m�nimo n�mero de repeticiones.
Ejemplo:
```python
string = "<python>perl>"
<.*>    matches with <python>perl>  ( see with group(0) )
<.*?>   matches with <python>       ( see with group(0) )
```

### 13.1.7 Miscel�nea
*Special characters*:
| Character     | Description                   |
|:-------------:|-------------------------------|
| ```\t```      | to match a tab character (ASCII 0x09) |
| ```\r```      | for carriage return (0x0D) |
| ```\n```      | for line feed (0x0A). |
| ```\a```      | (bell, 0x07), |
| ```\e```      | (escape, 0x1B), |
| ```\f```      | (form feed, 0x0C) and |
| ```\v```      | (vertical tab, 0x0B). |
| ```\xFF```    | character in hexadecimal encoding |
| ```\uXXXX```  | character in unicode encoding |

Remember that Windows text files use ```\r\n``` to terminate lines, while UNIX text files use ```\n```.

Word boundary:
* ```\b``` word boundary
* ```\B```

```
\b[1-9][0-9]{3}\b number between 1000 and 9999
\b[1-9][0-9]{2,4}\b number between 100 and 99999

<[^<>]+>
```

Use the special syntax to group tokens without creating a capturing group: ```Set(?:Value)?```

Ejemplo:
```
q(?=u) q(?!u) (?<=a)b (?<!a)b
```

### Grupos con identificador de nombre en Python regex ```(?P<name>...)```
Los grupos pueden tener nombres que permitan seleccionarlos en el objeto match. \
Ejemplo:
```python
regex = (?P<level>C|W|E|I|D|V)/(?P<modulo>.*?)\s{0,5}\(\s{0,}(?P<PID>\d{2,7})\): (?P<msg>.*)
```

## 13.2 M�dulo ```re``` de Python
Python dispone de un m�dulo de expresiones regulares que permite realizar todo tipo de operaciones:
- Crear objecto Regex: ```compile```
- Comprobar: ```match```, ```search```
- Buscar: ```findall```, ```finditer```
- Dividir: ```split```
- Substituir: ```sub```

Antes, es importante entender dos flags:
* ```re.IGNORECASE```: Se ignoran si las letras son may�sculas o min�sculas.
* ```re.VERBOSE```: Se ignoran los espacios y los comentarios en la cadena de la expresi�n regular.

### 13.2.1 Crear objeto Regex: ```re.compile```
Crea un objeto RegexObject, que permite reutilizar un patr�n. \
Sobre este objeto RegexObject se aplican los m�todos ```.match```, ```.search```, ```.split```, ```.sub```, etc.

Sintaxis:
```python
regex = re.compile(pattern, flags=0)
```

### 13.2.2 M�todos ```match``` y ```search```
Crea un objecto ```MatchObject``` o ```None``` si la expresi�n regular encaja con la cadena bajo prueba o no, respectivamente. \
Si el objeto se convierte a booleano, indica si ha habido match o no.

Sintaxis:
```python
matchObj = re.match(pattern, string, flags=0)
matchObj = re.search(pattern, string, flags=0)
```

La comprobaci�n entre el patr�n y la cadena se hace s�lo al principio. \
El m�todo ```search``` lo busca a lo largo de toda la cadena, no s�lo al principio.

M�todos de ```MatchObject```:
* ```.start()```/```.end()``` Posici�n en que comienza y finaliza la subcadena reconocida.
* ```.group()```/```.groups()``` Grupos que propiciaron el reconocimiento de la cadena.
  * ```.group(0)```/```.group()``` subcadena reconocida por la expresi�n regular al completo.
  * ```.groups()``` devuelve todos los grupos menos el cero.

Flags opcionales:
- ```re.I``` Performs case-insensitive matching.

- ```re.L``` Interprets words according to the current locale. This interpretation affects the alphabetic group (```\w``` and ```\W```), as well as word boundary behavior (```\b``` and ```\B```).

- ```re.M``` Makes ```$``` match the end of a line (not just the end of the string) and makes ```^``` match the start of any line (not just the start of the string).

- ```re.S``` Makes a period (dot) match any character, including a newline.

- ```re.U``` Interprets letters according to the Unicode character set. \
This flag affects the behavior of ```\w```, ```\W```, ```\b```, ```\B```.

- ```re.X``` Permits "cutter" regular expression syntax. \
It ignores whitespace (except inside a set ```[]``` or when escaped by a backslash) and treats unescaped ```#``` as a comment marker. \

Ejemplo: ```re.I|re.X```

### 13.2.3 Buscar: ```findall```, ```finditer```
* ```findall```: Devuelve una lista de todas las cadenas cumplen el patr�n.
* ```finditer```: Devuelve un iterador con el que consultar uno a uno los distintos ```MatchObject```.

### 13.2.4 Dividir: ```split```
Sintaxis: ```re.split(pattern, string, maxsplit=0, flags=0)```

Parte la cadena y devuelve una lista con el resultado.

Para partirla, sigue las siguientes reglas:
- Parte la cadena hasta ```maxsplit``` veces. Si es cero, tantas veces como sea necesaria.
- Si el patr�n en est� en un grupo, �ste se incluye como elemento de la lista. \
Por ejemplo, ```re.split('([a-f]+)', '0a3B9')``` devuelve ```['0', 'a', '3B9']```

### 13.2.5 ```re.sub```
Return the string obtained by replacing the leftmost non-overlapping occurrences of pattern in string by the replacement repl. \
Sintaxis: ```re.sub(pattern, repl, string, count=0, flags=0)```

## Referencias:
* [Python 3: Regular expressions]
* [Regular Expressions general info]
* [Regex Planet for Python]


# Cap�tulo 14. XML (Extensible Markup Language)
```
14.1 Estructura de un XML
14.2 Python XML stdlib: xml
    14.2.1 Clases principales: Element, ElementTree, XMLParser, TreeBuilder
    14.2.2 Lectura, acceso y modificaci�n de XML
    14.2.3 Creaci�n, escritura y salvado de XML.
14.3 Python XML avanzado: librer�a lxml
```

## 14.1 Estructura de un XML
Un documento XML tiene los siguientes componentes:
- Cabecera: normalmente, con versi�n y codificaci�n (encoding)
- Hoja de estilo: XLST.
- Espacio de nombres: xmlns
- Root element: primer nodo del XML, que debe ser �nico.
- Hijos del root element. \
En Python, corresponden a una secuencia (tupla) de subelementos dentro del elemento.
- tag: t�tulo del nodo \
p.ej., book es el tag del siguiente elemento: ```<book>Hola, libro</book>```
- Atributos de un elemento: indican propiedades de �ste. \
Siempre siguen la estructura (clave, valor) donde valor debe siempre
  - estar entre par�ntesis
  - No tener espacios en la expresi�n clave="valor". \
p.ej., ```<boot category="Cooking" category_type="ISO"/>```
- Texto: Contenido del elemento. \
p.ej., 'Hola, libro' es el texto del nodo anterior.
- Comentario: ```<!-- Esto es un comentario -->```

Un XML que cumple correctamente todas sus reglas es un documento "bien formado" (*well-formed*).

Reglas de nombrado de un Elemento XML:
- Sensibles a may�sculas.
- Deben empezar por letra o por gui�n bajo.
- No deben empezar con las letras xml/Xml/XML/...
- No usar espacios.
- Pueden contener letras/d�gitos/guiones/gui�nes bajos/puntos.

### Caracteres especiales
Hay caracteres especiales como los s�mbolos mayor y menor que deben escribirse especialmente:
| S�mbolo | Escritura   |
|:-------:|:-----------:|
|   <     |    &lt;     |
|   >     |    &gt;     |
|   &     |    &amp;    |
|   '     |    &apos;   |
|   "     |    &quot;   |

Ejemplo XML:
```
<bookstore> <!-- Root -->
    <book category="Cooking">
        <title lang="en">Everyday Italian</title>
        <title/>
    </book>
</bookstore>
```

## 14.2 Python XML stdlib: xml
### 14.2.1 Clases principales: Element, ElementTree, XMLParser, TreeBuilder
* Element: Contenedor flexible de nodos XML.
  - tag: t�tulo del nodo
  - attributes: diccionario
  - text: texto del nodo
  - tail: texto final del nodo (opcional)
  - childs: hijos del nodo

* ElementTree: Wrapper to/from XML.

### 14.2.2 Lectura, acceso y modificaci�n de XML
```python
# Importaci�n del paquete
import xml.etree.ElementTree as ET

#Parseo del fichero XML
element_tree = ET.parse(xml_file_full_path_str)

#Get root element
root_elem = element_tree.getroot()

#Access to tag, attributes, text and tail.
root_elem.tag       # return str
root_elem.attrib    # return dict
root_elem.text      # return str
root_elem.tail      # return str

#Find: busca en el elemento deacuerdo a un xpath. Devuelvo el primero que cumple el criterio.
tag_elem = root_elem.find("tag")

#FindAll: igual sintaxis que find. Devuelve una lista de elementos.
root_elem.findall("tag")

#Iter: devuelve un iterador (tengo que trabajar m�s con �l)

#Modificar tag, attributes, text, tail
tag_elem = root_elem.find("tag")
new_rank = int(tag_elem.text) + 1
tag_elem.text = str(new_rank)
tag_elem.set('updated', 'yes')

#Eliminar un elemento
tag_elem = root_elem.find("tag")
root_elem.remove(tag_elem)

#Salvar modificaciones
element_tree.write('output.xml')
```

Uso de ```xpath```: forma de acceso al �rbol XML, todos tipos string
```
tag
tag[subtag]
tag[subtag='text']
tag[int_position]
tag[@attrib]
tag[@attrib='value']
/
//
.
..
*
```

Ejemplos:
```
# All 'neighbor' grand-children of 'country' children of the top-level elements
"./country/neighbour"
# Nodes with name='Singapore' that have a 'year' child
".//year/..[@name='Singapore']"
# 'year' nodes that are children of nodes with name='Singapore'
".//*[@name='Singapore']//year"
# All 'neighbor' nodes that are the second child of their parent
".//neighbour[2]"
```


### 14.2.3 Creaci�n, escritura y salvado de XML.
```python
a = ET.Element('a')
b = ET.SubElement(a, 'b')
c = ET.SubElement(a, 'c')
d = ET.SubElement(c, 'd')
ET.dump(a)
#<a><b /><c><d /></c></a>
```

## 14.3 Python XML avanzado: librer�a lxml
Tiene muchas m�s ventajas:
- M�s flexibilidad para los xpath,
- Validaci�n de documentos con DTD y Schemas.
- M�s rendimiento

----------------------------------------------------------------------------

| Python Standard libraries | Descripci�n               |
|---------------------------|---------------------------|
| datetime                  |                           |
| cryptographic             |                           |
| logging                   |                           |
| calendar                  |                           |
| time                      |                           |
| thread                    |                           |
| os                        |                           |
| io                        |                           |
| subprocess                |                           |
| Network: socket, ssl, e-mail/MIME |                   |
| HTML                      |                           |
| XML                       |                           |
| debugging                 |                           |
| argparse/optparse         |                           |
| databases                 |                           |

# References

General:
* [Google search: differences Python 2 and 3](https://www.google.com/search?q=differences+Python+2+and+3&rlz=1C1CHZO_esES914ES914&oq=differences+Python+2+and+3&aqs=chrome..69i57j0i22i30l9.4871j1j7&sourceid=chrome&ie=UTF-8)

* [Chelin Tutorials: Python](http://chelintutorials.blogspot.fr/p/python.html)

 * [Interpreted Languages: PHP, Perl, Python, Ruby (Sheet One)](http://hyperpolyglot.org/scripting)

 * [Python 2.4 Quick Reference](http://rgruet.free.fr/PQR24/PQR2.4.html)

Strings:
* [Python 3: String methods]
* [Python 2: String]
* [Python 3: String]
* [Python 3: String >> Custom String Formatting]
* [Python 3: String constants]
* [Learn Python 3: String formatting]
* [Python 3: String >> String formatting]
* [Python string Interpolation with the Percent Operator]
* [Python 3: Lexical Analysis >> f-string]
* [Python 3 Standard library >> Built-in Types >> printf-style formatting]

* [3.10.4 Documentation � The Python Standard Library � Text Processing Services]

Decoradores:
* [Juanjo Conti (AR): Decoradores en Python I]
* [Juanjo Conti (AR): Decoradores en Python II]
* [Juanjo Conti (AR): Decoradores en Python III]
* [Juanjo Conti (AR): Decoradores en Python ampliados]

Data types:
* [functools.reduce]
* [The Python Standard Library � Built-in Types]
* [Revamping dict.keys(), .values() and .items()]
* [Python 2.5.2 tutorial >> 4. More Control Flow Tools >> 4.7.4 Unpacking Argument Lists]
* [Built-in Functions]
* [Python 3 Tutorial Data structures]
* [Python 3 Tutorial Data structures, dictionaries]
* [Python 3 Built-in Types >> Sequence Types]

* [Python 3 Data model >> 3.1 Special method names]

Dise�o orientado a objetos
* [Google: python 3 inheritance super and ```__init__```]
* [RealPython: Supercharge Your Classes With Python super\(\)]
* [Python 3: Built-in Functions >> super]
* [Stack Overflow: Understanding Python super() with ```__init__()``` methods \[duplicate\]]

Errores y excepciones:
* [Python 2: Gu�a de aprendizaje. Errores y excepciones]

* [Python 3 Tutorial >> 8. Errors and Exceptions]

Python debugger:
* [Python 2 debug]
* [Python 2 PDB]
* [Python 2 BDB]
* [Python 3 Debugging and Profiling]

Documentaci�n:
* [Epydoc Project]
* [Epydoc documentation: Docstring manual]
* [Epydoc documentation: Epytext Manual]
* [Epydoc documentation: Epydoc Fields]

Regular expressions:
* [Python 3: Regular expressions]
* [Regular Expressions general info]
* [Regex Planet for Python]

Misc
* [Matti Pastell � IIR filter design with Python and SciPy]

[Python 3: String methods]: https://docs.python.org/3/library/stdtypes.html#string-methods

[Python 2: String]: https://docs.python.org/2/library/string.html

[Python 3: String]: https://docs.python.org/3/library/string.html

[Python 3: String >> Custom String Formatting]: https://docs.python.org/3/library/string.html#custom-string-formatting

[Python 3: String constants]: https://docs.python.org/3/library/string.html#string-constants

[Python 3: String >> String formatting]: https://docs.python.org/3/library/string.html#string-formatting

[Learn Python 3: String formatting]: https://www.learnpython.org/en/String_Formatting

[Python 3: Lexical Analysis >> f-string]: https://docs.python.org/3/reference/lexical_analysis.html#f-strings

[Python string Interpolation with the Percent Operator]: https://stackabuse.com/python-string-interpolation-with-the-percent-operator/

[Python 3 Standard library >> Built-in Types >> printf-style formatting]: https://docs.python.org/3/library/stdtypes.html#printf-style-string-formatting

[Python 3 Data model >> 3.1 Special method names]: https://docs.python.org/3/reference/datamodel.html#special-method-names

[The Python Standard Library � Built-in Types]: http://docs.python.org/library/stdtypes.html

[Revamping dict.keys(), .values() and .items()]: http://www.python.org/dev/peps/pep-3106

[Python 2.5.2 tutorial >> 4. More Control Flow Tools >> 4.7.4 Unpacking Argument Lists]: http://docs.python.org/release/2.5.2/tut/node6.html#SECTION006740000000000000000

[Built-in Functions]: http://docs.python.org/library/functions.html

[Python 3 Tutorial Data structures]: https://docs.python.org/3/tutorial/datastructures.html

[Python 3 Tutorial Data structures, dictionaries]: https://docs.python.org/3/tutorial/datastructures.html#dictionaries

[Python 3 Built-in Types >> Sequence Types]: https://docs.python.org/3/library/stdtypes.html#typesseq

[functools.reduce]: http://docs.python.org/3.0/library/functools.html#functools.reduce

[Google: python 3 inheritance super and ```__init__```]:https://www.google.com/search?q=python+3+inheritance+super+and+__init__&rlz=1C1CHZO_esES914ES914&ei=TBpEY_OBL8OKzgO6tZtQ&ved=0ahUKEwjz17fS3tX6AhVDhXMKHbraBgoQ4dUDCA4&uact=5&oq=python+3+inheritance+super+and+__init__&gs_lcp=Cgdnd3Mtd2l6EAMyBggAEBYQHjIGCAAQFhAeOgoIABBHENYEELADOgsIABCABBANEAoQEzoICAAQHhANEBM6CAgAEBYQHhATOgoIABAIEB4QDRATOgwIABAIEB4QDRAKEBM6CggAEAgQHhANEAo6BwghEKABEAo6BAghEBVKBAhBGABKBAhGGABQhRBYgiRg60FoAXABeACAAYsBiAHAC5IBBDAuMTOYAQCgAQHIAQjAAQE&sclient=gws-wiz

[RealPython: Supercharge Your Classes With Python super\(\)]:https://realpython.com/python-super/

[Python 3: Built-in Functions >> super]:https://docs.python.org/3/library/functions.html#super

[Stack Overflow: Understanding Python super() with ```__init__()``` methods \[duplicate\]]:https://stackoverflow.com/questions/576169/understanding-python-super-with-init-methods

[3.10.4 Documentation � The Python Standard Library � Text Processing Services]: https://docs.python.org/3/library/text.html

[Python 2: Gu�a de aprendizaje. Errores y excepciones]: http://pyspanishdoc.sourceforge.net/tut/node10.html

[Python 3 Tutorial >> 8. Errors and Exceptions]: https://docs.python.org/3/tutorial/errors.html

[Juanjo Conti (AR): Decoradores en Python I]: http://www.juanjoconti.com.ar/2008/07/11/decoradores-en-python-i/
[Juanjo Conti (AR): Decoradores en Python II]: http://www.juanjoconti.com.ar/2009/07/16/decoradores-en-python-ii/
[Juanjo Conti (AR): Decoradores en Python III]: http://www.juanjoconti.com.ar/2009/12/30/decoradores-en-python-iii/
[Juanjo Conti (AR): Decoradores en Python ampliados]: http://revista.python.org.ar/2/es/html/decoradores-ampliado.html

[Python 2 debug]: http://docs.python.org/library/debug.html
[Python 2 PDB]: http://docs.python.org/library/pdb.html
[Python 2 BDB]: http://docs.python.org/library/bdb.html
[Python 3 Debugging and Profiling]: https://docs.python.org/3/library/debug.html

[Epydoc Project]: http://epydoc.sourceforge.net/
[Epydoc documentation: Docstring manual]: http://epydoc.sourceforge.net/manual-docstring.html
[Epydoc documentation: Epytext Manual]: http://epydoc.sourceforge.net/manual-epytext.html
[Epydoc documentation: Epydoc Fields]: http://epydoc.sourceforge.net/manual-fields.html

[Python 3: Regular expressions]: https://docs.python.org/library/re.html
[Regular Expressions general info]: http://regular-expressions.info/
[Regex Planet for Python]: http://www.regexplanet.com/advanced/python/index.html

[Matti Pastell � IIR filter design with Python and SciPy]: http://mpastell.com/2009/05/11/iir-filter-design-with-python-and-scipy/
