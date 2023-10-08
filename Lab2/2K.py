from collections import defaultdict
def first_non_repeating(stream):
    char_count = defaultdict(int)
    result = []

    for char in stream:
        char_count[char] += 1

        non_repeating_char = None
        for c in stream:
            if char_count[c] == 1:
                non_repeating_char = c
                break

        if non_repeating_char:
            result.append(non_repeating_char)
        else:
            result.append(-1)

    return result

T = int(input())

for _ in range(T):
    N = int(input())
    stream = input().split()
    result = first_non_repeating(stream)
    print(" ".join(map(str, result)))