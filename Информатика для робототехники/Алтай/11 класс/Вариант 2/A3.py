w = 'ЗЕРКАЛО'
a = set()
for c1 in w:
    for c2 in w:
        for c3 in w:
            for c4 in w:
                for c5 in w:
                    for c6 in w:
                        s = c1 + c2 + c3 + c4 + c5 + c6
                        if s.count('К') > 4 or s.count('З') > 1 or s.count('Е') > 1 or s.count('Р') > 1 or s.count('А') > 1 or s.count('Л') > 1 or s.count('О') > 1:
                            continue
                        a.add(s)
print(len(a))
for x in a:
    print(x)
