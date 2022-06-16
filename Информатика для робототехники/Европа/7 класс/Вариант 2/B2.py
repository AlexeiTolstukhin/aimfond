s = input()
i = int(input()) - 1
j = int(input()) - 1
a = s[:i] + ''.join(reversed(s[i:j+1])) + s[j+1:]
print(a)
