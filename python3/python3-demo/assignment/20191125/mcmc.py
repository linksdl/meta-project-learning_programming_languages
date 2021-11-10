# Put your code here
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from IPython.display import Image

################
mys = pd.read_csv('mystery.csv', names=['x','y'])
print(mys)

# Put your code here
import seaborn

seaborn.jointplot(mys['x'],mys['y'])
plt.xlabel('x')
plt.ylabel('y')
plt.title('Y changing with function of X')
plt.show()

#####################
# Put your code here
x = mys['x']
y = mys['y']

x_model = np.linspace(-4,4,200)
plt.figure(figsize=(10,5))

polyfit = np.polyfit(x,y,2)
y_model = np.poly1d(polyfit)

plt.plot(x_model,y_model(x_model),color='red')
plt.scatter(x,y)
plt.xlabel('x')
plt.ylabel('y')
plt.title('Polynomial of degree 2 to the data')
plt.show()

print(y_model)

# Put your code here
x = mys['x']
y = mys['y']

x_model = np.linspace(-4,4,200)
plt.figure(figsize=(10,5))

polyfit = np.polyfit(x,y,30)
y_model = np.poly1d(polyfit)

plt.plot(x_model,y_model(x_model),color='red')
plt.scatter(x,y)
plt.xlabel('x')
plt.ylabel('y')
plt.title('Polynomial of degree 30 to the data')
plt.show()


# An important import command!
from scipy.optimize import curve_fit

# Put your code here
def p(x,A,B,C,D):
    return A*x**2+B*np.sin(C*x)+D

j,b=curve_fit(p,mys['x'],mys['y'],p0=[1,1,4,1])
print(j)

plt.figure(figsize=(10,5))

x_model = np.linspace(-4,4,200)
y_sin=p(x_model,j[0],j[1],j[2],j[3])
plt.scatter(mys['x'],mys['y'],label='mys')

plt.plot(x_model,y_sin,color='red',label='fit')


# Put your code here
sigma=mys['y']*0.1
print(sigma)

