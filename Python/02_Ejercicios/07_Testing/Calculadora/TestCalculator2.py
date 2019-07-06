#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      pbp
#
# Created:     19/09/2013
# Copyright:   (c) pbp 2013
# Licence:     <your licence>
#-------------------------------------------------------------------------------

from fwTestCase import *
import calculadora
import unittest


class TestCalculadora(fwTestCase):
    def setUp(self):
        #funcion Setup del framework
        print("\n")
        fwTestCase.setUp(self)
        print("TestCalculadora ** Preambulo ** Inicio")
        print("TestCalculadora ** Preambulo ** Preparacion")
        #Preparar el DUT
        print("TestCalculadora ** Preambulo ** Configuracion del DUT")
        self.calcDUT = calculadora.Calculadora()
        #Preparar los estimulos
        print("TestCalculadora ** Preambulo ** Configuracion de los estimulos")
        self.est1 = 3
        self.est2 = 4
        print("TestCalculadora ** Preambulo ** Fin")

    def test_suma(self):
        fwTestCase.test_main(self)
        print("TestSuma ** Test Main ** Inicio")
        print("TestSuma ** Test Main ** Ejecucion de la operacion")
        self.calcDUT.suma(self.est1, self.est2)
        #Configuracion del valor esperado#
        print("TestSuma ** Test Main ** Configuracion del valor esperado")
        self.valorEsp = self.est1 + self.est2
        print("TestSuma ** Test Main ** Comprobacion")
        self.assertEqual(self.valorEsp, self.calcDUT.getRes())
        print("TestSuma ** Test Main ** Fin")

    def test_resta(self):
        fwTestCase.test_main(self)
        print("TestResta ** Test Main ** Inicio")
        print("TestResta ** Test Main ** Ejecucion de la operacion")
        self.calcDUT.resta(self.est1, self.est2)
        #Configuracion del valor esperado#
        print("TestResta ** Test Main ** Configuracion del valor esperado")
        self.valorEsp = self.est1 - self.est2
        print("TestResta ** Test Main ** Comprobacion")
        self.assertEqual(self.valorEsp, self.calcDUT.getRes())
        print("TestResta ** Test Main ** Fin")

    def test_producto(self):
        fwTestCase.test_main(self)
        print("TestProducto ** Test Main ** Inicio")
        print("TestProducto ** Test Main ** Ejecucion de la operacion")
        self.calcDUT.producto(self.est1, self.est2)
        #Preparar el valor esperado
        print("TestProducto ** Test Main ** Configuracion del valor esperado")
        self.valorEsp = self.est1 * self.est2
        print("TestProducto ** Test Main ** Comprobacion")
        self.assertEqual(self.calcDUT.getRes(), self.valorEsp)
        print("TestProducto ** Test Main ** Fin")

    def test_division(self):
        fwTestCase.test_main(self)
        print("TestDivision ** Test Main ** Inicio")
        print("TestDivision ** Test Main ** Ejecucion de la operacion")
        self.calcDUT.div(self.est1, self.est2)
        print("TestDivision ** Test Main ** Configuracion del valor esperado")
        self.valorEsp = self.est1 / self.est2
        print("TestDivision ** Test Main ** Comprobacion")
        self.assertEqual(self.valorEsp, self.calcDUT.getRes())
        print("RestDivision ** Test Main ** Fin")

    def test_divisionEntera(self):
        fwTestCase.test_main(self)
        print("TestDivisionEntera ** Test Main ** Inicio")
        print("TestDivisionEntera ** Test Main ** Ejecucion de la operacion")
        self.calcDUT.divmodo(self.est1, self.est2)
        print("TestDivisionEntera ** Test Main ** Configuracion del valor esperado")
        self.valorEsp = self.est1 % self.est2
        print("TestDivisionEntera ** Test Main ** Comprobacion")
        self.assertEqual(self.valorEsp, self.calcDUT.getRes())
        print("TestDivisionEntera ** Test Main ** Fin")

    def test_cuadrado(self):
        fwTestCase.test_main(self)
        print("TestCuadrado ** Test Main ** Inicio")
        print("TestCuadrado ** Test Main ** Ejecucion de la operacion")
        self.calcDUT.cuadrado(self.est1)
        print("TestCuadrado ** Test Main ** Configuracion del valor esperado")
        self.valorEsp = self.est1 ** 2
        print("TestCuadrado ** Test Main ** Comprobacion")
        self.assertEqual(self.valorEsp, self.calcDUT.getRes())
        print("TestCuadrado ** Test Main ** Fin")

    def test_cubo(self):
        fwTestCase.test_main(self)
        print("TestCubo ** Test Main ** Inicio")
        print("TestCubo ** Test Main ** Ejecucion de la operacion")
        self.calcDUT.cubo(self.est1)
        print("TestCubo ** Test Main ** Configuracion del valor esperado")
        self.valorEsp = self.est1 ** 3
        print("TestCubo ** Test Main ** Comprobacion")
        self.assertEqual(self.valorEsp, self.calcDUT.getRes())
        print("TestCubo ** Test Main ** Fin")

    def test_potencia(self):
        fwTestCase.test_main(self)
        print("TestPotencia ** Test Main ** Inicio")
        print("TestPotencia ** Test Main ** Ejecucion de la operacion")
        self.calcDUT.potencia(self.est1, self.est2)
        print("TestPotencia ** Test Main ** Configuraci?n del valor esperado")
        self.valorEsp = 1
        for indice in range(1, self.est2 + 1):
            self.valorEsp *= self.est1
        print("TestPotencia ** Test Main ** Comprobacion")
        self.assertEqual(self.valorEsp, self.calcDUT.getRes())
        print("TestPotencia ** Test Main ** Fin")

    def tearDown(self):
        fwTestCase.tearDown(self)
        print("TestCalculadora ** Postambulo ** Inicio")
        print("TestCalculadora ** Postambulo ** Fin")


def main():
    #suite = unittest.TestLoader().loadTestsFromTestCase(TestSuma)
    #suite = unittest.TestLoader().loadTestsFromTestCase(TestProducto)
    #suite..loadTestsFromTestCase(TestResta)
    suite = unittest.TestSuite()
    suite.addTest(TestCalculadora("test_resta"))
    suite.addTest(TestCalculadora("test_suma"))
    suite.addTest(TestCalculadora("test_producto"))
    suite.addTest(TestCalculadora("test_division"))
    suite.addTest(TestCalculadora("test_divisionEntera"))
    suite.addTest(TestCalculadora("test_cuadrado"))
    suite.addTest(TestCalculadora("test_cubo"))
    suite.addTest(TestCalculadora("test_producto"))
    unittest.TextTestRunner(verbosity=2).run(suite)


if __name__ == '__main__':
    main()
