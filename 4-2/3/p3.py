def printStarDia(n):
    def drawLine(maxStarCount, starCount):
        for j in range(maxStarCount, starCount, -1):
            print(" ", end="")                      # maxStartCount - starCount 개의 공백

        for j in range(0, 2 * starCount - 1):       # 0-0 0-2 0-4 0-6 0-8 0-10 ... => *, * *, * * *, * * * *, ...
            if j % 2 == 0:                          # 짝수번째는 별
                print("*", end="")
            else:                                   # 홀수번째는 공백
                print(" ", end="")

    for i in range(1, n + 1):                       # 1 부터 n까지 루프
        drawLine(n, i)
        print()
    
    for i in range(n, 0, -1):                       # n 부터 1까지 루프
        drawLine(n, i)
        print()

printStarDia(int(input()))