# !/usr/bin/env python
# -*- coding: utf-8 -*-

"""
@Project : asc-project-learning_python      
@File    : 10-Numpy Array Joining.py
@Author  : Billy Sheng 
@Contact : shengdl999links@gmail.com  
@Date    : 2020/10/9 9:24 下午
@Version  : 1.0.0
@License : Apache License 2.0
@Desc    : None
"""

'''
Joining NumPy Arrays
Joining means putting contents of two or more arrays in a single array.

In SQL we join tables based on a key, whereas in NumPy we join arrays by axes.

We pass a sequence of arrays that we want to join to the concatenate() function,
along with the axis. If axis is not explicitly passed, it is taken as 0.
'''

import numpy as np

# Join two arrays
# concatenate((a1, a2, ...), axis=0, out=None)

arr1 = np.array([1, 2, 3])
arr2 = np.array([4, 5, 6])

arr = np.concatenate((arr1, arr2))
print(arr)

# Join two 2-D arrays along rows (axis=1):

arr1 = np.array([[1, 2], [3, 4]])
arr2 = np.array([[5, 6], [7, 8]])

arr = np.concatenate((arr1, arr2), axis=1)
print(arr)


'''
Joining Arrays Using Stack Functions
Stacking is same as concatenation, the only difference is that stacking is done along a new axis.

We can concatenate two 1-D arrays along the second axis which would result in putting them one over the other, ie. stacking.

We pass a sequence of arrays that we want to join to the stack() method along with the axis. 
If axis is not explicitly passed it is taken as 0.
'''

arr1 = np.array([1, 2, 3])
arr2 = np.array([4, 5, 6])

#  Join a sequence of arrays along a new axis.
arr = np.stack((arr1, arr2), axis=1)
print(arr)

'''
Stacking Along Rows
NumPy provides a helper function: hstack() to stack along rows.
'''

arr1 = np.array([1, 2, 3])
arr2 = np.array([4, 5, 6])
arr = np.hstack((arr1, arr2))
print(arr)

'''
Stacking Along Columns
NumPy provides a helper function: vstack()  to stack along columns.
'''

arr1 = np.array([1, 2, 3])
arr2 = np.array([4, 5, 6])
arr = np.vstack((arr1, arr2))
print(arr)


'''
Stacking Along Height (depth)
NumPy provides a helper function: dstack() to stack along height, which is the same as depth.
'''

arr1 = np.array([1, 2, 3])
arr2 = np.array([4, 5, 6])
arr = np.dstack((arr1, arr2))
print(arr)
print(arr.shape)