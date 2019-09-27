


#remove dublets
List=[1,2,4,7,22,3,5,6,3,1,22,1,4,5,2,3,4,5,6,7,5]
NewList=[]
for number in List:
    if number not in NewList:
        NewList.append(number)     #append means- put into 

print(NewList)


#sort list
NewList.sort()
print(NewList)

