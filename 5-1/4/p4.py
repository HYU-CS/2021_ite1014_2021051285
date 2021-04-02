import random

def getRandomString(length):
    return ''.join([chr(random.randint(ord('a'), ord('z'))) for _ in range(length)])

n = int(input())

print(getRandomString(n))