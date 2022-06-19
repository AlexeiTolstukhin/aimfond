c_1 = []
c_2 = []
s = input()
m = 0
d = 0
v = 0
while not (s in c_2):
    if s == 'PASS':
        if m % 2 == 0:
            v -= 2
        else:
            d -= 2
    elif s in c_1:
        if m % 2 == 0:
            v -= 5
        else:
            d -= 5
        c_2.append(s)
    else:
        if m % 2 == 0:
            v += 1
        else:
            d += 1
        c_1.append(s)
    m += 1
    v = max(0, v)
    d = max(0, d)
    s = input()
if v < d:
    print('ДИМА')
else:
    print('ВОВА')
