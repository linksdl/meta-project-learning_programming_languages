#!/usr/bin/env python
# encoding: utf-8
'''
@author: shengdaolin
@license: (C) Copyright 2015-2018, www.findAll.com
@contact: 794469928@qq.com
@software: pycharm
@file: pyobject.py
@time: 2018/9/18 14:02
@desc:
'''
# python 对象
# 什么是python对象
"""
Python的内置的对象类型主要有数字、字符串、列表、元组、字典、集合等等实，
在Python中，一切皆为对象，我们后面会给大家讲解面向对象的知
"""
# 详解 pickle 腌制
# 需要持久性存储  序列化的这种过程叫做 pickle 腌制
# 存到第三方文件

import pickle

lista = ["mingyue","jishi","you"]
listb = pickle.dumps(lista) # 序列化
# print (listb)

listc = pickle.loads(listb) #  反序列化
print(listc)
# 将对象存储到文件中，进行序列化
# groupl = ["baiju","wen","qingtian"]
# f1 = file('l.pkl','wb')
# pickle.dumps(groupl,f1,True)
# f1.close()
#
# f2 = file('1.pkl','rb')
# t = pickle.load(f2)
# f2.close()



















