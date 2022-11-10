#!/usr/bin/python
# -*- coding: utf-8 -*-

"""
Python 3.0
http://pyyaml.org/wiki/PyYAMLDocumentation
"""

import os
import yaml

from yaml.loader import SafeLoader

FILENAME = ".%s%s" % (os.sep, "yaml_input.yml")


def main():
    """
    """
    # Read the YAML file
    with open(FILENAME, 'r') as file_d:
        yaml_d = yaml.load(file_d, Loader=SafeLoader)

    print("YAML: %s" % yaml_d)

    # Write the output file
    #  sort_keys True by default
    #  default_flow_style True by default
    with open('yaml_output.yml', 'w') as output_d:
        data = yaml.dump(
            yaml_d,
            output_d,
            indent=4,
            sort_keys=False,
            default_flow_style=False
        )

    print("Output data: %s" % data)

    return


if __name__ == "__main__":
    """
    """
    main()

"""
References:
* https://pynative.com/python-yaml/
* https://pyyaml.org/wiki/PyYAMLDocumentation
* https://realpython.com/python-yaml/
"""
