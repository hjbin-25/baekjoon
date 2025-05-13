def print_star(n):
    if n == 1:
        return ['*']
    
    stars = print_star(n // 3)
    line = []

    for star in stars:
        line.append(star * 3)
    for star in stars:
        line.append(star + " " * (n // 3) + star)
    for star in stars:
        line.append(star * 3)
    
    return line

n = int(input())
print("\n".join(print_star(n)))