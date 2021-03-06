# !/usr/bin/env python
# -*- coding: utf-8 -*-

"""
@Project : asc-project-learning_python      
@File    : 05-Numpy Data Types.py
@Author  : Daolin Sheng 
@Contact : shengdl999links@gmail.com  
@Date    : 2020/10/9 11:14 上午
@Version  : 1.0.0
@License : Apache License 2.0
@Desc    : None
"""


'''
Data Types in Python
By default Python have these data types:

`strings` - used to represent text data, the text is given under quote marks. eg. "ABCD"
`integer` - used to represent integer numbers. eg. -1, -2, -3
`float`   - used to represent real numbers. eg. 1.2, 42.42
`boolean` - used to represent True or False.
`complex` - used to represent a number in complex plain. eg. 1.0 + 2.0j, 1.5 + 2.5j
'''


'''
Data Types in NumPy
NumPy has some extra data types, and refer to data types with one character, like i for integers, u for unsigned integers etc.

Below is a list of all data types in NumPy and the characters used to represent them.

i - integer
b - boolean
u - unsigned integer
f - float
c - complex float
m - timedelta
M - datetime
O - object
S - string
U - unicode string
V - fixed chunk of memory for other type ( void )
'''


'''
Checking the Data Type of an Array
The NumPy array object has a property called `dtype` that returns the 数据类型 of the array:
'''

import numpy as np

# Get the 数据类型 of an array object:
arr = np.array([1, 2, 3, 4])
print(arr.dtype)

# Get the 数据类型 of an array containing strings:
arr = np.array(['apple', 'banana', 'cheery'])
print(arr.dtype)


'''
Creating Arrays With a Defined Data Type
We use the `array()` function to create arrays, this function can take an optional argument: 
`dtype` that allows us to define the expected 数据类型 of the array elements:
'''

# Create an array with 数据类型 string:

arr = np.array([1, 2, 3, 4], dtype='S')
print(arr)
print(arr.dtype)

# For `i`, `u`, `f`, `S` and `U` we can define size as well.

# Create an array with 数据类型 4 bytes integer:
arr = np.array([1, 2, 3, 4], dtype='i4')
print(arr)
print(arr.dtype)

'''
What if a Value Can Not Be Converted?
If a type is given in which elements can't be casted then NumPy will raise a ValueError.

** ValueError: In Python ValueError is raised when the type of passed argument to a function is unexpected/incorrect.
'''

# A non integer string like 'a' can not be converted to integer (will raise an error):
# arr = np.array(['a', '2', '3'], dtype='i')
# print(arr)


'''
Converting Data Type on Existing Arrays
The best way to change the 数据类型 of an existing array, is to make a copy of the array with the `astype()` method.

The `astype()` function creates a copy of the array, and allows you to specify the 数据类型 as a parameter.

The 数据类型 can be specified using a string, like 'f' for float, 'i' for integer etc. or you can use the 数据类型 directly like `float` for float and `int` for integer.
'''

# Change 数据类型 from float to integer by using 'i' as parameter value:
arr = np.array([1.1, 2.1, 3.1])
newarr = arr.astype('i')
print(newarr)
print(newarr.dtype)

# Change 数据类型 from float to integer by using `int` as parameter value:
arr = np.array([1.1, 2.1, 3.1])

newarr = arr.astype(int)

print(newarr)
print(newarr.dtype)

# Change 数据类型 from integer to boolean:
arr = np.array([1, 0, 3])

newarr = arr.astype(bool)

print(newarr)
print(newarr.dtype)