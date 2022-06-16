import itertools
w = 'ОДЕКОЛОН'
a = set()
for i in itertools.permutations(w, len(w)):
    s = ''.join(i)
    if 'ОО' in s:
        continue
    a.add(s)
print(len(a))
for x in a:
    print(x)
