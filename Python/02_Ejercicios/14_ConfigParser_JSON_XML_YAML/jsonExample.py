#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
"""

import os
import json

FILENAME = ".%s%s" % (os.sep, "JsonOutputFile.json")


def __read_json(fileName):
    print("\nRead the saved JSON file.")
    inputDict = json.load(file(fileName))
    print("JSON file: %s " % inputDict)
    print("Name: %s " % inputDict["Name"])


def __write_json(fileName):
    print("Create Python dictionary for the JSON.")
    jsonDict = dict({})
    jsonDict["Name"] = "Troncho"
    jsonDict["Surname"] = "Mocho"
    jsonDict["Address"] = ["Calle", "Ancha", "del doble"]
    jsonDict["Address2"] = {"calle": "Ancha", "Direccion": "Chemin de Chapitre"}

    print("Dump Python dictionary into the file")
    fileName = FILENAME
    with open(fileName, "w") as vFile:
        json.dump(jsonDict, vFile, indent = 4, sort_keys = True)


def main():
    """
    """
    fileName = FILENAME
    __read_json(fileName)

    __write_json(fileName)


if __name__ == "__main__":
    """
    """
    main()
