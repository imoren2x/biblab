#!/usr/bin/python
# -*- coding: latin-1 -*-
"""
"""

import os
import sys
import time
#from lxml import etree
import xml.etree.ElementTree as ET

def main():
    """
    """
    movies = "movies.xml"
    movies_tree = ET.parse(movies)
    movies_tree_rt = movies_tree.getroot()

    # Get all movies:
    xpath_str = "./movie[@title]"
    movie_nodes = movies_tree_rt.findall(xpath_str)

    print movie_nodes
    if movie_nodes:
        for movie_node in movie_nodes:
            print movie_node.attrib["title"]

    #Get 'Enemy Benhind'
    xpath_str = "./movie[@title='Enemy Behind']"
    movie_nodes = movies_tree_rt.findall(xpath_str)
    print movie_nodes
    if movie_nodes:
        #Append new movie:
        ##movie_nodes.append(New_node)

        for movie_node in movie_nodes:
            print movie_node.attrib["title"]
            movie_node.set("note", "It's my favourite!")

    movies_tree.write(movies)
###End main ###


if __name__ == "__main__":
    """
    """
    sys.exit( main() )
