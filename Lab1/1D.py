def isPalindrome(s):
    if s == s[::-1]:
        return True
    return False
s = input()
a = 0
for i in range(len(s)):
    for j in range(i+1, len(s)):
        if isPalindrome(s[i:j+1]) and (len(s[i:j+1]) % 2 ==0):
            if isPalindrome(s[:i] + s[j+1:])  and (len(s[:i] + s[j+1:]) % 2 ==0):
                print("YES")
                a += 1
                break
    if a == 1: break
if a != 1:
    print("NO")