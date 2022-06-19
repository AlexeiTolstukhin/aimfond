s = input()
n = '1234567890'
l = 'qwertyuiopasdfghjklzxcvbnmйцукенгшщзхъфывапролджэячсмитьбю'
a = b = c = 0
for i in s:
    if i.lower() in l:
        a += 1
    elif i in n:
        b += 1
    elif i == ' ':
        c += 1
print(a, b, c)
