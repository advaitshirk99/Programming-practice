import numpy as np
import matplotlib.pyplot as plt

def sigmoid(x):
 return 1/(1 + np.exp(-x))

x = np.linspace(-10, 10, 50)

p = sigmoid(x)

plt.xlabel("x") 
plt.ylabel("Sigmoid(x)")  
plt.plot(x, p) 
plt.show()


