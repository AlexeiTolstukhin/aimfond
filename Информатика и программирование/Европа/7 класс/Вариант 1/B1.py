n = int(input())
r = [0] * n
b = 10000000
i_b = 0
for i in range(0, n):
    r[i] = int(input())
    if r[i] < b:
        b = r[i]
        i_b = i
m = b // 60
s = b % 60
print(f'{m // 10}{m % 10}:{s // 10}{s % 10}')
for i in range(0, n):
    if i == i_b:
        continue
    print(f'+{r[i] - b}')
