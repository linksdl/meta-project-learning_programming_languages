# !/usr/bin/env python
# -*- coding: utf-8 -*-

"""
@Project : asc-project-learning_python      
@File    : 02-Data Distribution.py
@Author  : Billy Sheng 
@Contact : shengdl999links@gmail.com  
@Date    : 2020/10/9 10:58 下午
@Version  : 1.0.0
@License : Apache License 2.0
@Desc    : None
"""


### Random Data Distribution

# What is Data Distribution?
# Data Distribution is a list of all possible values, and how often each value occurs.
#
# Such lists are important when working with statistics and data science.
#
# The random module offer methods that returns randomly generated data distributions.
#
# Random Distribution
# A random distribution is a set of random numbers that follow a certain probability density function.
#
# Probability Density Function: A function that describes a continuous probability. i.e. probability of all values in an array.
#
# We can generate random numbers based on defined probabilities using the choice() method of the random module.
#
# The choice() method allows us to specify the probability for each value.
#
# The probability is set by a number between 0 and 1, where 0 means that the value will never occur and 1 means that the value will always occur.
#
# Example
# Generate a 1-D array containing 100 values, where each value has to be 3, 5, 7 or 9.
#
# The probability for the value to be 3 is set to be 0.1
#
# The probability for the value to be 5 is set to be 0.3
#
# The probability for the value to be 7 is set to be 0.6
#
# The probability for the value to be 9 is set to be 0
#
from numpy import random
x = random.choice([3, 5, 7, 9], p=[0.1, 0.3, 0.6, 0.0], size=(100))
print(x)

# The sum of all probability numbers should be 1.
#
# Even if you run the example above 100 times, the value 9 will never occur.
#
# You can return arrays of any shape and size by specifying the shape in the size parameter.
#
# Example
# Same example as above, but return a 2-D array with 3 rows, each containing 5 values.
#

x = random.choice([3, 5, 7, 9], p=[0.1, 0.3, 0.6, 0.0], size=(3, 5))
print(x)