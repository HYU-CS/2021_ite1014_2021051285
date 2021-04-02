scores = {}

for i in range(3):
    k, v = input().split()

    scores[k] = v

name = input('Which student\'s score?\n')

if name in scores:
    print(name + '\'s score:', scores[name])
else:
    print(name, 'is not in the database.')