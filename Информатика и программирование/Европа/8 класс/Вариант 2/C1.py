n = int(input())
com = [''] * n
score = dict.fromkeys(range(n), 0)
for i in range(n):
    s = input().split(' ')
    if s[-1] == 'OT':
        a, b, c = s[:-1]
        a = int(a)
        b = int(b)
        c = c.split(':')
        if int(c[0]) > int(c[1]):
            score[a - 1] += 2
            score[b - 1] += 1
            com[a - 1] += f'{c[0]}:{c[1]} ({2}) '
            com[b - 1] += f'{c[1]}:{c[0]} ({1}) '
        else:
            score[a - 1] += 1
            score[b - 1] += 2
            com[a - 1] += f'{c[0]}:{c[1]} ({1}) '
            com[b - 1] += f'{c[1]}:{c[0]} ({2}) '
    else:
        a, b, c = s
        a = int(a)
        b = int(b)
        c = c.split(':')
        if int(c[0]) > int(c[1]):
            score[a - 1] += 3
            com[a - 1] += f'{c[0]}:{c[1]} ({3}) '
            com[b - 1] += f'{c[1]}:{c[0]} ({0}) '
        else:
            score[b - 1] += 3
            com[a - 1] += f'{c[0]}:{c[1]} ({0}) '
            com[b - 1] += f'{c[1]}:{c[0]} ({3}) '
score = reversed(sorted([(score[i], i) for i in range(n)]))
for i in score:
    print(i[1] + 1, com[i[1]][:-1], i[0])
