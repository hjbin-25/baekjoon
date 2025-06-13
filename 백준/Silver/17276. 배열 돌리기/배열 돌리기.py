import sys

testCase = int(sys.stdin.readline().strip())

for _ in range(testCase):
    size, angle = map(int, sys.stdin.readline().strip().split())
    angle %= 360

    if angle < 0:
        angle += 360
    
    angle //= 45

    board = [list(map(int, sys.stdin.readline().strip().split())) for __ in range(size)]

    for __ in range(angle):
        for i in range(size // 2 + 1):
            temp = board[i][i]

            board[i][i] = board[size // 2][i]
            board[size // 2][i] = board[size - i - 1][i]
            board[size - i - 1][i] = board[size - i - 1][size // 2]
            board[size - i - 1][size // 2] = board[size - i - 1][size - i - 1]
            board[size - i - 1][size - i - 1] = board[size // 2][size - i - 1]
            board[size // 2][size - i - 1] = board[i][size - i - 1]
            board[i][size - i - 1] = board[i][size // 2]
            board[i][size // 2] = temp

    for j in range(size):
        for k in range(size):
            sys.stdout.write(str(board[j][k]) + ' ')
        sys.stdout.write('\n')