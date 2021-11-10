# NDArray 运算
from mxnet import nd

X = nd.arange(12).reshape((3, 4))
print(X)

Y = nd.array([[1, 2, 3, 4], [2, 3, 4, 5], [4, 3, 2, 1]])
print(Y)

# 元素加
# print(X + Y)

# 元素乘
# print(X * Y)

# 元素除法
# print(X / Y)

# 指数运算
print(Y.exp())

# 矩阵转置乘法
print(nd.dot(X, Y.T))

# print(nd.concat(X, Y, dim=0), nd.concat(X, Y, dim=1))

print(X.sum())

print(X.norm())

