iofficers=int(input("Number of officers in the squad:"))
lst=[]
for i in range(0,iofficers):
    lstars = int(input("Enter Stars of individual officer:"))
    lst.append(lstars)  #adding elements in list
print(lst)
icount=0
for j in range(0,len(lst)):
    for k in range(0,len(lst)):
        if j==k:
            continue
        if lst[j]==lst[k]:
            lst[k]+=1
            icount+=1
print(lst)
print(icount)


