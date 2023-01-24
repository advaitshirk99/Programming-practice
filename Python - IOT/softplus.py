import numpy as np
import matplotlib.pyplot as plt
import math as m

def softplus(x):
    return m.log(1+np.exp(x))

series_in = [x for x in range(-10, 11)]
p=[softplus(x) for x in series_in]

plt.xlabel("x")
plt.ylabel("softplus(x)")
plt.plot(series_in,p)
plt.show()
