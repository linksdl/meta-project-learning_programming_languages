# !/usr/bin/env python
# -*- coding: utf-8 -*-

"""
@Project : asc-project-learning_python      
@File    : 11-Python Lists.py
@Author  : Billy Sheng 
@Contact : shengdl999links@gmail.com  
@Date    : 2020/10/15 2:16 下午
@Version  : 1.0.0
@License : Apache License 2.0
@Desc    : None
"""


'''
Python Collections (Arrays)
There are four collection data types in the Python programming language:

- List is a collection which is ordered and changeable. Allows duplicate members.
- Tuple is a collection which is ordered and unchangeable. Allows duplicate members.
- Set is a collection which is unordered and unindexed. No duplicate members.
- Dictionary is a collection which is unordered, changeable and indexed. No duplicate members.

When choosing a collection type, it is useful to understand the properties of that type. Choosing the right type for 
a particular data set could mean retention of meaning, and, it could mean an increase in efficiency or security.
'''

# List
# A list is a collection which is ordered and changeable. In Python lists are written with square b

# Create a List

thislist = ["apple", "banana", "cherry"]
print(thislist)


# Access Items
# You access the list items by referring to the index number:

# print the second item of the list
print(thislist[1])

# Negative Indexing
# Negative indexing means beginning from the end, -1 refers to the last item, -2 refers to the second last item etc.

print(thislist[-1])
# Range of Indexes
# You can specify a range of indexes by specifying where to start and where to end the range.
#
# When specifying a range, the return value will be a new list with the specified items.

# returen the third, fouth, and fith item:
thislist = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
print(thislist[2:5])

# Note: The search will start at index 2 (included) and end at index 5 (not included).
#
# Remember that the first item has index 0.

# By leaving out the start value, the range will start at the first item:

# This example returns the items from the beginning to "orange":

print(thislist[:4])

# By leaving out the end value, the range will go on to the end of the list:

# this example return the items from "cherry" and to the end
print(thislist[2:])


# Range of Negative Indexes
# Specify negative indexes if you want to start the search from the end of the list:

print(thislist[-4:-1])

# Change Item Value
# To change the value of a specific item, refer to the index number:

# Change the second item:
thislist = ["apple", "banana", "cherry"]
thislist[1] = "blackcurrant"
print(thislist)

# Loop Through a List
# You can loop through the list items by using a for loop:

# Print all items in the list, one by one:
for x in thislist:
    print(x)

# You will learn more about for loops in our Python For Loops Chapter.v

# Check if Item Exists
# To determine if a specified item is present in a list use the in keyword:

# Check if "apple" is present in the list:
if "apple" in thislist:
    print("Yes, 'apple' is in the fruit list")

# List Length
# To determine how many items a list has, use the len() function:

# print the number of items in the list:
print(len(thislist))

# Add Items
# To add an item to the end of the list, use the append() method:

# Using the append() method to append an item:
thislist.append("orange")
print(thislist)

# To add an item at the specified index, use the insert() method:
# thislist.index(1, "blueberry")
print(thislist)

# for i, x in enumerate(thislist):
#     print(i,x )


for i in range(len(thislist)):
        print(i, thislist[i])


print([i for i in range(10)])