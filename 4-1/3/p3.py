def addTotal(n):
    return n * (n + 1) // 2

gMul = 1
def mulTotal(n):
    global gMul

    for i in range(1, n + 1):
        gMul *= i

n = int(input())

mulTotal(n)

print("addTotal():", addTotal(n))
print("gMul:", gMul)