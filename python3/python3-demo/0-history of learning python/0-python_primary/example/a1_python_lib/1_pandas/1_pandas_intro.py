#!/usr/bin/python
import numpy as np
import pandas as pd
from pandas import *  # Sereis, DataFrame
data = DataFrame(np.arange(16).reshape(4,4),index=list('abcd'),columns=list('wxyz'))
data['w']  #选择表格中的'w'列，使用类字典属性,返回的是Series类型
data.w    #选择表格中的'w'列，使用点属性,返回的是Series类型
data[['w']]  #选择表格中的'w'列，返回的是DataFrame类型
data[['w','z']]  #选择表格中的'w'、'z'列
data.to_csv=('a.csv')