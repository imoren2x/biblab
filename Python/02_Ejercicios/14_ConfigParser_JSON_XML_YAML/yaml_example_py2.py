#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
http://pyyaml.org/wiki/PyYAMLDocumentation
"""

import os
import yaml

FILENAME = ".%s%s" % (os.sep, "yaml_input.yml")


def main():
    """
    """
    yamlDict = yaml.load(file(FILENAME))
    print("YAML: %s" % yamlDict)
    return


if __name__ == "__main__":
    """
    """
    main()
