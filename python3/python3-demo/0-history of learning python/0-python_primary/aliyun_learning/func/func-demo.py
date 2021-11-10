# 函数学习 函数也是个对象
def fn():
    print('这是第一个函数')
    print('hello')


# print(fn())
# fn()
# fn()
# fn 是函数对象  fn()是函数调用

#形参 指定多个形参
def sum(a, b):
    print(a,'+',b,'=',a+b)

sum(1,3)

# 函数形参  默认值
def add(a=1,b=3):
    return a + b

print(add(22,66))

## 实参 形参 调用函数时，来传递实参

def fin(a,b,c):
    print('a=', a)
    print('b=', b)
    print('c=', c)
# fin(1,3,4)

## 位置参数
fin(2,5,7)

print('-'*20)
## 关键字参数
fin(a=2,c=3,b=7)
## 混合使用 必须位置参数必须在前面
print('-'*20)
fin(1,c=9,b=2)

# 函数实参传递时 不会检查实参的类型
def f2(a):
    a[0] = 10
    print('a=',a)
# f2('hello')
# f2([1,2,3])
# f2({1,2,3})
# f2({"name":"sdl","age":19})
## 改对象  还是改变量
c = 20
c = [1,2,3]
f2(c.copy())
f2(c[:])
print('c=',c)









