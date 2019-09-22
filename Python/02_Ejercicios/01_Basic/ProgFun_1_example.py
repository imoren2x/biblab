# -*- coding: latin-1 -*-
#!/usr/bin/python

import sys

def saludar_lt():
  print "Salutem"

def saludar(lang):
  def saludar_es():
    print "Hola, caracola"

  def saludar_en():
    print "Hello, dude"

  def saludar_fr():
    print "Bonjour, mon ami"

  #dictionary to select the desired function#
  lang_func = { "es": saludar_es, "en": saludar_en, \
    "fr":saludar_fr , "lt": saludar_lt }

  #return a function according the 'lang_func' dictionary
  #  and the 'lang' parameter as index of the dictionary#
  return lang_func[lang]

if __name__ == "__main__":
  if len(sys.argv) == 1:
    #Asignacion de la funcion
    f = saludar("lt")
    #Llamada a la funcion
    f()
  elif len(sys.argv) == 2:
    #Asignacion de la funcion
    f = saludar(sys.argv[1])
    #Llamada a la funcion
    f()

