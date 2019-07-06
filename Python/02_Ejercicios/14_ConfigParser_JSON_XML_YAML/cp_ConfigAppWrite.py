#!/usr/bin/python
# -*- coding: latin-1 -*-
"""
Programme that writes information in ConfigParser file.

http://docs.python.org/2/library/configparser.html
"""

import ConfigParser


def main():
    """
    """
    # Create object #
    cp = ConfigParser.ConfigParser()
    #
    print("First section")
    section_1 = "1st section"
    cp.add_section(section_1)
    option1 = "Name"
    value1  = "Troncho"
    cp.set(section_1, option1, value1)
    option2 = "Surname"
    value2  = "Mocho"
    cp.set(section_1, option2, value2)

    print("Second section")
    section_2 = "Second section"
    cp.add_section(section_2)
    option1 = "Name"
    value1  = "Fulano"
    cp.set(section_2, option1, value1)
    option2 = "Surname"
    value2  = "De tal"
    cp.set(section_2, option2, value2)

    # Writing our configuration file to 'example.cfg'
    with open('cp_ouput.conf', 'wb') as configfile:
        cp.write(configfile)


if __name__ == "__main__":
  """
  """
  main()