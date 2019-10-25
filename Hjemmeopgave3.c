////////////////////////////////////////////////////////////
//
// Source file :Hjemmeopgave3.c    
// Author : Nick Rokkjær Dalsager
// Date :25-10-2019
// Version :1
//
// Description : Takes numbers from one array and calulate 
//                the cumulative value in each element 
//                and puts it in a secound array.
//                
////////////////////////////////////////////////////////////

#include <stdio.h>

#define MAX 100

int main()
{
    //Difine veriables
    double array1[MAX];
    double array2[MAX];
    double sum=0;
    int i=0;
    int size=0;
    
    //promt user for size of array 1.
    printf("Enter size of the arrays(between 0-100):");
    scanf("%d",&size);
 
    //promt user for numbers in array 1.
    printf("Enter elements in the first array:\n");
    while(i<size)         
    {
        scanf("%lf",&array1[i]);
        i++;
    }
    
    //making a line for esthetic design
    printf("\n");
    
    //prints array 1
    for(i=0; i<size; i++)    //for i less then size
    {
        printf("Element %i in the first array=%.1lf \n",i
               , array1[i]);
    }
    
    /*
    calulate the cumulative value in each element 
    of array 1 and puts it in array 2. And then
    prints array 2.
    */
    for(i=0; i<size; i++)    //for i less then size
    {
        sum+=array1[i];      
        
        array2[i] = sum;    
        
        printf("sum for element %i in the secound array = %.1lf \n"
               ,i, array2[i]);
    }
         
    return 0;
}
