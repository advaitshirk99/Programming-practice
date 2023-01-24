import matplotlib.pyplot as plt
import matplotlib.image as mpimg
from skimage.color import rgb2gray
posI=mpimg.imread(r"C:\Users\adshi\Pictures\Saved Pictures\obama.jpg")
grayI=rgb2gray(posI)
fig,axes=plt.subplots(1,2, figsize=(8,4))
ax=axes.ravel()
ax[0].imshow(posI, cmap=plt.cm.gray)
ax[0].set_title("Gray Image")
ax[1].imshow(grayI, cmap=plt.cm.gray)
ax[1].set_title("Gray Image")
plt.show()
