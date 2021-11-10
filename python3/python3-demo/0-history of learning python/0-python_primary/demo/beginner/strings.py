#!/usr/bin/env python
# encoding: utf-8
'''
@author: shengdaolin
@license: (C) Copyright 2015-2018, www.findAll.com
@contact: 794469928@qq.com
@software: pycharm
@file: strings.py
@time: 2018/9/18 10:41
@desc:
'''

##  python 数字与字符串
# 了解数的类型
# 什么是字符串

# Python中的数的类型主要有5种，分为有符号整数型（int），长整型（long）, 浮点型（float），布尔型（bool），复数型（complex）
# 0 -1 1 3 88 int 型
# 89833883L   37377L  long 型
# 3.442 5.6566 float 型  浮点型
# bool 布尔类型  True Flase
# 引号引起来的 成为字符串  单引号  双引号   三引号
c1  = "2ght"
print(c1)
c2 = "it's a 'dog'!"
print(c2)

# 三单引号 内部可以换行
text = '''
she
my
you are
'''
print(text)

text2 = """
she 
is 
a 
girl
"""
print(text2)

# 转义符 /
c3 = 'it\'s a dog'
print(c3)

# \n 换行
print("she \nis \na \nbeauful \ngirl!")

# 自然字符串
print ("she \nis \nmy \ngirlfriend!")
print (r"she \nis \nmy \ngirlfriend!")

# 字符串的重复
print("hello \n" * 5)

# python 的子字符串
# 索引运算方法 运算符从0开始索引
# 切片运算方法 切片运算[a:b] 是从下标第a开始到第b-1下标 同样第一位的下标为0
str = "jikexueyuan"
str1 = str[0]
str2 = str[7]
str3 = str[:2]
str4 = str[2:]
str5 = str[4:7]

print(str1)
print(str2)
print(str3)
print(str4)
print(str5)





















