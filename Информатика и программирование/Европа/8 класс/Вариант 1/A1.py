a = [int(input()), int(input()), int(input())]
min_s = 100000000000
min_n = 0
for x in a:
    t = x
    s = 0
    while t > 0:
        s += t % 10
        t //= 10
    if s < min_s:
        min_s = s
        min_n = x
print(min_n)
