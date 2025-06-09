import sys
import heapq

input = sys.stdin.readline

N = int(input())
min_heap = []
max_heap = []
problems = dict()

for _ in range(N):
    P, L = map(int, input().split())
    problems[P] = L
    heapq.heappush(min_heap, (L, P))
    heapq.heappush(max_heap, (-L, -P))

M = int(input())
for _ in range(M):
    parts = input().split()
    cmd = parts[0]

    if cmd == 'add':
        P, L = int(parts[1]), int(parts[2])
        problems[P] = L
        heapq.heappush(min_heap, (L, P))
        heapq.heappush(max_heap, (-L, -P))

    elif cmd == 'solved':
        P = int(parts[1])
        if P in problems:
            del problems[P]

    elif cmd == 'recommend':
        x = int(parts[1])
        if x == 1:
            while True:
                level, num = max_heap[0]
                level, num = -level, -num
                if num in problems and problems[num] == level:
                    print(num)
                    break
                else:
                    heapq.heappop(max_heap)
        else:
            while True:
                level, num = min_heap[0]
                if num in problems and problems[num] == level:
                    print(num)
                    break
                else:
                    heapq.heappop(min_heap)