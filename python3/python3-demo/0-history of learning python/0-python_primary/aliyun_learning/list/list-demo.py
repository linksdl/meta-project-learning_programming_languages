'''
- 列表是python 中的一个对象
- 可以保存多个有序的数据
- 列表的创建，操作
'''

# 列表的创建
my_list = [] # 空列表
print(my_list,type(my_list))

# 列表中存储的数据 为元素，多个元素
my_list = [10]
print(my_list)

# 添加多个元素
my_list = [10,20,30,40,50]
print(my_list)

# 列表中可以存多种类型数据 按照插入顺序 保存
my_list = [10,"hello",True,23.44,[1,2,3],print]
print(my_list)

my_list = [10,20,30,40,50]

# 通过索引获取列表中的元素
print(my_list[0])
print(my_list[2])
# IndexError: list index out of range
# print(my_list[5])

# 列表的长度 列表的最大索引+1
print(len(my_list))

# 循环
for i in my_list:
    print(i)

## 列表切片
stus = ['i','love','you','!','and','you','love','me']
#print(stus[-2])

# 列表[起：止]
print(stus[0:3])
# 不会影响原来列表
# print(stus)
# print(stus[:])
# 步长
print(stus[0:5:2])

# print(stus[::0]) ValueError: slice step cannot be zero
print(stus[::-1])

































