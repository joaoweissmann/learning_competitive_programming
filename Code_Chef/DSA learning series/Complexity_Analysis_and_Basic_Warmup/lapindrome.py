n = int(input())

for i in range(n):
    
    s = input()
    
    mid = len(s) // 2
    if len(s) % 2 == 0:
        half1 = s[:mid]
        half2 = s[mid:]
    else:
        half1 = s[:mid]
        half2 = s[mid+1:]
    d1 = {}
    d2 = {}
    
    for car in half1:
        if car in d1.keys():
            d1[car] += 1
        else:
            d1[car] = 1
    for car in half2:
        if car in d2.keys():
            d2[car] += 1
        else:
            d2[car] = 1
    
    lapindrome = True
    for car in d1.keys():
        if car in d2.keys():
            if d1[car] != d2[car]:
                lapindrome = False
        else:
            lapindrome = False
    for car in d2.keys():
        if car in d1.keys():
            if d1[car] != d2[car]:
                lapindrome = False
        else:
            lapindrome = False
    if lapindrome:
        print ('YES')
    else:
        print ('NO')