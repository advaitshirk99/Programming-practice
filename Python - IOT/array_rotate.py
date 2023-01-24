import time
start=time.time()
a=[1,2,3,4,5,6,7]
def rotate(arr,d):
    j=0
    for i in range(d):
        a.append(a[i])
    while (j!=d):
        del a[0]
        j += 1
    print(a)
rotate(a,2)
end=time.time()
print("Time taken:", end-start)
