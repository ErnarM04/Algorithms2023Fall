n = int(input())
res = []
name = "Timur"
for i in range(n):
    size = int(input())
    s = input()
    res.append("YES")
    for x in name:
        count = s.count(x)
        if count != 1:
            res[i] = "NO"
            break
for i in res:
    print(i)