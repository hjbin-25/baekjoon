import sys

def isPrime(n):
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

def isPalindrome(n):
    return n == n[::-1]

n = int(sys.stdin.readline().strip())

while True:
    if isPrime(n) and isPalindrome(str(n)):
        sys.stdout.write(str(n) + '\n')
        break
    n += 1