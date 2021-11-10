# !/usr/bin/env python
# -*- coding: utf-8 -*-

"""
@Project : asc-project-learning_python      
@File    : 04-Numpy Array Slicing.py
@Author  : Daolin Sheng 
@Contact : shengdl999links@gmail.com  
@Date    : 2020/10/9 10:53 上午
@Version  : 1.0.0
@License : Apache License 2.0
@Desc    : None
"""

import numpy as np

'''
Slicing arrays
Slicing in python means taking elements from one given index to another given index.

We pass slice instead of index like this: [start:end].

We can also define the step, like this: [start:end:step].

If we don't pass start its considered 0

If we don't pass end its considered length of array in that dimension

If we don't pass step its considered 1
'''

# Slice elements from index 1 to index 5 from the following array


arr = np.array([1, 2, 3, 4, 5, 6, 7])
print(arr[1:5])
# Note: The result includes the start index, but excludes the end index.

# Slice elements from index 4 to the end of the array:
print(arr[4:])

# Slice elements from the beginning to index 4 (not included):
print(arr[:4])

'''
Negative Slicing
Use the minus operator to refer to an index from the end:
'''

# Slice from the index 3 from the end to index 1 from the end:
print(arr[-3:-1])

'''
STEP
Use the step value to determine the step of the slicing:
'''

# Return every other element from index 1 to index 5:
print(arr[1:5:2])

# Return every other element from the entire array:
print(arr[::2])

'''
Slicing 2-D Arrays
'''

# From the second element, slice elements from index 1 to index 4 (not included):

arr = np.array([[1, 2, 3, 4, 5], [6, 7, 8, 9, 10]])
print(arr[1, 1:4])
# Note: Remember that second element has index 1.

# From both elements, return index 2:
print(arr[0:2, 2])

# From both elements, slice index 1 to index 4 (not included), this will return a 2-D array:

print(arr[0:2, 1:4])


