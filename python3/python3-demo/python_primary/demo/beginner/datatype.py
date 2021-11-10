#!/usr/bin/env python
# encoding: utf-8
'''
@author: shengdaolin
@license: (C) Copyright 2015-2018, www.findAll.com
@contact: 794469928@qq.com
@software: pycharm
@file: datatype.py
@time: 2018/9/18 12:50
@desc:
'''

# python  的数据类型
# 基本数据类型
# 列表
# 元组
# 集合
# 字典

# 基本的数字类型   数和字符串
# 列表 [] 有序排列 里面的值是可以修改的
stus = ['2','3','5','8']
print(stus)
# 元组 ()  值不可以修改
stus[3] = "9"
print(stus)

score = ("98","58","78","86")
print(score)
# score[1] = "66" # TypeError: 'tuple' object does not support item assignment
# print(score)

# 集合 set 集合内元素唯一
a = set("abcdefg")
b = set("defghi")
## 交集
print (a&b)

## 并集
print (a|b)

## 差集
print (a-b)

## 去除重复的值
print (set(a))

# 字典 也叫关联数组 {} {"name":"张三","age":"24"}
k = {"name":"sdl","age":"28"}
print (k["name"])
print (k["age"])
k["sex"] = "男"
print (k["sex"])








