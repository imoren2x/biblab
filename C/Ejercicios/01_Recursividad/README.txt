Ejercicios de recursividad
======

1. Recursividad Factorial
Escribir una función recursiva para calcular el factorial de un
número natural n. Emplear el tipo unsigned long int. Comprobar su
funcionamiento calculando los factoriales de 0, 1, 2, 3, 4 y 5.
¿Qué ocurre al tratar de calcular el factorial de 14?
¿Podría calcularse el factorial de 14 con una versión iterativa?
¿Cómo se podría modificar la función para poder calcular
el factorial de números naturales mayores o iguales a 14?
Para realizar este ejercicio se sugiere usar la librería climits de C++
para imprimir por pantalla el valor máximo que puede asignársele a un
número natural largo. Para ello, debe imprimirse por pantalla la constante
ULONG_MAX de dicha librería.

2. Recursividad de números blancos

3. Recursividad en el triángulo de Pascal
Escribir una función recursiva Pascal(i,j) que calcule el
elemento i, j del triángulo de Pascal, que sigue el
siguiente patrón:

4. Recursividad del palíndromo
Escribir una función recursiva Palindromo(c,i,j) que determine si la subcadena
contenida entre las posiciones i y j de la cadena c es un palíndromo.

RECURSIÓN MUTUA
5	Escribir dos funciones mutuamente recursivas para calcular suma de los n primeros términos de la serie
	alternada: 1 - 1/2 + 1/3 - 1/4 + 1/5 · · · - 1/2i + 1/2i+1 · · ·
	Sugerencia: Escribir una función Pares(i) que calcule la suma hasta el término i (i par) y otra función
	Impar(i) que calcule la suma hasta el término i (i impar). Estas funciones deben llamarse una a la otra,
	hasta que se haya completado la suma de los n primeros términos. Para sumar los n primeros términos,
	escribir una función SumaSerie(n), que llamará a Par(n) o Impar(n) dependiendo de la paridad de n.

RECURSIÓN NO PRIMITIVA
6	La función de Ackerman se define para dos valores naturales dados m y n como sigue:
		Ackerman(0, n) = n + 1
		Ackerman(m, 0) = Ackerman(m - 1, 1)
		Ackerman(m, n) = Ackerman(m - 1, Ackerman(m, n - 1))
	Se trata de un ejemplo muy conocido de función recursiva no primitiva (la función aparece como argumento
	de sí misma). Escribir una función recursiva para calcular la función de Ackerman. Comprobar su
	funcionamiento calculando los siguientes valores: Ackerman(1,1)= 3, Ackerman(2,1)= 5, Ackerman(3,3)= 61,
	Ackerman(3,5)= 253. ¿Qué ocurre al intentar calcular Ackerman(5,1)?

7	Escribe un algoritmo recursivo que ordene un array de la siguiente forma:
	Sea k el índice del elemento mitad del array.
	Ordena los elementos hasta a[k], incluyéndolo.
	Ordena los elementos siguientes.
	Mezcla los dos subarrays en un único array ordenado.
	Este método de clasificación interna se denomina ordenación por mezcla, o Mergesort.
