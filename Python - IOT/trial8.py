import math
T=int(input())
for i in range(T):
    N, K=[int(s) for s in input().split(" ")]
    string=input()
    goodness_score=0
    bad_score=0
    min_req=0
    for j in range(0,int(math.floor(N/2))):
        if string[j]!=string[N-j-1]:
            goodness_score +=1
    min_req=K-goodness_score
    print("Case #{}: {}".format(i+1, min_req))
'''
        if goodness_score==K:
            print("Case #{}: {}".format(i+1, min_req))
            break
        if (goodness_score!=K and string[j]==string[N-j-1]):
            min_req +=1
'''
