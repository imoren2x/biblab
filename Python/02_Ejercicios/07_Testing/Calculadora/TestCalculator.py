#-------------------------------------------------------------------------------
# Name:        TestCalculator
# Purpose:
#
# Author:      pbp
#
# Created:     19/09/2013
# Copyright:   (c) pbp 2013
# Licence:     <your licence>
#-------------------------------------------------------------------------------

from .fwTestCase import *
import calculadora
import unittest


class TestProducto(fwTestCase):
    def setUp(self):
        #funcion Setup del framework
        fwTestCase.setUp(self)
        print("TestProducto ** Preambulo ** Inicio")
        print("TestProducto ** Preambulo ** Preparacion")
        #Preparar el DUT
        print("TestProducto ** Preambulo ** Configuracion del DUT")
        self.calcDUT = calculadora.Calculadora()
        #Preparar los estimulos
        print("TestProducto ** Preambulo ** Configuracion de los estimulos")
        self.est1 = 3
        self.est2 = 4
        #Preparar el valor esperado
        print("TestProducto ** Preambulo ** Configuracion del valor esperado")
        self.valorEsp = self.est1 * self.est2
        print("TestProducto ** Preambulo ** Fin")

    def test_main(self):
        fwTestCase.test_main(self)
        print("TestProducto ** Test Main ** Inicio")
        print("TestProducto ** Test Main ** Ejecucion de la operacion")
        self.calcDUT.producto(self.est1, self.est2)
        print("TestProducto ** Test Main ** Comprobacion")
        self.assertEqual(self.calcDUT.getRes(), self.valorEsp)
        print("TestProducto ** Test Main ** Fin")

    def tearDown(self):
        fwTestCase.tearDown(self)
        print("TestProducto ** Postambulo ** Inicio")
        print("TestProducto ** Postambulo ** Fin")


class TestSuma(fwTestCase):
    def setUp(self):
        fwTestCase.setUp(self)
        print("TestSuma ** Preambulo ** Inicio")
        #Preparacion del test case
        print("TestSuma ** Preambulo ** Preparacion")
        #Configuracion del DUT
        print("TestSuma ** Preambulo ** Configuracion del DUT")
        self.calcDUT = calculadora.Calculadora()
        #Configuracion de los estimulos#
        print("TestSuma ** Preambulo ** Configuracion de los estimulos")
        self.estimulo1 = 1
        self.estimulo2 = 2
        #Configuracion del valor esperado#
        print("TestSuma ** Preambulo ** Configuracion del valor esperado")
        self.valorEsp = self.estimulo1 + self.estimulo2
        #self.valorEsp = self.estimulo1 - self.estimulo2
        print("Calculadora instanciada")
        print("TestSuma ** Preambulo ** Fin")

    def test_main(self):
        fwTestCase.test_main(self)
        print("TestSuma ** Test Main ** Inicio")
        print("TestSuma ** Test Main ** Ejecucion de la operacion")
        self.calcDUT.suma(self.estimulo1, self.estimulo2)
        print("TestSuma ** Test Main ** Comprobacion")
        self.assertEqual(self.valorEsp, self.calcDUT.getRes())
        print("TestSuma ** Test Main ** Fin")

    def tearDown(self):
        fwTestCase.tearDown(self)
        print("TestSuma ** Postambulo ** Inicio")
        print("TestSuma ** Postambulo ** Fin")


class TestResta(fwTestCase):
    def setUp(self):
        fwTestCase.setUp(self)
        print("TestSuma ** Preambulo ** Inicio")
        #Preparacion del test case
        print("TestSuma ** Preambulo ** Preparacion")
        #Configuracion del DUT
        print("TestSuma ** Preambulo ** Configuracion del DUT")
        self.calcDUT = Calculadora.Calculadora()
        #Configuracion de los estimulos#
        print("TestSuma ** Preambulo ** Configuracion de los estimulos")
        self.estimulo1 = 3
        self.estimulo2 = 2
        #Configuracion del valor esperado#
        print("TestSuma ** Preambulo ** Configuracion del valor esperado")
        self.valorEsp = self.estimulo1 - self.estimulo2
        print("Calculadora instanciada")
        print("TestSuma ** Preambulo ** Fin")

    def test_main(self):
        fwTestCase.test_main(self)
        print("TestSuma ** Test Main ** Inicio")
        print("TestSuma ** Test Main ** Ejecucion de la operacion")
        self.calcDUT.resta(self.estimulo1, self.estimulo2)
        print("TestSuma ** Test Main ** Comprobacion")
        self.assertEqual(self.valorEsp, self.calcDUT.getRes())
        print("TestSuma ** Test Main ** Fin")

    def tearDown(self):
        fwTestCase.tearDown(self)
        print("TestSuma ** Postambulo ** Inicio")
        print("TestSuma ** Postambulo ** Fin")


def main():
    #suite = unittest.TestLoader().loadTestsFromTestCase(TestSuma)
    #suite = unittest.TestLoader().loadTestsFromTestCase(TestProducto)
    #suite..loadTestsFromTestCase(TestResta)
    #suite = unittest.TestLoader().loadTestsFromModule(TestCalculator())
    suite = unittest.TestSuite()
    suite.addTest(TestProducto("test_main"))
    suite.addTest(TestResta("test_main"))
    suite.addTest(TestSuma("test_main"))
    unittest.TextTestRunner(verbosity=2).run(suite)

if __name__ == '__main__':
    main()
