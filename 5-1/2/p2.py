import random

numList = []

for i in range(100):
    numList.append(random.randint(1, 1000))

for i in numList:
    print(str(i), end = ' ')

print('\n')

max = 0

for i in numList:
    if i > max:
        max = i

print('max value:', max)