from itertools import combinations
T=int(input())
for k in range(T):
    x, y, s= input().split()
    x=int(x)
    y=int(y)
    cost1=0
    cost2=0
    ts=s[:]
    for i in range(len(s)-1):
        if s[0]=='?' and s[1]=='?':
            s='J'+s[1:]
            ts='C'+s[1:]
        if i!=0 and s[i-1]!='?':
            s=s[:i]+s[i-1]+s[i+1:]
            ts=ts[:i]+ts[i-1]+ts[i+1:]
        if s[-1]=='?':
            s=s[:-1]+s[-2]
            ts=ts[:-1]+ts[-2]
        if s[i]=='J' and s[i+1]=='C':
            cost1 += y
        if s[i]=='C' and s[i+1]=='J':
            cost1 += x
        if ts[i]=='J' and ts[i+1]=='C':
            cost2 += y
        if ts[i]=='J' and ts[i+1]=='C':
            cost1 += x
        if cost1>cost2:
            final_cost=cost2
        else:
            final_cost=cost1

    print('Case #{}: {}'.format(k+1, final_cost))
        
            
            

                
                
            
            
                
                    
                
                
                
