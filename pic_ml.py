import numpy as np
import matplotlib.pyplot as plt
%matplotlib notebook

#creating a training set with plots

X_train=np.array([[1,1], [2,2], [3.1,2], [5.5,6.3], [6,9], [7,7]])
y_train =["red", "red", "red", "blue", "blue", "blue"]


#plot the training set
X_test=np.array([3,4])

plt.figure()
plt.scatter(X_train[:,0], X_train[:,1], s=170, color=y_train[:])
plt.scatter(X_train[0], X_train[1], s=170, color="green")
plt.show()


#nearest neigbor classifier 

def dist(x,y):
    return np.sqrt(np.sum(x-y)**2)





