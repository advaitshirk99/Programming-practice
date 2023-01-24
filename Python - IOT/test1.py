def CheckNumber(n):
    d=n
    total=0
    while (n>0):
        dig=n%10
        total= total+dig
        n=n//10
    if (d%total==0):
        print(d/total)
    else:
        print('0')
CheckNumber(42)


        