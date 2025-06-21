testCase = int(input())
arr = list(map(int, input().split()))

result = [-1] * testCase
stack = []

for i in range(testCase):
    while stack and arr[stack[-1]] < arr[i]:
        idx = stack.pop()
        result[idx] = arr[i]
    stack.append(i)

print(*result)