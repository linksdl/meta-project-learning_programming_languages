#encoding = utf-8

import matplotlib.pyplot as plt
import random

#  绘制折线图

# 保证生成的图片在浏览器内显示
# matplotlib inline
# 保证能正常显示中文(Mac)
plt.rcParams['font.family'] = ['Arial Unicode MS']
# 模拟海南一天的温度变化
# 生成x轴的24小时
hainan_x = [h for h in range(0, 24)]
# 生成y轴的温度随机值(15, 25)
hainan_y = [random.randint(15, 25) for t in range(0, 24)]
# 设置画板属性
plt.figure(figsize = (10, 8), dpi = 100)
# 往画板绘图
plt.plot(hainan_x, hainan_y, label="海南")
# 模拟北京一天内温度的变化 # 生成x轴的24小时
beijing_x = [h for h in range(0, 24)]
# 生成y轴的温度随机值(5, 10)
beijing_y = [random.randint(5, 10) for t in range(0, 24)]
# 往画板绘图
plt.plot(beijing_x, beijing_y, label="北京")
# 模拟河北一天内温度的变化
hebei_x = beijing_x
hebei_y = [random.randint(1, 5) for t in range(0, 24)]
# 自定义绘制属性: 颜色color="#0c8ac5", linestyle"-"""--""-.":", 线宽linewidth, 透明度alpha
plt.plot(hebei_x, hebei_y, label="河北",color="#823384", linestyle=":", linewidth=3, alpha=0.3)
# 坐标轴显示设置
# 生成24小时的描述
x_ = [x_ for x_ in range(0, 24)]
x_desc = ["{}时".format(x_desc) for x_desc in x_]
# 设置x轴显示 24小时
plt.xticks(x_, x_desc)

#  生成10至30度的描述
y_ = [y_ for y_ in range(0, 30)][::2]
y_desc = ["{}℃".format(y_desc) for y_desc in y_]

# 设置y轴显示温度描述
plt.yticks(y_, y_desc)
# 指定x y轴的名称
plt.xlabel("时间")
plt.ylabel("温度")
# 指定标题
plt.title("一天内温度的变化")
#  显示图例
plt.legend(loc="best")
# 将数据生成图片, 保存到当前目录下
plt.savefig("./t.png")
# 在浏览器内展示图片
plt.show()



