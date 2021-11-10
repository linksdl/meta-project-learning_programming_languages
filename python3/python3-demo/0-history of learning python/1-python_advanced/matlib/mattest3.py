#encoding = utf-8

import matplotlib.pyplot as plt
import random

# 保证能正常显示中文(Mac)
plt.rcParams['font.family'] = ['Arial Unicode MS']
# 学习时间分配
pro_name = ["C++", "Python", "Java", "Go", "Swift"]
pro_time = [10, 15, 5, 3, 1]
# 画饼 
plt.pie(pro_time, labels=pro_name, autopct="%3.2f%%", colors=["#ea6f5a", "#509839", "#0c8ac5", "#d29922", "#fdf6e3"])
# 指定标题
plt.title("学习时间分配")
# 保证为图形为正圆
plt.axis("equal")
# 显示图示
plt.legend(loc="best")
plt.savefig("./pro_learn.png")
plt.show()

