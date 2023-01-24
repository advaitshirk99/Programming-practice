import matplotlib.pyplot as plt
import numpy as np

def linear(x):
  return x

x=np.linspace(-10,10,50)
p=linear(x)

plt.xlabel("x")
plt.ylabel("Linear(x)")
plt.plot(x,p)
plt.show()
