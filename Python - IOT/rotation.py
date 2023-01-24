import cv2
import numpy as np
import matplotlib.pyplot as plt
from skimage.color import rgb2gray
img = cv2.imread(r'C:\Users\adshi\Pictures\Saved Pictures\obama.jpg',0)
g=rgb2gray(img)
rows,cols = g.shape
rotation_matrix= cv2.getRotationMatrix2D((cols/4,rows/2),65,1)
img_rotation = cv2.warpAffine(g,rotation_matrix,(cols,rows))
img_resize = cv2.resize(g,None,fx=0.4, fy=0.4, interpolation = cv2.INTER_CUBIC)
translation_matrix = np.float32([[1,0,100],[0,1,50]])
img_translation = cv2.warpAffine(g,translation_matrix,(cols,rows))
plt.subplot(2,2,1)
plt.title("Original Image")
plt.imshow(g, cmap='gray')
plt.subplot(2,2,2)
plt.title("Rotated Image")
plt.imshow(img_rotation, cmap='gray')
plt.subplot(2,2,3)
plt.title("Resized Image")
plt.imshow(img_resize, cmap='gray')
plt.subplot(2,2,4)
plt.title("Translated Image")
plt.imshow(img_translation, cmap='gray')
plt.show()