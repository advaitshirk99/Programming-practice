def main():
    n=int(input())
    l=[]
    res=0
    n1=[]
    n2=[]
    l=list(map(int,input().split()))
    l.sort(reverse=True)
    if n%2==0:
        for i in range(0,len(l),2):
            n1.append(l[i])
        for j in range(1,len(l),2):
            n2.append(l[j])
        n2=n2.sort()
    else:
        l.remove(l[-1])
        for i in range(0,len(l),2):
            n1.append(l[i])
        for j in range(1,len(l),2):
            n2.append(l[j])
        n2.sort()
    for i in range(len(n1)):
        if i==0:
            res=res+(n1[0]*n2[-1])
        else:
            res=res+(n1[i]*n2[-i])
    print(res)    

main()