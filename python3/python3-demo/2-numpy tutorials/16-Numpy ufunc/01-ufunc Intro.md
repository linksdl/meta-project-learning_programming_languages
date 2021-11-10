## NumPy ufuncs


### What are ufuncs?
ufuncs stands for "Universal Functions" and they are NumPy functions that operates on the ndarray object.

### Why use ufuncs?
ufuncs are used to implement vectorization in NumPy which is way faster than iterating over elements.

They also provide broadcasting and additional methods like reduce, accumulate etc. that are very helpful for computation.

ufuncs also take additional arguments, like:

where boolean array or condition defining where the operations should take place.

dtype defining the return type of elements.

out output array where the return value should be copied.

### What is Vectorization?
Converting iterative statements into a vector based operation is called vectorization.

It is faster as modern CPUs are optimized for such operations.

Add the Elements of Two Lists
list 1: [1, 2, 3, 4]

list 2: [4, 5, 6, 7]

One way of doing it is to iterate over both of the lists and then sum each elements.

#### Example
Without ufunc, we can use Python's built-in zip() method:


```python
x = [1, 2, 3, 4]
y = [4, 5, 6, 7]
z = []

for i, j in zip(x, y):
  z.append(i + j)
print(z)
```


NumPy has a ufunc for this, called add(x, y) that will produce the same result.

# Example
With ufunc, we can use the add() function:

```python
import numpy as np

x = [1, 2, 3, 4]
y = [4, 5, 6, 7]
z = np.add(x, y)

print(z)
```