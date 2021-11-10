# 可变对象

# id type value
# 对象中的值可变

# 可变对象 list
a = [1,2,3]
print(a,id(a))
# 修改对象
a[0] = 10
print(a,id(a))
# 修改变量 内存地址已经改变
a =  [1,2,4,5]
print(a,id(a))

# 改对象 会影响所有指针对应的 变量
aa = [11,33,22]
bb = aa

print(id(aa),id(bb),aa,bb)
bb[0] = 99
print(id(aa),id(bb),aa,bb)

bb = [1,6,8]
print(id(aa),id(bb),aa,bb)

# is, is not id 是否相等, == ,!= 值是否相等
cc = [1,2,3]
dd = [1,2,3]

print(cc == dd)
print(cc is dd)




