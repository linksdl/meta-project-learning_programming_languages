#!/usr/bin/env python
# encoding: utf-8
'''
@author: shengdaolin
@license: (C) Copyright 2015-2018, www.findAll.com
@contact: 794469928@qq.com
@software: pycharm
@file: demo.py
@time: 2018/9/18 14:37
@desc:
'''
# python 行与缩进
# 了解逻辑行与物理行
# 行中分号使用规则
# 行连接
# 什么是缩进
# 如何缩进
# 注释
# 逻辑行 物理行
# 以下是3个物理行
print("abd")
print("789")
print("777")
# 以下是一个物理行，3个逻辑行
print("abc");print("789");print("777")

# 行中分号使用规则
# 所有的逻辑行均需要分号，但一下条件除外
print("123");print("789");
print("456");

# 分号可以省略的条件是： 每个物理行的行末可以省略分号，也可以不省略
print("123");print("456")
print("789")

# 行连接 \ python2
print ("我们都是"
       "好孩子")

# 什么是缩进
# 逻辑行的空白是有规定的
a = 777
print(a)
# 如何缩进 1，一般是不应该出现空白 2，if 语句的缩进方法
import sys
# 空格键  tab键
a = 7
if a>0:
    print("hello")

b = 0
while b<7:
    print(b)
    b+=1

# 注释 1，#   2，














