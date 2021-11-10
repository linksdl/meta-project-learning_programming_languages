def sum(*nums):
    result = 0
    for n in nums :
        result += n
    return result

sum = sum(10,90)
print(sum)