n = int(input())

for i in range(n):
    
    s1 = input()
    s2 = input()
    
    d1 = {}
    d2 = {}
    for car in list(s1):
        if car in d1.keys():
            d1[car] += 1
        else:
            d1[car] = 1
    for car in list(s2):
        if car in d2.keys():
            d2[car] += 1
        else:
            d2[car] = 1
    
    res = 0
    for car in d1.keys():
        if car in d2.keys():
            res += abs(d1[car] - d2[car])
        else:
            res += d1[car]
    for car in d2.keys():
        if car in d1.keys():
            pass
        else:
            res += d2[car]
    print (res)