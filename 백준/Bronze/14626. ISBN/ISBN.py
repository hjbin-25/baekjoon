code = input()
star_index = code.index('*')

for i in range(10):
    temp = list(code)
    temp[star_index] = str(i)

    num = 0
    for idx in range(13):
        digit = int(temp[idx])
        if idx % 2 == 0:
            num += digit
        else:
            num += 3 * digit

    if num % 10 == 0:
        print(i)
        break
