import numpy as np
import matplotlib.pyplot as plt
import math as m

def linear(x):
  return x

def sigmoid(x):
 return 1/(1 + np.exp(-x))

def tanh(x):
    t=(np.exp(x)-np.exp(-x))/(np.exp(x)+np.exp(-x))
    return t

def parametric_relu(x):
    return a*(x) if x<0 else x

def softplus(x):
    return m.log(1+np.exp(x))

#For Linear function
x=np.linspace(-10,10,50)
op_linear=linear(x)
plt.subplot(2,3,1)
plt.xlabel("x")
plt.ylabel("linear(x)")
plt.plot(x,op_linear)

#For Sigmoid function
x=np.linspace(-10,10,50)
op_sigmoid=sigmoid(x)
plt.subplot(2,3,2)
plt.xlabel("x")
plt.ylabel("sigmoid(x)")
plt.plot(x,op_sigmoid)

#For hyperbolic tan function
in_tanh=np.arange(-5,5,0.01)
op_tanh=[tanh(x) for x in in_tanh]
plt.subplot(2,3,3)
plt.xlabel("x")
plt.ylabel("tanh(x)")
plt.plot(in_tanh,op_tanh)

#For Parametric ReLU function
series_in = [x for x in range(-10, 11)]
a=0.05 #parameter
op_prelu=[parametric_relu(x) for x in series_in]
plt.subplot(2,3,4)
plt.xlabel("x")
plt.ylabel("prelu(x)")
plt.plot(series_in,op_prelu)

#For Softplus function
series_in = [x for x in range(-10, 11)]
op_softplus=[softplus(x) for x in series_in]
plt.subplot(2,3,5)
plt.xlabel("x")
plt.ylabel("softplus(x)")
plt.plot(series_in,op_softplus)
plt.tight_layout(pad=1.5)
plt.show()
