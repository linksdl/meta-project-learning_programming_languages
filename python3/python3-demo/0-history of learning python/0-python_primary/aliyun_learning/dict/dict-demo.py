# 字典 映射 mapping
# 列表存储数据的性能很好，但查询的性能很差
# 字典可以保存多个对象 key value

# {}

d = {}
print(d,type(d))
# 字典的值可以是任意的对象
# 字典的可以是任意不可变的对象（int str bool tuple）
d = {'name':"sdl",
     '1':1,
     '2':2,
     '3':3}
print(d)

# 根据key 获取值
print(d['2'])

# print(d['4']) KeyError: '4'
# key 都是字符串
dd = dict(name='sdl',age=19,gender='男')
print(dd,type(dd))

## 双值序列  双值子序列
ddd = dict([('name','sdl'),('age',29)])
print(ddd)

print(len(ddd))
# 是否包含key in ,not in
print('name' in ddd)
# 根据key 获取值
print(ddd['name'])
#
print(ddd.get('name','默认值'))
# 修改
ddd['name'] = 'sdlsdl'
print(ddd['name'])

ddd['add'] = '上海市'
print(ddd)

print(ddd.items())
# 添加 会替换key value
ddd.update(d)
print(ddd)

# del 删除 pop  popitem 有还回值
del ddd['add']
print(ddd)
# copy 浅复制  只会简单复制内部的值，如果值也是可变对象 这个可变对象不会被复制
dddd = d.copy()
print(dddd)

## 遍历字典  keys values items
print(dd.keys(),dd.values(),dd.items())

for k,v in dd.items():
    print(k,'=',v)







