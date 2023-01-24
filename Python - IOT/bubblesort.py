def sort(num):
    for i in range(len(num)-1,0, -1):
        for j in range(i):
            if num[j]>num[j+1]:
                temp=num[j]
                num[j]=num[j+1]
                num[j+1]=temp
list=[0,6,8,2,3,9,1,3,5,7]
sort(list)
print(list)