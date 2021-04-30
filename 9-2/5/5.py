def combination(n, r):
    if n == r:
        return 1
    elif r == 1:
        return n
    else:
        return combination(n - 1, r - 1) + combination(n - 1, r)

inputList = list(map(int, input().split()))

print(combination(inputList[0], inputList[1]))



