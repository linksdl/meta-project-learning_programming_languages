## 集合 set
# 只能存储不可变对象
# 对象是无序的，不是按照元素插入顺序插入的
# 集合中的元素是唯一的 不可重复
# 创建 {} set()

s = {1,12,31,4,9,9,9}
print(s)

# 空集合
ss = set()
print(ss)

ss = set([1,2,3,4,5])
print(ss)

# ss = set('hello world')
# print(ss)

# ss = set({'11':1,'22':2})只使用键值
# print(ss)

# len, not in,in

# add加元素
ss.add(2888)
print(ss)

s1 = set('hello')
ss.update(s1)
print(ss)

# 删除元素
ss.pop()
print(ss)

ss.pop()
print(ss)






