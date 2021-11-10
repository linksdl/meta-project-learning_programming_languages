# !/usr/bin/env python
# -*- coding: utf-8 -*-

"""
@Project : asc-project-learning_python      
@File    : 08-Numpy Array Reshape.py
@Author  : Daolin Sheng 
@Contact : shengdl999links@gmail.com  
@Date    : 2020/10/9 5:55 下午
@Version  : 1.0.0
@License : Apache License 2.0
@Desc    : None
"""

# ****
# reshape()


'''
Reshaping arrays
Reshaping means changing the shape of an array.

The shape of an array is the number of elements in each dimension.

By reshaping we can add or remove dimensions or change number of elements in each dimension.
'''

# Reshape From 1-D to 2-D

'''
Convert the following 1-D array with 12 elements into a 2-D array.

The outermost dimension will have 4 arrays, each with 3 elements:
'''

import numpy as  np

arr = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12])
newarr = arr.reshape(4, 3)
# newarr = arr.reshape((4, 3))
print(newarr)

'''
Reshape From 1-D to 3-D
'''

'''
Convert the following 1-D array with 12 elements into a 3-D array.

The outermost dimension will have 2 arrays that contains 3 arrays, each with 2 elements:
'''

newarr = arr.reshape((2, 3, 2))
# newarr = arr.reshape(2, 3, 2)
print(newarr)

'''
Can We Reshape Into any Shape?
Yes, as long as the elements required for reshaping are equal in both shapes.

We can reshape an 8 elements 1D array into 4 elements in 2 rows 2D array 
but we cannot reshape it into a 3 elements 3 rows 2D array as that would require 3x3 = 9 elements.
'''

# Try converting 1D array with 8 elements to a 2D array with 3 elements in each dimension (will raise an error):
# arr = np.array([1, 2, 3, 4, 5, 6, 7, 8])
# newarr = arr.reshape(3, 3)
# print(newarr)

'''
Returns Copy or View?
'''

# Check if the returned array is a copy or a view:
arr = np.array([1, 2, 3, 4, 5, 6, 7, 8])
print(arr.reshape(2, 4).base)

# The example above returns the original array, so it is a view.

'''
Unknown Dimension
You are allowed to have one "unknown" dimension.

Meaning that you do not have to specify an exact number for one of the dimensions in the reshape method.

Pass -1 as the value, and NumPy will calculate this number for you.
'''

# Convert 1D array with 8 elements to 3D array with 2x2 elements:
arr = np.array([1, 2, 3, 4, 5, 6, 7, 8])
newarr = arr.reshape(2, 2, -1)
print(newarr)
print(newarr.shape)

# Note: We can not pass -1 to more than one dimension.

'''
Flattening the arrays
Flattening array means converting a multidimensional array into a 1D array.

We can use `reshape(-1)` to do this.
'''

# Convert the array into a 1D array:

arr = np.array([[1, 2, 3], [4, 5, 6]])
newarr = arr.reshape(-1)
print(newarr)
print(newarr.shape)

'''
Note: There are a lot of functions for changing the shapes of arrays in numpy flatten, ravel 
and also for rearranging the elements rot90, flip, fliplr, flipud etc. 
These fall under Intermediate to Advanced section of numpy.
'''


