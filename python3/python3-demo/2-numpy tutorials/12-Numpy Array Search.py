# !/usr/bin/env python
# -*- coding: utf-8 -*-

"""
@Project : asc-project-learning_python      
@File    : 12-Numpy Array Search.py
@Author  : Billy Sheng 
@Contact : shengdl999links@gmail.com  
@Date    : 2020/10/9 9:59 下午
@Version  : 1.0.0
@License : Apache License 2.0
@Desc    : None
"""


'''
Searching Arrays
You can search an array for a certain value, and return the indexes that get a match.

To search an array, use the where() method.
'''

import numpy as np

# Find the indexes where the value is 4:

arr = np.array([1, 2, 3, 4, 5, 4, 4])
x = np.where(arr == 4)
print(x)

# The example above will return a tuple: (array([3, 5, 6],)
#
# Which means that the value 4 is present at index 3, 5, and 6.

# Find the indexes where the values are even:
arr = np.array([1, 2, 3, 4, 5, 6, 7, 8])
x = np.where(arr % 2 == 0)
print(x)

# Find the indexes where the values are odd:
arr = np.array([1, 2, 3, 4, 5, 6, 7, 8])
x = np.where(arr % 2 == 1)
print(x)

'''
Search Sorted
There is a method called `searchsorted()` which performs a binary search in the array, 
and returns the index where the specified value would be inserted to maintain the search order.

The `searchsorted()` method is assumed to be used on sorted arrays.
'''

# Find the indexes where the value 7 should be inserted:

arr = np.array([6, 7, 8, 9])
x = np.searchsorted(arr, 7)
print(x)

# Example explained: The number 7 should be inserted on index 1 to remain the sort order.
#
# The method starts the search from the left and returns the first index
# where the number 7 is no longer larger than the next value.


'''
Search From the Right Side
By default the left most index is returned, but we can give side='right' to return the right most index instead.
'''

# Find the indexes where the value 7 should be inserted, starting from the right:
arr = np.array([6, 7, 8, 9])
x = np.searchsorted(arr, 7, side='right')
print(x)

'''
Example explained: The number 7 should be inserted on index 2 to remain the sort order.

The method starts the search from the right and 
returns the first index where the number 7 is no longer less than the next value.
'''

'''
Multiple Values
To search for more than one value, use an array with the specified values.
'''

# Find the indexes where the values 2, 4, and 6 should be inserted:
arr = np.array([1, 3, 5, 7])
x = np.searchsorted(arr, [2, 4, 6])
print(x)

# The return value is an array: [1 2 3] containing the three indexes where 2, 4, 6 would be
# inserted in the original array to maintain the order.




