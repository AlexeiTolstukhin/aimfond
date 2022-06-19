n, m = map(int, input().split(' '))
a = []
c = 1
for i in range(n):
    a.append([0] * m)
    for j in range(m):
        a[i][j] = c
        c += 1
    if i + 1 >= n:
        continue
    for j in range(m - 1, 0):
        a[i + 1][j] = c
        c += 1
for i in a:
    for j in i:
        print(str(j).rjust(4), end=' ')
    print()
