class Persona:
"""Modela una persona."""
def __init__(self, nombre, edad):
	"""Inicializador de la clase `Persona`.
		:Parameters:
			- `nombre`: Nombre de la persona.
			- `edad`: Edad de la persona.
	"""
	self.nombre = nombre
	self.edad = edad
	self.mostrar_nombre()