a, b = input().split()

c = ''
d = ''

for i in range(len(a) - 1, -1, -1):
    c += a[i]
for i in range(len(b) - 1, -1, -1):
    d += b[i]

c = int(c)
d = int(d)

print(max(c, d))