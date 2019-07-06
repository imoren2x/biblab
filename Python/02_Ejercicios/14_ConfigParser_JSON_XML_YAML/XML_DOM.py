#!/usr/bin/python

from xml.dom.minidom import parse
import xml.dom.minidom


def main():
    print("Open XML document using minidom parser")
    DOMTree = xml.dom.minidom.parse("xml_movies.xml")
    collection = DOMTree.documentElement
    if collection.hasAttribute("shelf"):
        print "Root element : %s" % collection.getAttribute("shelf")

    print("Get all the movies in the collection")
    movies = collection.getElementsByTagName("movie")

    print("Print detail of each movie.")
    for movie in movies:
        print "*****Movie*****"
        if movie.hasAttribute("title"):
            print "Title: %s" % movie.getAttribute("title")
        # Type
        type = movie.getElementsByTagName('type')[0]
        print "Type: %s" % type.childNodes[0].data
        # Format
        format = movie.getElementsByTagName('format')[0]
        print "Format: %s" % format.childNodes[0].data
        # Rating
        rating = movie.getElementsByTagName('rating')[0]
        print "Rating: %s" % rating.childNodes[0].data
        # Description
        description = movie.getElementsByTagName('description')[0]
        print "Description: %s" % description.childNodes[0].data


if __name__ == '__main__':
    main()
