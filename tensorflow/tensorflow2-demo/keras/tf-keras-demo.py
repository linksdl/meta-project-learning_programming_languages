# !/usr/bin/env python
# -*- coding: utf-8 -*-

"""
@Project : acs-project-tensorflow      
@File    : tf-keras-demo.py
@Author  : Billy Sheng 
@Contact : shengdl999links@gmail.com  
@Date    : 2020/12/15 2:26 下午
@Version  : 1.0.0
@License : Apache License 2.0
@Desc    : None
"""

import matplotlib as mpl
from matplotlib.pyplot import plot as plt
import numpy as np
import pandas as pd

import os
import sys
import time

import tensorflow as tf

print(tf.__version__)

# for module in plt, np, pd, tf:
#     # print(module.__version__)

# Note that when using the delayed-build pattern (no input shape specified),
# the model gets built the first time you call `fit`, `eval`, or `predict`,
# or the first time you call the model on some input data.
model = tf.keras.Sequential()
model.add(tf.keras.layers.Dense(8))
model.add(tf.keras.layers.Dense(1))
model.compile(optimizer='sgd', loss='mse')
# This builds the model for the first time:
model.fit(x, y, batch_size=32, epochs=10)



