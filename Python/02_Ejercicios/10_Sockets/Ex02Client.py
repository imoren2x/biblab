import socket


print "Tutorial 53: socket cliente"

host = "localhost"
port = 7777

socket1 = socket.socket()
socket1.connect((host, port))

oracion = raw_input("Ingrese una oracion: ")
socket1.send(oracion)

numero = socket1.recv(1024)

print "La oracion: %s" %(oracion)
print "N caracteres: %s" %(numero)

socket1.close()
