#!/usr/bin/python
# -*- coding: utf-8 -*-

"""
"""

# Paquete distutils.core (más antiguo)
from distutils.core import setup
# import py2exe
# Paquete setuptools, más reciente
from setuptools import setup
# ez_setup, incluye find_packages
from ez_setup import use_setuptools
# use_setuptools()
# from setuptools import setup, find_packages
# # Inside the setup function, use arg packages:
# packages = find_packages()

setup(name="Aplicacion de ejemplo",
    version="0.1",
    description="Ejemplo del funcionamiento de distutils",
    author="Raul Gonzalez",
    author_email="zootropo en gmail",
    url="http://mundogeek.net/tutorial-python/",
    license="GPL",
    scripts=["ejemplo.py"],
    py_modules=["apoyo"],
    packages=["gui", "bbdd"],
    options={"py2exe": {"bundle_files": 1}},
    zipfile=None
)

# References
# * PyLogAnalyser:
# https://sourceforge.net/p/pyloganalyser/code/HEAD/tree/main/setup.py
