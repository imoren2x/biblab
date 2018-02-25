#!/usr/bin/python
# -*- coding: latin-1 -*-

class minilog(object):

  def __init__(self, path, mode):
    """
    """
    self.path = path
    self.mode = mode
    self.activate = bool(False)
    #
    self.log = None
  #END __init__

  def activateLog(self):
    """
    """
    self.activate = True
    #
    self.log = open(self.path, self.mode)
  #END activate#

  def write(self, message):
    """
    """
    #
    if self.activate:
      self.log.write(message)
  #END write#

  def close(self):
    """
    """
    #
    if self.activate:
      self.log.close()
  #END close#

#END minilog


if __name__ == '__main__':
  log = minilog("hola.txt", "w")
  log.write("hola, caracola.\n")
  log.write("Adios, caracola.")


  logy = minilog("hey.txt", 'w')
  logy.activateLog()
  logy.write("hola, caracola.\n")
  logy.write("Adios, caracola.")
