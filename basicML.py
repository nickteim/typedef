Written for python with jupyter

-------------------------------------------------------------

#predict something based on dataset

import panda as pd
from sklearn.tree import DecisionTreeClassifier


music_data=pd.read_csv("music-csv") #load file
X=music_data.drop(columns=["genre"]) #input set
y=music_data["genre"]                 #output set

model=DecisionTreeClassifier()        #create a model
model.fit(X,y)                        # train model
predictions=model.predict([[21,1],[22,0]]) #make prediction



---------------------------------------------------------------------


#how good is the dataset
import panda as pd
from sklearn.tree import DecisionTreeClassifier
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score

music_data=pd.read_csv("music-csv")
X=music_data.drop(columns=["genre"])
y=music_data["genre"]
X_train, X_test, y_train, y_test=train_test_split(X,y,test_size=0.2)


model=DecisionTreeClassifier()
model.fit(X_train, y_train)
predictions=model.predict(X_test)


score=accuracy_score(y_test,predictions)

score

--------------------------------------------------------------------------


#download trained model
import panda as pd
from sklearn.tree import DecisionTreeClassifier
from sklearn.tree import joblib

music_data=pd.read_csv("music-csv")
X=music_data.drop(columns=["genre"])
y=music_data["genre"]

model=joblib.dump("music-recommender.joblib")

#model=DecisionTreeClassifier()
#model.fit(X,y)
#predictions=model.predict([[21,1],[22,0]])




--------------------------------------------------------------------------


#opload trained model
import panda as pd
from sklearn.tree import DecisionTreeClassifier
from sklearn.tree import joblib

#music_data=pd.read_csv("music-csv")
#X=music_data.drop(columns=["genre"])
#y=music_data["genre"]

model=joblib.load("music-recommender.joblib")

#check for prediction

model=DecisionTreeClassifier()
model.fit(X,y)
predictions=model.predict([[21,1],[22,0]])















