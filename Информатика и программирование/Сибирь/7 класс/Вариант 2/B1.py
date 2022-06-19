n, k = list(map(int, input().split(' ')))
s = [False] * n
l = 0
i = -1
while False in s:
    j = 0
    while j < k:
        i += 1
        i %= n
        if s[i]:
            continue
        j += 1
    i %= n
    while s[i]:
        i += 1
        i %= n
    s[i] = True
    l = i
print(l + 1)
