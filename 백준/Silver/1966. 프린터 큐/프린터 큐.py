import sys

t = int(sys.stdin.readline().strip())

result = []

for i in range(t):
    n, m = map(int, sys.stdin.readline().strip().split())

    queue = list(map(int, sys.stdin.readline().strip().split()))

    cnt = 0
    index = m

    while queue:
        if max(queue) == queue[0]:
            queue.pop(0)
            cnt += 1
            if index == 0:
                result.append(cnt)
                break
            else:
                index -= 1
        
        else:
            queue.append(queue.pop(0))
            if index == 0:
                index = len(queue) - 1
            else:
                index -= 1

for i in result:
    sys.stdout.write(str(i) + '\n')