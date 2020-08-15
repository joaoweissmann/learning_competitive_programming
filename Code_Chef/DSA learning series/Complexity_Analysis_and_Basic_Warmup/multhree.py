t = int(input())
for i in range(t):
    entrada = input()
    k, d0, d1 = map(int, entrada.split())
    A = [d0, d1]
    acum = d0 + d1
    for _ in range(2, k):
        digit = acum % 10
        if digit == 0 or digit == 6:
            break
        A.append(digit)
        acum += digit
    if digit != 0:
        digits_missing = k - len(A)
        mult = digits_missing // 4
        remaining = digits_missing % 4
        if remaining == 1: 
            acum += 6
        if remaining == 2:
            acum += 8
        if remaining == 3:
            acum += 12
        acum += mult*20
    if acum % 3 == 0:
        print ("YES")
    else:
        print ("NO")