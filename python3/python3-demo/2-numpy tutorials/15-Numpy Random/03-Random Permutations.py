# !/usr/bin/env python
# -*- coding: utf-8 -*-

"""
@Project : asc-project-learning_python      
@File    : 03-Random Permutations.py
@Author  : Billy Sheng 
@Contact : shengdl999links@gmail.com  
@Date    : 2020/10/9 11:00 下午
@Version  : 1.0.0
@License : Apache License 2.0
@Desc    : None
"""


# Random Permutations of Elements
# A permutation refers to an arrangement of elements. e.g. [3, 2, 1] is a permutation of [1, 2, 3] and vice-versa.
#
# The NumPy Random module provides two methods for this: shuffle() and permutation().
#
# Shuffling Arrays
# Shuffle means changing arrangement of elements in-place. i.e. in the array itself.
#
# Example
# Randomly shuffle elements of following array:
#
from numpy import random
import numpy as np
arr = np.array([1, 2, 3, 4, 5])
random.shuffle(arr)
print(arr)


# The shuffle() method makes changes to the original array.
#
# Generating Permutation of Arrays
# Example
# Generate a random permutation of elements of following array:
#

arr = np.array([1, 2, 3, 4, 5])
print(random.permutation(arr))

# The permutation() method returns a re-arranged array (and leaves the original array un-changed).