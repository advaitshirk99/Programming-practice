import cv2 
import numpy as np
import matplotlib.pyplot as plt

I=cv2.imread(r'C:\Users\adshi\Pictures\Saved Pictures\obama.jpg')
b,g,r=cv2.split(I)
img_col=cv2.merge([r,g,b])
Ig=cv2.cvtColor(I,cv2.COLOR_BGR2GRAY)
array=np.ones((5,5))
f=array/25
a=cv2.filter2D(Ig,-1,f)
high=np.array(([-1,-1,-1],[-1,8,-1],[-1,-1,-1]),dtype='int')
g=high/9
b=cv2.filter2D(Ig,-1,g)

plt.subplot(2,2,1)
plt.title("Original Image")
plt.imshow(img_col,cmap='gray')
plt.subplot(2,2,2)
plt.title("Gray Image")
plt.imshow(Ig,cmap='gray')
plt.subplot(2,2,3)
plt.title("Image with High Pass Filter")
plt.imshow(b,cmap='gray')
plt.subplot(2,2,4)
plt.title("Image with Low Pass Filter")
plt.imshow(a,cmap='gray')
plt.show()