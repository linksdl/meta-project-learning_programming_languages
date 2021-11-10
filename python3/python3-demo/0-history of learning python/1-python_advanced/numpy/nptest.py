#encoding = utf-8
import numpy as np

###
# 关于numpy 包的使用
###
# 创建简单的列表
a  = [1,2,3,4]

# 将列表转换为数组
b = np.array(a)
print(b)

# 数组元素个数
print(b.size)

# 数组形状
print(b.shape)

# 数组维度
print(b.ndim)

# 数组数据类型
print(b.dtype)

# 快速创建N维数组的api函数
## 创建10行10列的数值为浮点1的矩阵
array_ones = np.ones([10,10])
print(array_ones)
## 创建10行10列的数值为浮点0的矩阵
array_zeros = np.zeros([10,10])
print(array_zeros)
## 从现有的数据创建数组
#array(深拷贝)
#asarray(浅拷贝)

# Numpy创建随机数组np.random

## 均匀分布
### 创建指定形状(示例为10行10列)的数组(范围在0至1之间)
print(np.random.rand(10,10))
### 创建指定范围内的一个数
print(np.random.uniform(1,100))
### 创建指定范围内的一个整数
print(np.random.randint(1,100))

## 正态分布
### 给定均值/标准差/维度的正态分布
print(np.random.normal(1.75, 0.1, (2, 3)))

### 数组的索引, 切片

# 正态生成4行5列的二维数组
arr = np.random.normal(1.75, 0.1, (4, 5))
print(arr)

# 截取第1至2行的第2至3列(从第0行算起)
after_arr = arr[1:3,2:4]
print(after_arr)


# 改变数组形状(要求前后元素个数匹配)
ones_20 = np.ones([20])
print("-->1行20列<--")
print(ones_20)

ones4_5 = ones_20.reshape([4,5])
print("-->4行5列<--")
print(ones4_5)

### Numpy计算(重要)

stus_score = np.array([[80, 88], [82, 81], [84, 75], [86, 83], [75, 81]])
# 条件运算
print(stus_score > 80)
print(np.where(stus_score < 80, 0, 90))

# 统计运算
## 指定轴最大值amax(参数1: 数组; 参数2: axis=0/1; 0表示列1表示行)
### 求每一列的最大值(0表示列)
print("每一列的最大值为:")
print(np.amax(stus_score, axis=0))

print("每一行的最大值为:")
print(np.amax(stus_score, axis=1))

## 指定轴最小值amin
# 求每一行的最小值(0表示列)
print("每一列的最小值为:")
print(np.amin(stus_score, axis=0))

# 求每一行的最小值(1表示行)
print("每一行的最小值为:")
print(np.amin(stus_score, axis=1))

# 指定轴平均值mean
# 求每一行的平均值(0表示列)
print("每一列的平均值:")
print(np.mean(stus_score, axis=0))

# 求每一行的平均值(1表示行)
print("每一行的平均值:")
print(np.mean(stus_score, axis=1))

# 方差std
# 求每一行的方差(0表示列)
print("每一列的方差:")
print(np.std(stus_score, axis=0))

# 求每一行的方差(1表示行)
print("每一行的方差:")
print(np.std(stus_score, axis=1))


# 数组运算
## 数组与数的运算

print("加分前:")
print(stus_score)

# 为所有平时成绩都加5分
stus_score[:, 0] = stus_score[:, 0]+5
print("加分后:")
print(stus_score)

print("减半前:")
print(stus_score)

# 平时成绩减半
stus_score[:, 0] = stus_score[:, 0]*0.5
print("减半后:")
print(stus_score)

# 数组间也支持加减乘除运算,但基本用不到

a = np.array([1, 2, 3, 4])
b = np.array([10, 20, 30, 40])

c = a + b
d = a - b
e = a * b
f = a / b

print("a+b为", c)
print("a-b为", d)
print("a*b为", e)
print("a/b为", f)

# 矩阵运算np.dot()(非常重要)

## 计算规则
## (M行, N列) * (N行, Z列) = (M行, Z列)
# 平时成绩占40% 期末成绩占60%, 计算结果
# [[80, 88], [82, 81], [84, 75], [86, 83], [75, 81]]
q = np.array([[0.4], [0.6]])
result = np.dot(stus_score, q)
print("最终结果为:")
print(result)

# 矩阵拼接
# 矩阵垂直拼接
print("v1为:")
v1 = [[0, 1, 2, 3, 4, 5], [6, 7, 8, 9, 10, 11]]
print(v1)
print("v2为:")
v2 = [[12, 13, 14, 15, 16, 17], [18, 19, 20, 21, 22, 23]]
print(v2)
# 垂直拼接
result = np.vstack((v1, v2))
print("v1和v2垂直拼接的结果为")
print(result)


print("v1为:")
v1 = [[0, 1, 2, 3, 4, 5], [6, 7, 8, 9, 10, 11]]
print(v1)
print("v2为:")
v2 = [[12, 13, 14, 15, 16, 17], [18, 19, 20, 21, 22, 23]]
print(v2)
# 垂直拼接
result = np.hstack((v1, v2))
print("v1和v2水平拼接的结果为")
print(result)

# Numpy读取数据np.genfromtxt

result = np.genfromtxt("./file/numpy.txt",delimiter=",")
print(result)














































