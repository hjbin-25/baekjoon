import sys
from collections import Counter

string = sys.stdin.readline().strip()
counter = Counter(string)
length = len(string)

sorted_chars = sorted(counter.keys())

result = [""] * length
left = 0
right = length - 1
middle_char = ""
isAble = True

for char in sorted_chars:
    count = counter[char]
    if count % 2 == 1:
        if middle_char == "":
            middle_char = char
        else:
            isAble = False
            break

    for _ in range(count // 2):
        result[left] = char
        result[right] = char
        left += 1
        right -= 1

if isAble:
    if length % 2 == 1:
        result[length // 2] = middle_char
    sys.stdout.write("".join(result) + "\n")
else:
    sys.stdout.write("I'm Sorry Hansoo\n")