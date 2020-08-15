#!/usr/bin/python
# -*- coding: latin-1 -*-
"""
"""

import os
import sys
from Log import Log

def main():
  """
  """
  myLog = Log.get_instance().get_logger("DUT")
  myOtroLog = Log.get_instance().get_logger("Tester")

  myLog.info("Hola, Tester")
  myOtroLog.info("Hola, DUT")


if __name__ == "__main__":
  """
  """
  sys.exit( main() )