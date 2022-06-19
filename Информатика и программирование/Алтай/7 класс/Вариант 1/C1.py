n = int(input())
t = n + 1
a = []
while t != n:
    s = input()
    if s == "HELP":
        print(" ".join(map(str, a)))
        continue
    t = int(s)
    if t in a:
        print("TRY ANOTHER")
        continue
    a.append(t)
p = len(a) - 1
n = int(input())
t = n + 1
a = []
while t != n:
    s = input()
    if s == "HELP":
        print(" ".join(map(str, a)))
        continue
    t = int(s)
    if t in a:
        print("TRY ANOTHER")
        continue
    a.append(t)
v = len(a) - 1
if p < v:
    print("ПЕТЯ")
else:
    print("ВАСЯ")
