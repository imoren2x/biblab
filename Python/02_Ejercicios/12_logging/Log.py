#!/usr/bin/python
# -*- coding: latin-1 -*-
"""
"""

import os
import sys
import logging
import logging.config
from singleton import Singleton

@Singleton
class Log(object):
    """
    """

    def __init__(self):
        """
        """
        config_file = "logging.conf"
        logging.config.fileConfig(config_file)

    def get_logger(self, name):
        """
        Get logger with name
        """
        logger = logging.getLogger(name)
        return logger