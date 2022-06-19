c = []
s = input()
m = 0
while not (s in c):
    c.append(s)
    m += 1
    s = input()
if m % 2 == 0:
    print('ДИМА')
else:
    print('ВОВА')
