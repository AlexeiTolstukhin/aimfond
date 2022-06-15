a = input().split(' ')
maxL = 0
s = ''
for i in range(len(a)):
    if len(a[i]) > maxL:
        maxL = len(a[i])
        s = a[i]
print(s, maxL)
