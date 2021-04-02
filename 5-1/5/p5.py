import random

def getRandomString(length):
    return ''.join([chr(random.randint(ord('a'), ord('z'))) for _ in range(length)])

str = getRandomString(int(input('Input the length of the string : ')))
mutatedStr = str

print('Generated Cheese is \'' + str + '\'')
print('Mouse starts eating!!')

usedCh = []

for i in range(10):
    ch = getRandomString(1)
    while(ch in usedCh):
        ch = getRandomString(1)
    usedCh.append(ch)

    for i in range(len(mutatedStr)):
        if ch == mutatedStr[i]:
            mutatedStr = mutatedStr[0:i] + '_' + mutatedStr[i + 1:]

    print('Start Eating \'' + ch + '\'')
    
    print('Eaten alphabet of cheese :', end = '')
    for i in usedCh:
        print(' ' + i, end = '')
    print()
    
    print('Original cheese :', str)
    print('Current cheese status :', mutatedStr)
    print()

    status = True
    for i in mutatedStr:
        if i != '_':
            status = False
            break
    
    if status:
        break

print()
print('Finally remained Cheese Status :')

print('Eaten alphabet of cheese :', end = '')
for i in usedCh:
    print(' ' + i, end = '')
print()

print('Original cheese :', str)
print('Current cheese status :', mutatedStr)