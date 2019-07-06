#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
@title Ejemplo sencillo de unittest.

"""


import unittest


class fwTestCase(unittest.TestCase):
    def setUp(self):
        unittest.TestCase.setUp(self)
        print("")
        print("*** FW Test Case Preamble begins ***")
        print("*** FW Test Case Preamble ends ***")

    def test_main(self):
        print("*** FW Test Case Main begins ***")
        print("*** FW Test Case Main ends ***")

    def tearDown(self):
        unittest.TestCase.tearDown(self)
        print("*** FW Test Case Postamble begins ***")
        print("*** FW Test Case Postamble ends ***")
#class fwTestCase ends#
