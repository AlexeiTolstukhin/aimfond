v = 'уеыаоэяию'
c = 'йцкнгшщзхфвпрлджчсмтб'
s = input()
n = m = 0
for i in s:
    if i.lower() in v:
        n += 1
    elif i.lower() in c:
        m += 1
print(n, m)
