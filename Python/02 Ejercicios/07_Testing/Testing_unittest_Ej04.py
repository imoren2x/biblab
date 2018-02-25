#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
@title Ejemplo sencillo de unittest.
"""

import unittest


def cuadrado(num):
    """Calcula el cuadrado de un numero."""
    return num ** 2


class TestCaseConFixture(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        """
        Test case Class preamble.
        Executed before anything else, only once.
        """
        print("### Test case Class preamble ###")
        unittest.TestCase.setUpClass()
    #END setUpClass

    def setUp(self):
        """
        Test case preamble.
        Executed before any test case.
        """
        print("\n")
        print("# TestCase setUp begin #")
        self.lista = [0, 1, 2, 3]
        unittest.TestCase.setUp(self)
        print("# TestCase setUp end #")
    #END setUp

    def testPass(self):
        print("# Test Pass Begin #")
        print("Patron de entrada: %s" %( self.lista ) )
        print("Preparando de salida del sistema. " )
        r = [cuadrado(n) for n in self.lista]
        print("Salida del sistema: %s" %(r))
        print("Preparando de salida del sistema. " )
        lout = [0, 1, 4, 9]
        print("Patron de salida: %s" %( lout ) )
        self.assertEqual(r, lout, "Error en cuadrado.")
        print("# Test Pass End #")
    #END testPass

    def testFail(self):
        print("# Test Fail Begin #")
        raise AssertionError("Intentionally-created Assertion error.")
        #r = [cuadrado(n) for n in self.lista]
        #self.assertEqual(r, [0, 1, 4, 9], "Error en cuadrado.")
        print("# Test Fail End #")
    #END testFail

    def tearDown(self):
        print("# Testcase tearDown begin #")
        del self.lista
        unittest.TestCase.tearDown(self)
        print("# Testcase tearDown end #")
    #END tearDown

    @classmethod
    def tearDownClass(cls):
        print("### Test case class postamble ###")
        unittest.TestCase.tearDownClass()
    #END tearDownClass

#END class TestCaseConFixture

if __name__ == "__main__":
        #unittest.main()
        #Instanciacion de la test suite y ejecucion#
        suite = unittest.TestLoader().loadTestsFromTestCase(TestCaseConFixture)
        unittest.TextTestRunner(verbosity=2).run(suite)
