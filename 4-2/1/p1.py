def printLine(n):
    s = "1"

    for i in range(2, n + 1):
        s += " " + str(i)
    
    print(s)

n = int(input())

for i in range(1, n + 1, 1):
    printLine(i)
for i in range(n, 0, -1):
    printLine(i)