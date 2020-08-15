def fatorial(x):
    f = 1
    while x > 1:
        f *= x
        x -= 1
    return f

#t = int(input())
#for i in range(t):
#    n = int(input())
#    f = fatorial(n)
#    n_zeros = 0
#    while (f >= 10) and (f % 10 == 0):
#        n_zeros += 1
#        f = f // 10
#    print (n_zeros)

t = int(input())
for i in range(t):
    n = int(input())
    n_zeros = 0
    while n // 5 >= 1:
        n_zeros += n // 5
        n = n // 5
    print (n_zeros)