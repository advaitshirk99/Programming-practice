def selsort(num):
    for i in range(len(num)-1):
        mini=i
        for j in range(i,len(num)):
            if num[j]<num[mini]:
                mini=j
        temp=num[i]
        num[i]=num[mini]
        num[mini]=temp

try:
    lst = []
    print("Enter the numbers to be sorted: ")
    while True:
        lst.append(int(input()))
except:
    print("The list to be sorted: ",lst)
print(lst)
selsort(lst)
print("Sorted list: ",lst)