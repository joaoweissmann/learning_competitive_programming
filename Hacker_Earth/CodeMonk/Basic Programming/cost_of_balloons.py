t = int(input())

for i in range(t):
    entrada = input()
    cost1, cost2 = int(entrada.split()[0]), int(entrada.split()[1])
    n_particip = int(input())
    solved_p1 = 0
    solved_p2 = 0
    for k in range(n_particip):
        entrada = input()
        solved_p1 += int(entrada.split()[0])
        solved_p2 += int(entrada.split()[1])
    solvs = sorted([solved_p1, solved_p2])
    costs = sorted([cost1, cost2])
    print (costs[1]*solvs[0] + costs[0]*solvs[1])