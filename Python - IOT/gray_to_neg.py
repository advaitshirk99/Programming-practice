import matplotlib.image as mpimg
import matplotlib.pyplot as plt
import numpy as np
img=mpimg.imread(r"C:\Users\adshi\Pictures\Saved Pictures\obama.jpg")
x=img[:,:,0] #image slicing in 2D
y=np.shape(x)
z=np.zeros(y)
z=255-x
fig, axes=plt.subplots(1,2, figsize=(8,4))
ax=axes.ravel()
ax[0].imshow(x, cmap=plt.cm.gray)
ax[0].set_title("Gray Image")
ax[1].imshow(z, cmap=plt.cm.gray)
ax[1].set_title("Negative Image")
plt.show()
