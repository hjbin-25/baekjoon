import sys

inputValue = sys.stdin.readline().strip()

variedValueList = [0]
signList = list()
result = 0

for char in inputValue:
    if char != "+" and char != '-':
        variedValueList[-1] *= 10
        variedValueList[-1] += int(char)
    else:
        signList.append(char)
        variedValueList.append(0)

for _ in range(len(signList)):
    for i in range(len(signList)):
        if i + 1 < len(signList):
            if signList[i] == '-' and signList[i + 1] == '+':
                variedValueList[i + 1] += variedValueList[i + 2]
                variedValueList.pop(i + 2)
                signList.pop(i + 1)

result = variedValueList[0]
for i in range(len(signList)):
    if signList[i] == '-':
        result -= variedValueList[i + 1]
    else:
        result += variedValueList[i + 1]

sys.stdout.write(str(result) + '\n')