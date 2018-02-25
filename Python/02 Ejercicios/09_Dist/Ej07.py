Parámetros en setup.py: bundle_files
from distutils.core import setup
	import py2exe
	setup(name="Aplicacion de ejemplo",
	version="0.1",
	description="Ejemplo del funcionamiento de distutils",
	author="Raul Gonzalez",
	author_email="zootropo en gmail",
	url="http://mundogeek.net/tutorial-python/",
	license="GPL",
	scripts=["ejemplo.py"],
	console=["ejemplo.py"],
	options={"py2exe": {"bundle_files": 1}}
)