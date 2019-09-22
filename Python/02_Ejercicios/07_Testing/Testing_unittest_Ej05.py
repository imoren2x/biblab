#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
@title Ejemplo sencillo de unittest.

"""

import unittest


def cuadrado(num):
	"""Calcula el cuadrado de un numero."""
	return num ** 2


class EjemploFixture(unittest.TestCase):
	def setUp(self):
		print("Preparando contexto.")
		self.lista = [0, 1, 2, 3]
	def test(self):
		print("Ejecutando prueba")
		r = [cuadrado(n) for n in self.lista]
		self.assertEqual(r, [0, 1, 4, 9])
	def tearDown(self):
		print("Desconstruyendo contexto")
		del self.lista


if __name__ == "__main__":
	unittest.main()
