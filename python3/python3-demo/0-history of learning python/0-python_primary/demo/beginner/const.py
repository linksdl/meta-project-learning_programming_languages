#!/usr/bin/env python
# encoding: utf-8
'''
@author: shengdaolin
@license: (C) Copyright 2015-2018, www.findAll.com
@contact: 794469928@qq.com
@software: pycharm
@file: const.py
@time: 2018/9/18 9:34
@desc:
'''
# Python 的常量与变量
# python 常量的概念 ：运行中不会被更改的量
'''
python中的常量是一旦绑定，就不能更改的量。
python中定义常量需要通过对象的方法来创建。
'''
class _const(object):
    class  ConstErr(TypeError): pass

    def __setattr__(self, name, value):
        if self.__dict__.has_key(name):
            raise self.ConstErr #“Can't rebind const(%s)” % name
        self.__dict__[name] = value

    def __delattr__(self, name):
        if name in self.__dict__:
            raise self.ConstErr #"Can't unbind const(%s)" % name
        raise  NameError

import sys
sys.modules[__name__] = _const()





