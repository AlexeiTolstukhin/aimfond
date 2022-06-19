a = [int(input()), int(input()), int(input())]
b = [int(input()), int(input()), int(input())]
a = sorted(a)
b = sorted(b)
g = l = e = 0
for i in range(0, 3):
    if a[i] > b[i]:
        g += 1
    elif a[i] < b[i]:
        l -= 1
    else:
        e += 1
if e == 3:
    print('Коробки одинаковые')
elif l == 0:
    print('Первая коробка больше второй')
elif g == 0:
    print('Первая коробка меньше второй')
else:
    print('Невозможно вложить коробки друг в друга')
