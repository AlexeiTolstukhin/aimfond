n = int(input())
a = []
for i in range(n):
    a.append([])
    for j in range(i + 1):
        if j == 0 or j == i:
            a[i].append(1)
            print('1'.rjust(6), end=' ')
        else:
            a[i].append(a[i - 1][j - 1] + a[i - 1][j])
            print(f'{a[i - 1][j - 1] + a[i - 1][j]}'.rjust(6), end=' ')
    print()
