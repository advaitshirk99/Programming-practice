import cv2
import numpy as np
import matplotlib.pyplot as plt
I=cv2.imread(r"C:\Users\adshi\Pictures\Saved Pictures\obama.jpg")
g=cv2.cvtColor(I, cv2.COLOR_BGR2GRAY)
Ic=np.fft.fft2(g)
j=abs(Ic)
h=np.fft.fftshift(Ic)
k=abs(h)
l=np.fft.ifftshift(h)
m=np.fft.ifft2(l)
o=abs(m)
plt.subplot(2,2,1)
plt.title("Gray Image")
plt.imshow(g,cmap='gray')
plt.subplot(2,2,2)
plt.title("Magnitude Spectrum Image")
plt.imshow(j,cmap='gray')
plt.subplot(2,2,3)
plt.title("Centre Magnitude Spectrum Image")
plt.imshow(k,cmap='gray')
plt.subplot(2,2,4)
plt.title("Reconstructed Image")
plt.imshow(o,cmap='gray')
plt.show()
