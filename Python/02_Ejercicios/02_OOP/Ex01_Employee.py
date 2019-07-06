#!/usr/bin/python
#-*- coding: latin-1 -*-

import os
import sys
import time

"""
"""


class Employee:
	"""
	Common base class for all employees
	"""
	#Class variable, number of Employees
	empCount = 0

	def __init__(self, name, salary):
		"""
		Constructor
		"""
		#Assign name
		self.name 	= name
		#Assign salary
		self.salary = salary
		
		Employee.empCount += 1
	### END __init__ ###

	def displayCount(self):
		"""
		"""
		print "Total Employees: %d" % Employee.empCount

	def displayEmployee(self):
		print "Name : ", self.name,  ", Salary: ", self.salary
### END Employee ###

if __name__ == '__main__':
	#
	#This would create first object of Employee class
	emp1 = Employee("Zara", 2000)
	#This would create second object of Employee class
	emp2 = Employee("Manni", 5000)

	#Print Employee count
	emp1.displayCount()

	print "Number of employees: %s " % str(Employee.empCount)
### END main ###
