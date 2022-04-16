# !/usr/bin/env python
# -*- coding: utf-8 -*-

"""
@Project : asc-project-learning_python      
@File    : 13-Numpy Array Sort.py
@Author  : Billy Sheng 
@Contact : shengdl999links@gmail.com  
@Date    : 2020/10/9 10:15 下午
@Version  : 1.0.0
@License : Apache License 2.0
@Desc    : None
"""

'''
Sorting Arrays
Sorting means putting elements in an ordered sequence.

Ordered sequence is any sequence that has an order corresponding to elements, like numeric or alphabetical, ascending or descending.

The NumPy `ndarray` object has a function called `sort()`, that will sort a specified array.
'''

import numpy as np

# Sort the array:

arr = np.array([3, 2, 0, 1])
print(np.sort(arr))

# Note: This method returns a copy of the array, leaving the original array unchanged.

# You can also sort arrays of strings, or any other 数据类型:

# Sort the arry alphabetically:

arr = np.array(['banana', 'cherry', 'apple'])
print(np.sort(arr))

# Sort a boolean array:
arr = np.array([True, False, True])
print(np.sort(arr))

'''
Sorting a 2-D Array
If you use the sort() method on a 2-D array, both arrays will be sorted:
'''

# Sort a 2-D array:
arr = np.array([[3, 2, 4], [5, 0, 1]])
print(np.sort(arr))


