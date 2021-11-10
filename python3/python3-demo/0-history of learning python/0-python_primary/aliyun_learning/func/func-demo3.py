# help() 函数的帮助文档
# help(print)

def fn(a:int,b:int,c:int = 29) -> int:
    '''
    文档字符串实例
    功能：函数的作用
    '''
    return a+b+c
# 文档字符串
help(fn)

s = fn(1,2,3)
print(s)




