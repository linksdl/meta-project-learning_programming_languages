# !/usr/bin/env python
# -*- coding: utf-8 -*-

"""
@Project : acs-project-pytorch_learning      
@File    : 01-tensors.py
@Author  : Billy Sheng 
@Contact : shengdl999links@gmail.com  
@Date    : 2021/1/27 11:22 上午
@Version  : 1.0.0
@License : Apache License 2.0
@Desc    : None
"""

import torch
import numpy as np

# Tensor Initialization
data = [[1, 2], [3, 4]]
x_data = torch.tensor(data)
print(x_data)

np_array = np.array(data)
x_np = torch.from_numpy(np_array)
print(x_data)

x_ones = torch.ones_like(x_data)
x_rand = torch.ones_like(x_data, dtype=torch.float)
print(f"Ones Tensor: \n {x_ones} \n")
print(f"Random Tensor: \n {x_rand} \n")

# shape is tuple of tensor dimensions.
shape = (2, 3,)

rand_tensor = torch.rand(shape)
ones_tensor = torch.ones(shape)
zeros_tensor = torch.zeros(shape)
print(f"Random Tensor: \n {rand_tensor} \n")
print(f"Ones Tensor: \n {ones_tensor} \n")
print(f"Zeros Tensor: \n {zeros_tensor}")

# Tensor Attributes
# tensor attributes describe their shape, datatype, and the device on which there are stored.

tensor = torch.rand(3, 4)
print(f"Shape of tensor: {tensor.shape}")
print(f"Datatype of tensor: {tensor.dtype}")
print(f"Device tensor is stored on: {tensor.device}")

# Tensor Operations 操作
# Over 100 tensor operations, including transposing, indexing, slicing, mathematical operations,
# linear algebra, random sampling, and more are comprehensively described

if torch.cuda.is_available():
    tensor = tensor.to('cuda')

tensor = torch.ones(4, 4)
tensor[:, 1] = 0
print(tensor)

# Joining tensors
t1 = torch.cat([tensor, tensor, tensor], dim=1)
print(t1)

t2 = torch.cat([tensor, tensor, tensor], dim=0)
print(t2)

# Multiplying tensors 相乘
mul_tensor = tensor.mul(tensor)
print(mul_tensor)

print(tensor * tensor)

# This computes the matrix multiplication between two tensors
# 转置相乘

print(tensor.matmul(tensor.T))
print(tensor @ tensor.T)

# In-place operations Operations that have a _ suffix are in-place.
# For example: x.copy_(y), x.t_(), will change x.
# 常量相加

print(tensor.add_(5))

# From the Numpy to Pytorch
# Tensors on the CPU and NumPy arrays can share their underlying memory locations,
# and changing one will change the other.
# 共享内存


# Tensor to NumPy array


t = torch.ones(5)
print(f"t: {t}")
n = t.numpy()
print(f"n: {n}")

t.add_(1)
print(f"t: {t}")
print(f"n: {n}")

# Numpy array to Tensor
n = np.ones(5)
t = torch.from_numpy(n)

np.add(n, 1, out=n)
print(f"t: {t}")
print(f"b: {n}")
