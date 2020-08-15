t = int(input())
for i in range(t):
    games = int(input())
    for g in range(games):
        entrada = input()
        init_state, n_coins, guess = map(int, entrada.split())
        # init_state = 1 means heads, else tails, at beginning 
        # guess = 1 means the program needs to compute the #heads, else #tails, at the end
        # n_coins = number of rounds played
        heads = n_coins // 2
        tails = n_coins // 2
        if n_coins % 2 != 0:
            if init_state == 1:
                tails += 1
            else:
                heads += 1
        if guess == 1:
            print (heads)
        else:
            print (tails)