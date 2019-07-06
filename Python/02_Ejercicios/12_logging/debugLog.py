#!/usr/bin/python
# -*- coding: latin-1 -*-
"""
"""

import os
import sys
import datetime


class debugLogger(object):
    """
    """
    DEFAULT_FORMATTER = "%(asctime)s %(name)-15s %(level_name)-7s %(message)s"
    DEFAULT_DATETIME = "%Y-%m-%d %H:%H:%S.%f"

    def __init__(self, logger_name, file_name):
        """
        Constructor.
        """
        self.logger_name = logger_name
        self.enable = None
        self.port = None
        self.file_name = file_name
        self.file = file(self.file_name, 'a') if file_name \
            else None
        self.formatter = self.DEFAULT_FORMATTER
        self.time_formatter = self.DEFAULT_DATETIME

    def __close__(self):
        self.file.close()

    def _log(self, level, msg):
        formatted_msg = self.formatter \
            % {'asctime': datetime.datetime.now().strftime(self.time_formatter),
            'name': self.logger_name,
            'level_name': level,
            'message': msg,}

        print(formatted_msg)

        if self.file is not None:
            self.file.write("%s\n" % formatted_msg)

    def debug(self, msg):
        return self._log('DEBUG', msg)

    def info(self, msg):
        return self._log('INFO', msg)

    def warning(self, msg):
        return self._log('WARNING', msg)

    def error(self, msg):
        return self._log('ERROR', msg)

    def critical(self, msg):
        return self._log('CRITICAL', msg)


if __name__ == "__main__":
    """
    """
    sys.exit( main() )