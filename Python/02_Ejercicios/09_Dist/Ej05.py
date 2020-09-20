find_packages()
Evita tener que listar los paquetes necesarios.
Ejemplo: ver parámetro packages
    from ez_setup import use_setuptools
        use_setuptools()
        from setuptools import setup, find_packages
        setup(name="Aplicacion de ejemplo",
        version="0.1",
        description="Ejemplo del funcionamiento de distutils",
        author="Raul Gonzalez",
        author_email="zootropo en gmail",
        url="http://mundogeek.net/tutorial-python/",
        license="GPL",
        scripts=["ejemplo.py"],
        packages = find_packages()
    )