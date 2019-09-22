#!/usr/bin/python
#-*- coding: latin-1 -*-

import os
import sys
import time

"""
Accessing attributes
--------------------

 - getattr(obj, name[, default]) : to access the attribute of object.
 - hasattr(obj,name) : to check if an attribute exists or not.
 - setattr(obj,name,value) : to set an attribute.
	If attribute does not exist, then it would be created.
 - delattr(obj, name) : to delete an attribute.

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


def main():
	"""
	"""
	#This would create first object of Employee class
	emp1 = Employee("Zara", 2000)
	#This would create second object of Employee class
	emp2 = Employee("Manni", 5000)

	#Print Employee count
	emp1.displayCount()

	print "Number of employees: %s " % str(Employee.empCount)

	if not hasattr(emp1, 'salary'):
		raise Exception("Object has not attribute")
	#End IF#

	salary = getattr(emp1, 'salary')
	emp1.displayEmployee()
	if salary < 2500:
		setattr(emp1, 'salary', 3000)
		print("Yo quiero un salario de 3000 euros/mes")
	else:
		print("Ya tienes un buen salario")
	#END
	emp1.displayEmployee()
### END main ###


if __name__ == '__main__':
	#
	main()
### END main ###
