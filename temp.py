import numpy as np
import matplotlib.pyplot as plt
import matplotlib.animation as animation
arr=[]
for i in range(100):
    c=np.random.rand(10,10)        
    arr.append(c)

fig = plt.figure()
i=0
im = plt.imshow(arr[0], animated=True, vmin=0, vmax=3)
def updatefig(*args):
    global i
    if (i<99):
        i += 1
    else:
        i=0
    im.set_array(np.exp(arr[i]))
    print(arr[i])
    print(np.exp(arr[i]))
    return im,
ani = animation.FuncAnimation(fig, updatefig,  blit=True)
plt.show()