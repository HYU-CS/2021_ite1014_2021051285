wordDict = {}
wordList = input().split()

for i in wordList:
    if i in wordDict:
        wordDict[i] += 1
    else:
        wordDict[i] = 1

for k in wordDict.keys():
    print(k + ':', wordDict[k])