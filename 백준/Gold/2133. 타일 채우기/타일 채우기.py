tileQuantity = int(input())

dp = [0 for _ in range(31)]
dp[0] = 1

for i in range(2, tileQuantity + 1, 2):
    dp[i] = dp[i - 2] * 3

    for j in range(i - 4, -1, -2):
        dp[i] += dp[j] * 2

print(dp[tileQuantity])