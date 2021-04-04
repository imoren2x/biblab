#!/usr/bin/python
# -*- coding: utf-8 -*-

"""
"""

import os
import sys
import logging.handlers

DEFAULT_FORMATTER = "%(asctime)-15s %(name)-7s %(levelname)-7s %(message)s"
DEFAULT_LOGGING_FOLDER = ".log"

def getLogFile(filename):
    """
    """
    destination_path = os.path.join(os.path.dirname(os.path.realpath(__file__)), DEFAULT_LOGGING_FOLDER)

    try:
        if not os.path.exists(destination_path):
            os.makedirs(destination_path)
    except OSError as e:
        print(str(e))
        return os.path.join(os.getcwd(), filename)

    return os.path.join(destination_path, filename)


def getLocalLogger(logger_name, filename):
    """
    """
    logger = logging.getLogger(logger_name)
    logger.setLevel(logging.DEBUG)
    # Console handler
    console_handler = logging.StreamHandler(sys.stdout)
    # File handler
    rot_file_handler = logging.handlers.RotatingFileHandler(
        getLogFile(filename),
        # filename,
        mode = 'a',  # append
        maxBytes = 10*1024**2,  # 10 MiB
        backupCount = 2
    )
    # formatter
    formatter = logging.Formatter(DEFAULT_FORMATTER)
    # Set the formatter in the handlers
    console_handler.setFormatter(formatter)
    rot_file_handler.setFormatter(formatter)
    # Add the handlers to the logger
    logger.addHandler(console_handler)
    logger.addHandler(rot_file_handler)

    return logger


def main():
    """
    """
    myLog = getLocalLogger("DUT", "logueo.log")

    myLog.info("Hola, Tester")


if __name__ == "__main__":
    """
    """
    sys.exit( main() )
