import numpy as np
import matplotlib.pyplot as plt

def leaky_relu(x):
    return 0.05*(x) if x<0 else x

series_in = [x for x in range(-10, 11)]
p=[leaky_relu(x) for x in series_in]

plt.xlabel("x")
plt.ylabel("Leaky Relu(x)")
plt.plot(series_in,p)
plt.show()
