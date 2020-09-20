Módulos time & datetime
======

Table of Contents

1. Módulos time & datetime
2. Módulo `time`
    1. `time.time()`: hora actual desde Epoch (1970)
    2. Hora en formato `struct_time`: `gmtime`, `localtime` and `strptime`
    3. Hora en formato `string`: `asctime`, `ctime` and `strftime`
    4. Hora en format Epoch: `mktime` (inversa de `gmtime` and `localtime`)
3. Módulo `datetime`
4. References
_______________________

Módulos time & datetime
------
El módulo `datetime` está más pensado para operaciones aritméticas.

Módulo time
------

### `time.time()`: hora actual desde Epoch (1970)
```python
>>> print time.time()
1520522448.559
```

### Hora en formato `struct_time`: `gmtime`, `localtime` and `strptime`
Como entrada, segundos desde Epoch.
Como salida, `time.struct_time`.

 * `time.gmtime()` / `time.gmtime(time.time())`
    No existe horario de verano (DST, Daylight Saving Time).

 * `time.localtime()` / `time.localtime(time.time())`
    Sí existe horario de verano.

 * `time.strptime(date_string, format)`
    ```python
    >>> time.strptime('2018.03.08.15.10.53', "%Y.%m.%d.%H.%M.%S")
    ```

### Hora en formato `string`: `time.asctime`, `ctime` and `strftime`

 * `time.asctime()` / `time.asctime(time.gmtime())`
    Como entrada, `time.struct_time`.
    Como salida, `string`.
    No usa información presente en `localtime()`.

 * `time.ctime()# 'Sun Jun 20 23:21:05 1993'`
    Como entrada, segundos desde Epoch.
    Como salida, `string`.
    Tiempo provisto por `localtime()`.

 * `time.strftime(format[, date_string], )`
    ```python
    >>> time.strftime("%Y.%m.%d.%H.%M.%S", time.gmtime())
    >>> time.strftime("%Y.%m.%d.%H.%M.%S", )
    '2014.03.18.10.29.13'
    ```

### Hora en format Epoch: `mktime` (inversa de `gmtime` and `localtime`)
Tiempo Epoch a partir de struct.time

 * time.mktime( time.struct_time )
    Es la inversa de time.gmtime(), time.localtime().

Current processor time
    As floating point number expressed in seconds.


Módulo datetime
------
 * `datetime.datetime.strftime(datetime.datetime.today(), '%Y.%m.%d.%H.%M.%S')`
    Como entrada, formato `datetime.datetime`.
    Como salida, `string`.

 * `datetime.datetime.strptime('2018-03-15 20:38:49', format)`
    Como entrada, formato `string`.
    Como salida, formato `datetime.datetime`.


### References
 * [http://docs.python.org/2/library/time.html#time.localtime](http://docs.python.org/2/library/time.html#time.localtime)
 * [http://docs.python.org/2/library/datetime.html](http://docs.python.org/2/library/time.html#time.localtime)
