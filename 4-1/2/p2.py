def add(a, b):
    return a + b

def sub(a, b):
    return a - b

def mul(a, b):
    return a * b

def div(a, b):
    return a / b

def mod(a, b):
    return a % b

def printMsg():
    print("completed")

m = int(input())
n = int(input())

print("sum:", add(m, n))
print("difference:", sub(m, n))
print("product:", mul(m, n))
print("division:", div(m, n))
print("remainder:", mod(m, n))
printMsg()
