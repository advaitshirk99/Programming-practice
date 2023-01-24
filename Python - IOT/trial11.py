def busstop(input1, input2):
    for i in range(input1-1):
        for j in range(i+1,input1):
            if i==0:
                input2[j] -= input2[i]
            if(i!=0):
                if(j%i==0):
                    input2[j] -= input2[i]
    return input2
busstop(3,[1,2,3])
                
                
                
