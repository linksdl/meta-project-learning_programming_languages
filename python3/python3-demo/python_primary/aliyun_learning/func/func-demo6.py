## 高阶函数 (也包含一种内部定义函数，还回函数) 闭包
## 匿名函数

# 创建一个列表
l = [1,2,3,4,5,6,7,8,9,10]

r = filter(lambda i: i %3 != 0,l)
print(list(r))

# map() filter() sort() 排序，默认直接比较列表中的大小 sorted()

ll = '13462881'
sorted(ll,key=int)
print(list(ll))

## 闭包

# 求平均值

def make_avg():

    nums = []

    def avgager(n):
        nums.append(n)
        return sum(nums)/len(nums)

    return avgager
avgager = make_avg()
print(avgager(10))
print(avgager(30))
print(avgager(15))

# 闭包  1，有函数嵌套 2，内部函数作为还回值返回  3，内部函数使用外部函数变量






