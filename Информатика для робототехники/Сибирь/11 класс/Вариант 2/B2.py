n = int(input())
a = [[] for i in range(n)]
for i in range(0, n):
    s = input().split(' ')
    if s[0] == '':
        a[i] = []
        continue
    a[i] = [int(x) - 1 for x in s]

b = [[] for i in range(n)]
for i in range(0, n):
    for x in a[i]:
        b[x].append(i + 1)

print(len(b))
for l in b:
    print(" ".join(map(str, l)))
