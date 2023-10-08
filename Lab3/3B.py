def is_feasible(arr, n, k, x):
    cnt = 0
    for i in range(n):
        cnt += (arr[i] + x - 1) // x
    return cnt <= k


def min_max_ghouls(arr, n, k):
    left, right = 1, max(arr)

    while left < right:
        mid = (left + right) // 2
        if is_feasible(arr, n, k, mid):
            right = mid
        else:
            left = mid + 1

    return left


n, k = map(int, input().split())
ghouls = list(map(int, input().split()))

result = min_max_ghouls(ghouls, n, k)
print(result)
