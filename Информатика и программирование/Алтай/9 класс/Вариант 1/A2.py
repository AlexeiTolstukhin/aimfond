a = [int(input()), int(input()), int(input())]
b = [int(input()), int(input())]
a = sorted(a)
b = sorted(b)
f = True
for i in range(0, len(b)):
    if a[i] > b[i]:
        f = False
if f:
    print('YES')
else:
    print('NO')
