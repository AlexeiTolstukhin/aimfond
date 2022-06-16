import itertools
w = 'АКАДЕМИК'
v = ['А', 'Е', 'И']
c = ['К', 'Д', 'М', 'К']
a = set()
for i in itertools.permutations(w, len(w)):
    s = ''.join(i)
    if s[0] in v:
        if s[1] in v or s[2] in c or s[3] in v or s[4] in c or s[5] in v or s[6] in c or s[7] in v:
            continue
    else:
        if s[1] in c or s[2] in v or s[3] in c or s[4] in v or s[5] in c or s[6] in v or s[7] in c:
            continue
    a.add(s)
print(len(a))
for x in a:
    print(x)
