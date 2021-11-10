## 对象

## 什么是对象 对象市内存中专门用来存储数据的一块区域
## 对象中可以存各种数据（数字，布尔值） id type value  三部分组成

##
class Person:
    '''
        这是一个类
    '''
    name = 'sdl' ## 公共属性

    def sayHello(self):
        print('hello')

p = Person()
print(p.name)
## 调用对象中的方法
p.sayHello()



