# 不可变的列表
# 元组操作 类似list
my_tuple = ()
my_tuple = (1,2,3,4,5)
print(my_tuple)

print(my_tuple[1])
# 元组不可变 序列

tuple_1 = 10,20,30,40
print(tuple_1,type(tuple_1))

tuple_2 = 15,
print(tuple_2)

# 元组 解构  解包
a,b,c,d = tuple_1
print(a,b,c,d)

# 数据交换
# a,b = b,a

# * 表示剩余元素
a,b, *c  = tuple_1
print(a,b,c)

a,*b,c  = tuple_1
print(a,b,c)

*a,b, c  = tuple_1
print(a,b,c)

# list tuple 都可以解包








