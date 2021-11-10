#encoding = utf-8
import pandas as pd
import numpy as np

#  Pandas是基于Numpy开发出的,专门用于数据分析的开源Python库
# Pandas的两大核心数据结构
## Series(一维数据)

# 利用numpy数组结构创建Series
a = pd.Series(np.arange(4,10))
print(a)

# 通过python数组创建Series，并指定索引
b = pd.Series([11,12,13], index=["上海","北京","深圳"])
print(b)

# 通过字典创建Series
c = pd.Series({"上海":11, "北京":12, "深圳":13})
print(c)

# DataFrame(多特征数据,既有行索引,又有列索引)

# 创建一个3行4列的DataFrame类型数据
data_3_4  = pd.DataFrame(np.arange(10,22).reshape(3,4))
print(data_3_4)

# 打印第一行数据
print(data_3_4[:1])
# 打印第一列数据
print(data_3_4[:][0])

# DataFrame的属性

# 读取数据
# result = pd.read_csv("./test.csv")
# result = result.decode('utf-8')
print(result)












