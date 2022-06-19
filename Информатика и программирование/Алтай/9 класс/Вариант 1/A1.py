from collections import deque

s = input().split(' ')
a = deque()
for i in s:
    if i == '+':
        n = a.pop()
        m = a.pop()
        a.append(m + n)
    elif i == '-':
        n = a.pop()
        m = a.pop()
        a.append(m - n)
    elif i == '*':
        n = a.pop()
        m = a.pop()
        a.append(m * n)
    elif i == '/':
        n = a.pop()
        m = a.pop()
        a.append(m / n)
    else:
        a.append(int(i))
print(a.pop())
