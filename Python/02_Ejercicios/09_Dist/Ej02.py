
#Script principal ejemplo y m�dulo de apoyo apoyo.py.
from distutils.core import setup

setup(name="Aplicacion de ejemplo",
      version="0.1",
      description="Ejemplo del funcionamiento de distutils",
      author="Raul Gonzalez",
      author_email="zootropo en gmail",
      url="http://mundogeek.net/tutorial-python/",
      license="GPL",
      scripts=["ejemplo.py"],
      py_modules=["apoyo"])
