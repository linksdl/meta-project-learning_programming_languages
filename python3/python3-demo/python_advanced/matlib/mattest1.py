#encoding = utf-8

import matplotlib.pyplot as plt
import random

# 绘制条形图

# 保证生成的图片在浏览器内显示
# %matplotlib inline
#  保证能正常显示中文(Mac)
plt.rcParams['font.family'] = ['Arial Unicode MS']
# 条形图绘制名侦探柯南主要角色年龄
role_list = ["柯南", "毛利兰", "灰原哀", "琴酒","贝尔摩德", "伏特加", "赤井秀一", "目暮十三"]
role_age = [7, 17, 7, 34, 32, 30, 27, 46]
# 实际年龄
role_ture_age = [18, 17, 18, 34, 45, 30, 27, 46]
x = [i for i in range(1, len(role_list)+1)]
y = role_age
y2 = role_ture_age
# 设置画板属性
plt.figure(figsize = (15, 8), dpi = 100)
# width以x为基准,向右为正,向左为负(如果多了,就需要为基准x加减响应的数值)
plt.bar(x, y, width= -0.3, label="现实年龄", color="#509839")
plt.bar(x, y2, width = 0.3, label="实际年龄", color="#c03035")
x_ = [i for i in range(0, len(role_list)+1)]
x_desc = ["{}".format(x_desc) for x_desc in role_list]
x_desc.insert(0, "")
y_ = range(0, 50)[::5]
y_desc = ["{}岁".format(y_desc) for y_desc in range(0, 50)][::5]
# x轴的数值和描述
plt.xticks(x_, x_desc)
plt.yticks(y_, y_desc)
plt.xlabel("角色姓名")
plt.ylabel("年龄")
plt.title("名侦探柯南主要角色年龄(部分)")
plt.legend(loc="best")
plt.savefig("./mzt.png")
plt.show()









