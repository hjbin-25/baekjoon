d = int(input())

car = list(map(int, input().split()))

cnt = 0

for n in car:
    if n == d:
        cnt += 1

print(cnt)