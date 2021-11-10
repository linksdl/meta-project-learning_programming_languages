# 创建NDArray的方法
# nd.arange(12), x.size ,x.shape, x.reshape(3,4), nd.zeros(), nd.ones(), nd.array(), nd.random.normal()

# mxnet NDArray
from mxnet import nd

x = nd.arange(12)

# print(x)
# x shape
# print(x.shape)
# x size 可以获得NDArray实例中元素element 的总数
# print(x.size)

# 变成矩阵
# X = x.reshape(3, 4)
# print(X)
# 各元素为0的张量
# tensor = nd.zeros((2, 3, 4))
# print(tensor)

# 各元素为1的张量
# tensor1 = nd.ones((2, 3, 4))
# print(tensor1)

# 利用列表生成 矩阵
# Y = nd.array([[1, 2, 3, 4], [2, 3, 4, 5], [1, 3, 4, 2]])
# print(Y)

# shape = 3*4 的矩阵，数值随机采样于均值为0，标准差为1的正态分布。
# arr = nd.random.normal(0, 1, shape=(3, 4))
# print(arr)


