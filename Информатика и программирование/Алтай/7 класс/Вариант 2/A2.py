n = list(map(int, input()))
s = n[0] + n[2] + n[4]
d = 2 * max(n[0], n[2], n[4]) - s
print(s * d)
