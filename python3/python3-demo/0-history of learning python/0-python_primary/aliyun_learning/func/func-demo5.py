## 递归
## 求阶乘
def  fn(a):
    if a == 1:
        return 1
    elif a <= 0:
        return 0
    return fn(a-1) * a

s = fn(10)
print(s)

# 幂运算
def power(n , i):
    if i == 1:
        return n
    return power(n,i-1) * n

p = power(11,2)
print(p)

# 求回文 对称字符串
def hui_wen(s):
    length = len(s)
    if length < 2:
        return True
    elif s[0] != s[-1]:
        return False
    return  hui_wen(s[1:-1])

bool  = hui_wen('sssswrgwssss')
print(bool)




