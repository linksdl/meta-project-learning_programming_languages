Python 3.7.4 (v3.7.4:e09359112e, Jul  8 2019, 14:36:03) 
[GCC 4.2.1 (Apple Inc. build 5666) (dot 3)] on darwin
Type "help", "copyright", "credits" or "license()" for more information.
>>> 
>>> 
>>> print("I love FishC.com")
I love FishC.com
>>> print("i love you")  # 我爱你
i love you
>>> print(5 + 3)
8
>>> 1234567890987654321 * 9876543210123456789
12193263121170553265523548251112635269
>>> print ("Well water " + "River")
Well water River
>>> print("I love you\n" * 3)
I love you
I love you
I love you

>>> 
===== RESTART: /Users/shengdaolin_sh/dir_ailearning/python-demo/p2_1.py =====
Traceback (most recent call last):
  File "/Users/shengdaolin_sh/dir_ailearning/python-demo/p2_1.py", line 2, in <module>
    temp = intput("不妨猜一下小甲鱼现在心里想的是哪个数字呢？")
NameError: name 'intput' is not defined
>>> 
===== RESTART: /Users/shengdaolin_sh/dir_ailearning/python-demo/p2_1.py =====
不妨猜一下小甲鱼现在心里想的是哪个数字呢？1
猜错啦，小甲鱼现在心里想的是8！
游戏结束啦，不玩啦^_^
>>> help(print)
Help on built-in function print in module builtins:

print(...)
    print(value, ..., sep=' ', end='\n', file=sys.stdout, flush=False)
    
    Prints the values to a stream, or to sys.stdout by default.
    Optional keyword arguments:
    file:  a file-like object (stream); defaults to the current sys.stdout.
    sep:   string inserted between values, default a space.
    end:   string appended after the last value, default a newline.
    flush: whether to forcibly flush the stream.

>>> 

>>> teacher = "小甲鱼"
>>> print(teacher)
小甲鱼
>>> x = 3
>>> x = 5
>>> y = 8
>>> print(x+ y)
13
>>> a = "i love "
>>> b = "you "
>>> print(a + b) # 字符串拼接
i love you 
>>> 5 + 8
13
>>> '5' + '8'
'58'
>>> 
