import numpy as np
from sklearn import datasets
digits=datasets.load_digits()
#import matplotlib.pyplot as plt
#%matplotlib notebook


#print(digits.images[0])

#plt.figure()
#plt.imshow(digits.images[0], cmap=plt.cm.gray_r, interpolation="nearest")
#plt.show()


#print true label
#print(digits.target[0])



#creating a dataset with 10 images from data set
X_train=digits.data[0:1000]
y_train=digits.target[0:1000]


#choose a test image 
X_test=digits.data[345]    #345 is random number

#plot it
#plt.figure()
#plt.imshow(digits.images[345], cmap=plt.cm.gray_r, interpolation="nearest")
#plt.show()


#nearest neigbor classifier 

def dist(x,y):

    return np.sqrt(np.sum(x-y)**2)




#For each point  X_train we ompute its distance o X_test

num=len(X_train) #number of points in X_train

distance =np.zeros(num)   #numy array of zeros

for i in range (num):
    distance [i]=dist(X_train[i], X_test)

min_index=np.argmin(distance)   
#print(y_train[min_index])



#number of mistakes done in testing 100 images
num=len(X_train)
no_errors=0
distance=np.zeros(num)
for j in range (1697,1797):
    X_test=digits.data
    for i in range (num):
        distance[i]=dist(X_train[i], X_test)
    min_index=np.argmin(distance)
    if y_train[min_index] !=digits.target[j]:
        no_errors+=1
print(no_errors)
        
