e = 'qwertyuiopasdfghjklzxcvbnm'
r = 'йцукенгшщзхъфывапролджэячсмитьбю'
s = input()
e_l = r_l = 0
for i in s:
    if i.lower() in e:
        e_l += 1
    elif i.lower() in r:
        r_l += 1
print(r_l, e_l)
