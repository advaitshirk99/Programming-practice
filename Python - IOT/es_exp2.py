import numpy as np
import math as m

def AND_gate(x1,x2,w1,w2):
    y=[]
    threshold=2
    for i in range(4):
        z_in=x1[i]*w1+x2[i]*w2
        if z_in<threshold:
            y.append(0)
        else:
            y.append(1)
    return y

x1=[0,0,1,1]
x2=[0,1,0,1]

print(AND_gate(x1,x2,1,1))

