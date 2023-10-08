n = int(input())
m = int(input())
l1 = input().split()
l2 = input().split()
res = []
for i in range(n):
    for j in range(m):
        if int(l1[i]) == int(l2[j]) and (int(l1[i]) not in res):
            res.append(int(l1[i]))
for i in res:
    print(i, end=" ")