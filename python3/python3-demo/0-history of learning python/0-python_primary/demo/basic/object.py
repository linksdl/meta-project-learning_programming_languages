#!/usr/bin/env python
# encoding: utf-8
'''
@author: shengdaolin
@license: (C) Copyright 2015-2018, www.findAll.com
@contact: 794469928@qq.com
@software: pycharm
@file: object.py
@time: 2018/9/13 12:40
@desc:
'''
### 面向对象

class Hello :
    ## 构造方法
    def __init__(self,name):
        self._name = name

    def say(self):
        print ("Hello Python! {0}".format(self._name))

## 类继承
class Hi(Hello) :

    def __init__(self,name):
        Hello.__init__(self,name)

    def sayHi(self):
        print ("Hi, Python! {0}".format(self._name))

hello = Hello("shengdl")
hello.say()

hi = Hi("shengdl")
hi.sayHi()