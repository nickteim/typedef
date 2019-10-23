#include <stdio.h>
 
 
int main()
{
    int const MAX=100;
   
    double array1[MAX];
    double array2[MAX];
    double sum=0;
    int i=0;
    int size=0;
    
    printf("Enter size of the first array:");
    scanf("%d",&size);
 
    printf("Enter elements in the first array:\n");
    while(i<size)
    {
        scanf("%lf",&array1[i]);
        i++;
    }
    
    printf("\n");
    
    for(i=0; i<size; i++)
    {
        printf("Element %i in the first array=%.1lf \n",i, array1[i]);
    }
    
    for(i=0; i<size; i++)
    {
        sum+=array1[i];
        
        array2[i] = sum;
        
        printf("sum in element %i in the secound array = %.1lf \n",i, array2[i]);
    }
     
    
    return 0;
}

    
    
