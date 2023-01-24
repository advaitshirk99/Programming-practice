import array
import time
a = array.array('i', [1, 2, 3])

for i in a:
     print(i, end=' ')    #OUTPUT: 1 2 3
print(time.time()/3600000)
