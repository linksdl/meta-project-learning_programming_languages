# !/usr/bin/env python
# -*- coding: utf-8 -*-

"""
@Project : asc-project-learning_python      
@File    : 03-Numpy Array Indexing.py
@Author  : Daolin Sheng 
@Contact : shengdl999links@gmail.com  
@Date    : 2020/10/9 10:34 上午
@Version  : 1.0.0
@License : Apache License 2.0
@Desc    : None
"""

'''
Access Array Elements
Array indexing is the same as accessing an array element.

You can access an array element by referring to its index number.

The indexes in NumPy arrays start with 0, meaning that the first element has index 0, and the second has index 1 etc.
'''

# Get the first element from the following array:

import numpy as np

arr = np.array([1, 2, 3, 4, 5])
print(arr[0])

# Get the second element from the following array.
print(arr[1])

# Get third and fourth elements from the following array and add them.
print(arr[2] + arr[3])

'''
Access 2-D Arrays
To access elements from 2-D arrays we can use comma separated integers representing the dimension and the index of the element.
'''

# Access the 2nd element on 1st dim:

arr = np.array([[1, 2, 3, 4, 5], [6, 7, 8, 9, 10]])
print('2nd element on 1st dim: ', arr[0, 1])

# Access the 5th element on 2nd dim:
print('5th element on 2nd dim: ', arr[1, 4])


'''
Access 3-D Arrays
To access elements from 3-D arrays we can use comma separated integers representing the dimensions and the index of the element.
'''

# Access the third element of the second array of the first array:

arr = np.array([[[1, 2, 3], [4, 5, 6]], [[7, 8, 9], [10, 11, 12]]])
print(arr[0, 1, 2])

# Example Explained
'''
arr[0, 1, 2] prints the value 6.

And this is why:

The first number represents the first dimension, which contains two arrays:
[[1, 2, 3], [4, 5, 6]]
and:
[[7, 8, 9], [10, 11, 12]]
Since we selected 0, we are left with the first array:
[[1, 2, 3], [4, 5, 6]]

The second number represents the second dimension, which also contains two arrays:
[1, 2, 3]
and:
[4, 5, 6]
Since we selected 1, we are left with the second array:
[4, 5, 6]

The third number represents the third dimension, which contains three values:
4
5
6
Since we selected 2, we end up with the third value:
6
'''

'''
Negative Indexing
Use negative indexing to access an array from the end.
'''

# Print the last element from the 2nd dim:

arr = np.array([[1, 2, 3, 4, 5], [6, 7, 8, 9, 10]])
print('Last element from 2nd dim: ', arr[1, -1])

