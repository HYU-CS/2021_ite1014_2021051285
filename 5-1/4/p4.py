import random

def getRandomString(leng):
    return ''.join([chr(random.randint(ord('a'), ord('z'))) for _ in range(leng)])

n = int(input())

print(getRandomString(n))