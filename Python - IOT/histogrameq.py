import cv2
import numpy as np
import matplotlib.pyplot as plt
import matplotlib.image as mpimg
from skimage.color import rgb2gray
img=cv2.imread(r'C:\Users\adshi\Pictures\Saved Pictures\obama.jpg',0)
grayI=rgb2gray(img)
equ=cv2.equalizeHist(grayI)
histr, bins = np.histogram(grayI.flatten(),256,[0,256])
hister,binss = np.histogram(equ.flatten(),256,[0,256])
plt.subplot(2,2,1)
plt.title("Gray Image")
plt.imshow(grayI, cmap='gray')
plt.subplot(2,2,2)
plt.title("Histogram Equalisation")
plt.imshow(equ, cmap='gray')
plt.subplot(2,2,3)
plt.title("Original Histogram")
plt.hist(grayI.flatten(),256,[0,256], color = 'b')
plt.xlim([0,256]) 
plt.subplot(2,2,4)
plt.title("Enhanced Image Histogram")
plt.hist(equ.flatten(),256,[0,256], color = 'b')
plt.xlim([0,256])
plt.show() 