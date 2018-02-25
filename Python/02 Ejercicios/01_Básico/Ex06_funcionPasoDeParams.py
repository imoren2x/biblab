#Los enteros son inmutables
x = 10
print("Antes de llamar a la funcion", x)
def funcion_1(x):
    x = 5

funcion_1(x)
print("Despues de llamar a la funcion", x)
#Esto no cambia el valor de x
 

#En cambio las listas son mutables
y = [1, 3, 5]
def funcion_2(y):
    y.append(7)
print("Antes de llamar a la funcion", y)
funcion_2(y)
print("Despues de llamar a la funcion", y)
