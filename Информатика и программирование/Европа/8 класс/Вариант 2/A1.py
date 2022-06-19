def min_s(s1, s2):
    for i in range(0, max(len(s1), len(s2))):
        if i >= len(s1):
            return s1
        if i >= len(s2):
            return s2
        if s1[i] < s2[i]:
            return s1
        if s1[i] > s2[i]:
            return s2
    return s1


def max_s(s1, s2):
    for i in range(0, max(len(s1), len(s2))):
        if i >= len(s1):
            return s2
        if i >= len(s2):
            return s1
        if s1[i] < s2[i]:
            return s2
        if s1[i] > s2[i]:
            return s1
    return s1


a = input()
b = input()
c = input()

max_ = max_s(a, max_s(b, c))
min_ = min_s(a, min_s(b, c))
print(max_, min_)
print(abs(len(max_) - len(min_)))
