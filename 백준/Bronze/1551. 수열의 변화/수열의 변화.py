import sys

N, K = map(int, sys.stdin.readline().strip().split())

arr = list(map(int, sys.stdin.readline().strip().split(',')))

for _ in range(K):
    for i in range(0, N - _, 1):
        if i + 1 < N - _:
            arr[i] = arr[i + 1] - arr[i]
        else:
            arr.pop()

for i in range(len(arr)):
    sys.stdout.write(str(arr[i]))

    if i + 1 < len(arr):
        sys.stdout.write(",")
    else:
        sys.stdout.write("\n")