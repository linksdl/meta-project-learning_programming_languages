# !/usr/bin/env python
# -*- coding: utf-8 -*-

"""
@Project : asc-project-learning_python      
@File    : 04-Deaborn Module.py
@Author  : Billy Sheng 
@Contact : shengdl999links@gmail.com  
@Date    : 2020/10/9 11:03 下午
@Version  : 1.0.0
@License : Apache License 2.0
@Desc    : None
"""


# Visualize Distributions With Seaborn
# Seaborn is a library that uses Matplotlib underneath to plot graphs.
# It will be used to visualize random distributions.



# Install Seaborn
# If you have Python and PIP already installed on a system, install it using this command:

# C:\Users\Your Name>pip install seaborn
# If you use Jupyter, install Seaborn using this command:
#
# C:\Users\Your Name>!pip install seaborn
# Distplots
# Distplot stands for distribution plot, it takes as input an array and plots
# a curve corresponding to the distribution of points in the array.
#
# Import Matplotlib
# Import the pyplot object of the Matplotlib module in your code using the following statement:

import matplotlib.pyplot as plt
import seaborn as sns

'''
Plotting a Displot
'''

sns.distplot([0, 1, 2, 3, 4, 5])
plt.show()

# Plotting a Distplot Without the Histogram
sns.distplot([0, 1, 2, 3, 4, 5], hist=False)
plt.show()

# sns.distplot([0, 1, 2, 3, 4, 5], hist=False)
#
# plt.show()
# Note: We will be using: sns.distplot(arr, hist=False)
# to visualize random distributions in this tutorial.