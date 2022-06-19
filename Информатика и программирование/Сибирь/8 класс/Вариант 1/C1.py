n = int(input())
a = dict()
gpa_p = dict()
gpa_s = dict()
b = set()
c = set()
for i in range(n):
    s = input().split(' ')
    b.add(s[2])
    c.add(s[0] + ' ' + s[1])
    if not (a.get(s[0] + ' ' + s[1])):
        a[s[0] + ' ' + s[1]] = dict()
    a[s[0] + ' ' + s[1]].update({s[2]: s[3]})
    if not (gpa_p.get(s[0] + ' ' + s[1])):
        gpa_p[s[0] + ' ' + s[1]] = 0
    gpa_p[s[0] + ' ' + s[1]] += int(s[3])
    if not (gpa_s.get(s[2])):
        gpa_s[s[2]] = 0
    gpa_s[s[2]] += int(s[3])

# print(max(b), max(c), a, gpa_p, gpa_s)
print(''.ljust(len(max(c))), end=' ')
for i in b:
    print(i, end=' ')
print()
for i in c:
    print(i.ljust(len(max(c))), end=' ')
    for j in b:
        print(a[i][j].ljust(len(j)), end=' ')
    print('%.1f' % (gpa_p[i] / len(b)))
print(''.ljust(len(max(c))), end=' ')
for i in b:
    print(('%.1f' % (gpa_s[i] / len(b))).ljust(len(i)), end=' ')
