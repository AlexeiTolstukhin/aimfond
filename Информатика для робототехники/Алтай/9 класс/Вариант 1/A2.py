def f1(s):
    v = 'eyuioaуеыаоэяию'
    c = 'qwrtpsdfghjklzxcvbnmйцкнгшщзхфвпрлджчсмтб'
    s1 = s2 = s3 = ''
    for a in s:
        if a.lower() in v:
            s1 += a
        elif a.lower() in c:
            s2 += a
        elif a != ' ':
            s3 += a
    return s1, s2, s3


def f2(a):
    s1, s2, s3 = a
    a1 = len(s1)
    a2 = len(s2)
    a3 = len(s3)
    if a1 > a2 and a1 > a3:
        print('Гласных больше согласных и технических символов')
    elif a2 > a1 and a2 > a3:
        print('Согласных больше гласных и технических символов')
    elif a3 > a2 and a3 > a1:
        print('Технических символов больше гласных и согласных')


s = input()
f2(f1(s))
