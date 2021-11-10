# 不定长参数 保存到一个元组中  装包

def fn(*a):
    print('a=',a)

fn()
fn(1,2,3)

# 任意参数 的求和
def sum(*a):
    result = 0
    for n in a :
        result += n
    print(result)
sum(1,2,3,4,5)

## **a 参数 保存到一个字典里

## 参数的解包  *t 元组解包  **d 字典解包
def f4(a,b,c):
    print('a=', a)
    print('b=', b)
    print('c=', c)

t = (1,2,3)
f4(*t)


