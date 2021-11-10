#!/usr/bin/python
# -*- coding: UTF-8 -*-

"""
Please note, this code is only for python 3+. If you are using python 2+, please modify the code accordingly.
"""
from __future__ import print_function
import pandas as pd
import numpy as np

dates = pd.date_range('20130101', periods=6)
df = pd.DataFrame(np.arange(24).reshape((6,4)), index=dates, columns=['A', 'B', 'C', 'D'])

df.iloc[0,1] = np.nan
df.iloc[1,2] = np.nan
print(df)
print(df.dropna())   # dropna默认丢弃任何含有缺失的行：
print(df.fillna(value=0))
print(pd.isnull(df))