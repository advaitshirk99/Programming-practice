import matplotlib.pyplot as plt
import numpy as np

def relu(x):
    return max(0,x)

series_in = [x for x in range(-10, 11)]
p=[relu(x) for x in series_in]

plt.xlabel("x")
plt.ylabel("Relu(x)")
plt.plot(series_in,p)
plt.show()

