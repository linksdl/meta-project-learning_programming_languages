# !/usr/bin/env python
# -*- coding: utf-8 -*-

"""
@Project : acs-project-pytorch_learning      
@File    : learning pytorch with examples.py
@Author  : Billy Sheng 
@Contact : shengdl999links@gmail.com  
@Date    : 2021/1/31 2:44 下午
@Version  : 1.0.0
@License : Apache License 2.0
@Desc    : None
"""

import numpy as np
import math
import matplotlib.pyplot as plt

x = np.linspace(-math.pi, math.pi, 2000)
y = np.sin(x)

plt.plot(x, y)


a = np.random.randn()
b = np.random.randn()
c = np.random.randn()
d = np.random.randn()

learning_rate = 1e-6

for t in range(2000):
    y_pred = a + b * x + c * x **2 + d*x**3

    loss = np.square(y_pred - y).sum()
    if t % 100 == 99:
        print(t, loss)

    grad_y_pred = 2.0 *(y_pred -y)
    grad_a = grad_y_pred.sum()
    grad_b = (grad_y_pred * x).sum()
    grad_c = (grad_y_pred * x ** 2).sum()
    grad_d = (grad_y_pred * x ** 3).sum()

    a -= learning_rate * grad_a
    b -= learning_rate * grad_b
    c -= learning_rate * grad_c
    d -= learning_rate * grad_d

print(f'Result: y ={a} + {b}x + {c}x^2 +{d} x^3')

y1 = a + b*x + c*x**2 + d*x**3
plt.plot(x, y1)

plt.show()






