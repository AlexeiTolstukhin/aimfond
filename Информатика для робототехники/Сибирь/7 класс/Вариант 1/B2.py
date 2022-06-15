def main():
    s = input()
    s = s.replace(' ', '')
    for i in range(len(s)):
        if s[i] != s[len(s) - 1 - i]:
            print("no")
            return
    print('yes')
    return


main()
