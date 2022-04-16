# !/usr/bin/env python
# -*- coding: utf-8 -*-

"""
@Project : asc-project-learning_python      
@File    : 08-Python Strings.py
@Author  : Daolin Sheng 
@Contact : shengdl999links@gmail.com  
@Date    : 2020/10/8 10:26 下午
@Version  : 1.0.0
@License : Apache License 2.0
@Desc    : None
"""

'''
String Literals
String literals in python are surrounded by either single quotation marks, or double quotation marks.

'hello' is the same as "hello".

You can display a string literal with the print() function:
'''

print("Hello")
print('Hello')


'''
Assign String to a Variable
Assigning a string to a variable is done with the variable name followed by an equal sign and the string:
'''

a = "Hello"
b = 'Hello'

print(a, b)

'''
Multiline Strings
You can assign a multiline string to a variable by using three quotes:
'''

a = """Lorem ipsum dolor sit amet,
consectetur adipiscing elit,
sed do eiusmod tempor incididunt
ut labore et dolore magna aliqua."""

print(a)

# Or three single quotes:
a = '''Lorem ipsum dolor sit amet,
consectetur adipiscing elit,
sed do eiusmod tempor incididunt
ut labore et dolore magna aliqua.
'''

print(a)

# Note: in the result, the line breaks are inserted at the same position as in the code.

'''
Strings are Arrays
Like many other popular programming languages, strings in Python are arrays of bytes representing unicode characters.

However, Python does not have a character 数据类型, a single character is simply a string with a length of 1.

Square brackets can be used to access elements of the string.
'''

# Get the character at position 1 (remember that the first character has the position 0):
a = "Hello, World!"
print(a[1])

'''
Slicing
You can return a range of characters by using the slice syntax.

Specify the start index and the end index, separated by a colon, to return a part of the string.
'''

# Get the characters from position 2 to position 5 (not included):
b = "Hello, World!"
print(b[2:5])


'''
Negative Indexing
Use negative indexes to start the slice from the end of the string:
'''

b = "Hello, World!"
print(b[-5:-2])

'''
String Length
To get the length of a string, use the len() function.
'''

# The len() function returns the length of a string
a = "Hello, World!"
print(len(a))

'''
String Methods
Python has a set of built-in methods that you can use on strings.
'''

# The strip() method removes any whitespace from the beginning or the end:
a = " Hello, World! "
print(a.strip())  # "Hello, World!"

# The lower() method returns the string in lower case:
a = "Hello, World!"
print(a.lower())  # hello, world!

# The upper() method returns the string in upper case:
a = "Hello, World!"
print(a.upper())  # HELLO, WORLD!

# The replace() method replaces a string with another string:
a = "Hello, World!"
print(a.replace("H", "J"))  # Jello, World!

# The split() method splits the string into substrings if it finds instances of the separator:
a = "Hello, World!"
print(a.split(","))  # ['Hello', ' World!']

# Learn more about String Methods with our
# [String Methods Reference](https://www.w3schools.com/python/python_ref_string.asp)


'''
Check String
To check if a certain phrase or character is present in a string, we can use the keywords in or not in.
'''

# Check if the phrase "ain" is present in the following text:

txt = "The rain in Spain stays mainly in the pain"
x = "ain" in txt
print(x)  # True

# Check if the phrase "ain" is NOT present in the following text:
txt = "The rain in Spain stays mainly in the plain"
x = "ain" not in txt
print(x)  # False


def my_function(x):
  return x[::-1]

my_txt = my_function("I wonder how this text looks like backwards")

print(my_txt)






