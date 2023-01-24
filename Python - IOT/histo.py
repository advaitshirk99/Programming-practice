#importing required libraries of opencv 
import cv2 
  
#importing library for plotting 
from matplotlib import pyplot as plt 
  
#reads an input image 
img = cv2.imread(r'C:\Users\adshi\Pictures\Saved Pictures\scene.jpg',0) 
  
#find frequency of pixels in range 0-255 
histr = cv2.calcHist([img],[0],None,[256],[0,256]) 
  
#show the plotting graph of an image 
plt.plot(histr) 
plt.show() 