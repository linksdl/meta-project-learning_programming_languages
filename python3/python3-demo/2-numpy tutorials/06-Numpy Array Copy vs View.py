# !/usr/bin/env python
# -*- coding: utf-8 -*-

"""
@Project : asc-project-learning_python      
@File    : 06-Numpy Array Copy vs View.py
@Author  : Daolin Sheng 
@Contact : shengdl999links@gmail.com  
@Date    : 2020/10/9 4:40 下午
@Version  : 1.0.0
@License : Apache License 2.0
@Desc    : None
"""

'''
The Difference Between Copy and View
The main difference between a copy and a view of an array is that the copy is a new array, and the view is just a view of the original array.

The copy owns the data and any changes made to the copy will not affect original array, and any changes made to the original array will not affect the copy.

The view does not own the data and any changes made to the view will affect the original array, and any changes made to the original array will affect the view.
'''

import numpy as np

# *************
# copy()
# view()


# COPY

# Make a copy, change the original array, and display both arrays:

arr = np.array([1, 2, 3, 4, 5])
x = arr.copy()
arr[0] = 42

print(arr)
print(x)

# The copy SHOULD NOT be affected by the changes made to the original array.

# VIEW
# Make a view, change the original array, and display both arrays:

arr = np.array([1, 2, 3, 4, 5])
x = arr.view()
arr[0] = 42
print(arr)
print(x)

# he view SHOULD be affected by the changes made to the original array.

'''
Make Changes in the VIEW:
Make a view, change the view, and display both arrays:
'''
arr = np.array([1, 2, 3, 4, 5])
x = arr.view()
x[0] = 31

print(arr)
print(x)

# The original array SHOULD be affected by the changes made to the view.


'''
Check if Array Owns it's Data
As mentioned above, copies owns the data, and views does not own the data, but how can we check this?

Every NumPy array has the attribute `base` that returns None if the array owns the data.

Otherwise, the base  attribute refers to the original object.
'''

arr = np.array([1, 2, 3, 4, 5])
x = arr.copy()
y = arr.view()

print(x.base)
print(y.base)