"""
Logger
"""
#pylint: disable=E1101
import os
import logging


class pysysfwFileHandler(logging.FileHandler):
    """
    File Logger Pysysfw
    """

    def __init__(self, filename, mode='a'):
        """
        Constructor
        """
        #logname, ext = os.path.splitext(filename)
        #logfile = os.path.join(logpath, logname + ext)
        logfile = filename

        logging.FileHandler.__init__(self, logfile, mode)
