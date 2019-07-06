"""
Singleton class
"""


class Singleton:
    """
    Implementation of singleton
    """
    _instance = None

    def __init__(self, single_class):
        self._singleton = single_class

    def get_instance(self):
        """
        Get the instance of the singleton
        """
        if self._instance is None:
            self._instance = self._singleton()

        return self._instance

    def __call__(self):
        raise TypeError('Use get_instance() to get the instance of the singleton.')

    def __instancecheck__(self, inst):
        return isinstance(inst, self._singleton)
