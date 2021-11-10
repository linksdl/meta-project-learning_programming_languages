# !/usr/bin/env python
# -*- coding: utf-8 -*-

"""
@Project : asc-project-learning_python      
@File    : 05-Python Data Types.py
@Author  : Daolin Sheng 
@Contact : shengdl999links@gmail.com  
@Date    : 2020/10/8 9:25 下午
@Version  : 1.0.0
@License : Apache License 2.0
@Desc    : None
"""

"""
Python Data Types
Built-in Data Types

In programming, data type is an important concept.

Variables can store data of different types, and different types can do different things.

Python has the following data types built-in by default, in these categories:

Text Type      : str
Numeric Types  : int, float, complex
Sequence Types : list, tuple, range
Mapping Type   : dict
Set Types      : set, frozenset
Boolean Type   : bool
Binary Types   : bytes, bytearray, memoryview

"""

'''
Getting the Data Type
You can get the data type of any object by using the type() function:
'''

# You can get the data type of any object by using the type() function:
# Example, print the data type of the variable x:
x = 5
print(type(x))

'''
Setting the Data Type
In Python, the data type is set when you assign a value to a variable:
'''

# Example

# str
x = "Hello World"
print(x, type(x))

# int
x = 20
print(x, type(x))

# float
x = 20.5
print(x, type(x))

# complex
x = 1j
print(x, type(x))

# list
x = ["apple", "banana", "cherry"]
print(x, type(x))

# tuple
x = ("apple", "banana", "cherry")
print(x, type(x))

# range
x = range(6)
print(x, type(x))

# dict
x = {"name": "John", "age": 31}
print(x, type(x))

# set
x = {"apple", "banana", "cherry"}
print(x, type(x))

# frozenset
x = frozenset({"apple", "banana", "cherry"})
print(x, type(x))

# bool
x = True
print(x, type(x))

# bytes
x = b"Hello"
print(x, type(x))

# bytearray
x = bytearray(5)
print(x, type(x))

# memoryview
x = memoryview(bytes(5))
print(x, type(x))

'''
Setting the Specific Data Type
If you want to specify the data type, you can use the following constructor functions:
'''


# # Example
#
# # str
# x = str("Hello World")
#
# # int
# x = int(20)
#
# # float
# x = float(20.5)
#
# # complex
# x = complex(1j)
#
# # list
# x = list(("apple", "banana", "cherry"))
#
# # tuple
# x = tuple(("apple", "banana", "cherry"))
#
# # range
# x = range(6)
#
# # dict
# x = dict(name="John", age=36)
#
# # set
# x = set(("apple", "banana", "cherry"))
#
# # frozenset
# x = frozenset(("apple", "banana", "cherry"))
#
# # bool
# x = bool(5)
#
# # bytes
# x = bytes(5)
#
# # bytearray
# x = bytearray(5)
#
# # memoryview
# x = memoryview(bytes(5))