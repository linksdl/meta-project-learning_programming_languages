import numpy as np
import matplotlib.pyplot as plt
import sympy as sym

A = 3
w0 = np.pi/2
sigma = np.pi/2

x = np.linspace(0,10,50)
x_ = x*w0 -sigma
print(x_)
t = A * np.cos(x_)
plt.figure()
plt.title('x VS t')
plt.xlabel('t')
plt.ylabel('x')
plt.plot(x,t)
plt.show()



