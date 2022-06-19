a = input()
b = input()
c = input()
s = [a, b, c]
s = sorted(s)
if len(s[2]) - len(s[1]) == len(s[1]) - len(s[0]):
    for i in s:
        print(i.rjust(len(s[2])))
