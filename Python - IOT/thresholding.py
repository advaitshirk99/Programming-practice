import numpy as np
import cv2
from skimage.color import rgb2gray
import matplotlib.pyplot as plt
img1=cv2.imread(r'C:\Users\adshi\Pictures\Saved Pictures\obama.jpg',0)
img=rgb2gray(img1)
ret,thresholding=cv2.threshold(img, 120, 255, cv2.THRESH_BINARY)
fig,axes=plt.subplots(1,2, figsize=(8,4))
ax=axes.ravel()
ax[0].imshow(img, cmap=plt.cm.gray)
ax[0].set_title("Gray Image")
ax[1].imshow(thresholding, cmap=plt.cm.gray)
ax[1].set_title("After Thresholding")
plt.show()
