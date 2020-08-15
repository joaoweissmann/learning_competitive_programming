import copy

# ler dado
n = int(input())
budgets = []
for i in range(n):
    budgets.append(int(input()))

# linear scan do menor para o maior, salvando best
best = 0

for k, bud in enumerate(sorted(budgets)):
    new_value = bud * (len(budgets)-k)
    if new_value > best:
        best = copy.copy(new_value)

print (best)