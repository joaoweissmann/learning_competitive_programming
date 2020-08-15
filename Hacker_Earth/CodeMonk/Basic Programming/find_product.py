n = int(input())

prod = 1
entrada = input()
for char in entrada.split():
    prod *= int(char)

print (prod % (10**9 + 7))