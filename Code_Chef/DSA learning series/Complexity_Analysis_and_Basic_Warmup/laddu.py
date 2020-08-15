t = int(input())
for i in range(t):
    entrada = input()
    n, local = int(entrada.split()[0]), entrada.split()[1]
    laddus = 0
    for a in range(n):
        entrada = input()
        tipo = entrada.split()[0]
        if tipo == 'CONTEST_WON':
            rank = int(entrada.split()[1])
            laddus += 300 + max(0, 20-rank)
        elif tipo == 'TOP_CONTRIBUTOR':
            laddus += 300
        elif tipo == 'BUG_FOUND':
            severity = int(entrada.split()[1])
            laddus += severity
        elif tipo == 'CONTEST_HOSTED':
            laddus += 50
    if local == 'INDIAN':
        print (laddus // 200)
    elif local == 'NON_INDIAN':
        print (laddus // 400)