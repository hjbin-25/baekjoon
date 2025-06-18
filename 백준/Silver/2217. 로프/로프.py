n = int(input())

arr = []
res = []

for _ in range(n):
    t = int(input())

    arr.append(t)

arr.sort()

for i in range(len(arr)):
    res.append(arr[i] * (n - i))

print(max(res))