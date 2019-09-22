Ejercicios de recursividad
======

1. Recursividad Factorial
Escribir una funci�n recursiva para calcular el factorial de un
n�mero natural n. Emplear el tipo unsigned long int. Comprobar su
funcionamiento calculando los factoriales de 0, 1, 2, 3, 4 y 5.
�Qu� ocurre al tratar de calcular el factorial de 14?
�Podr�a calcularse el factorial de 14 con una versi�n iterativa?
�C�mo se podr�a modificar la funci�n para poder calcular
el factorial de n�meros naturales mayores o iguales a 14?
Para realizar este ejercicio se sugiere usar la librer�a climits de C++
para imprimir por pantalla el valor m�ximo que puede asign�rsele a un
n�mero natural largo. Para ello, debe imprimirse por pantalla la constante
ULONG_MAX de dicha librer�a.

2. Recursividad de n�meros blancos

3. Recursividad en el tri�ngulo de Pascal
Escribir una funci�n recursiva Pascal(i,j) que calcule el
elemento i, j del tri�ngulo de Pascal, que sigue el
siguiente patr�n:

4. Recursividad del pal�ndromo
Escribir una funci�n recursiva Palindromo(c,i,j) que determine si la subcadena
contenida entre las posiciones i y j de la cadena c es un pal�ndromo.

RECURSI�N MUTUA
5	Escribir dos funciones mutuamente recursivas para calcular suma de los n primeros t�rminos de la serie
	alternada: 1 - 1/2 + 1/3 - 1/4 + 1/5 � � � - 1/2i + 1/2i+1 � � �
	Sugerencia: Escribir una funci�n Pares(i) que calcule la suma hasta el t�rmino i (i par) y otra funci�n
	Impar(i) que calcule la suma hasta el t�rmino i (i impar). Estas funciones deben llamarse una a la otra,
	hasta que se haya completado la suma de los n primeros t�rminos. Para sumar los n primeros t�rminos,
	escribir una funci�n SumaSerie(n), que llamar� a Par(n) o Impar(n) dependiendo de la paridad de n.

RECURSI�N NO PRIMITIVA
6	La funci�n de Ackerman se define para dos valores naturales dados m y n como sigue:
		Ackerman(0, n) = n + 1
		Ackerman(m, 0) = Ackerman(m - 1, 1)
		Ackerman(m, n) = Ackerman(m - 1, Ackerman(m, n - 1))
	Se trata de un ejemplo muy conocido de funci�n recursiva no primitiva (la funci�n aparece como argumento
	de s� misma). Escribir una funci�n recursiva para calcular la funci�n de Ackerman. Comprobar su
	funcionamiento calculando los siguientes valores: Ackerman(1,1)= 3, Ackerman(2,1)= 5, Ackerman(3,3)= 61,
	Ackerman(3,5)= 253. �Qu� ocurre al intentar calcular Ackerman(5,1)?

7	Escribe un algoritmo recursivo que ordene un array de la siguiente forma:
	Sea k el �ndice del elemento mitad del array.
	Ordena los elementos hasta a[k], incluy�ndolo.
	Ordena los elementos siguientes.
	Mezcla los dos subarrays en un �nico array ordenado.
	Este m�todo de clasificaci�n interna se denomina ordenaci�n por mezcla, o Mergesort.
