import numpy as np
a=[1,2,3,4]
b=[[1,2,3,4],[5,6,7,8]]
print(np.dot(a,np.array(b).T))
print(np.dot(b,a))
#print(np.shape(a),np.shape(b))
