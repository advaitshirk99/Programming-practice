import matplotlib.pyplot as plt
import numpy as np

def tanh(x):
    t=(np.exp(x)-np.exp(-x))/(np.exp(x)+np.exp(-x))
    return t

z=np.arange(-5,5,0.01)
p=[tanh(x) for x in z]

plt.xlabel("x")
plt.ylabel("tanh(x)")
plt.plot(z,p)
plt.show()
