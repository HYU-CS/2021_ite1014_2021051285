def printLine(n):

    s = "1"

    for i in range(2, n + 1):
        s += " " + str(i) # "1", "1 2", "1 2 3", "1 2 3 4", ...
    
    print(s)

n = int(input())

for i in range(1, n + 1, 1):
    printLine(i)
for i in range(n, 0, -1):
    printLine(i)