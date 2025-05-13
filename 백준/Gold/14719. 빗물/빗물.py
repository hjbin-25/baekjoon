import sys

h, w = map(int, sys.stdin.readline().strip().split())

block_stack = list(map(int, sys.stdin.readline().strip().split()))

board = [0 for _ in range(w)]

for i in range(w):
    board[i] = block_stack[i]

cnt = 0

for i in range(1, w - 1):
    left = max(board[:i])
    right = max(board[i + 1:])

    min_height = min(left, right)

    if min_height > board[i]:
        cnt += min_height - board[i]

sys.stdout.write(str(cnt) + '\n')