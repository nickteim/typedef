#include<stdio.h>

unsigned long FibonacciRec (unsigned n);

int main()
{
    //veribles
    int n;
    int a=0;
    int b=1;
    int c;
    printf("Give me a number for the n´the Fibonacci you want: ");
    scanf("%i",&n);
    
    
    for(int i = 1; i<=n; i++)
    {
        
        c = a + b;        //add a and b and put it in c
        a = b;            //put b´s value in a 
        b = c;            //set c´s value in b
    }
    printf("%d\n",a);
    FibonacciRec(n);
    printf("%d\n",n);
    return 0;
}



unsigned long FibonacciRec (unsigned n)
 {
     if (n > 1)
     {
     return FibonacciRec (n - 1) + FibonacciRec (n - 2);
     printf("%i",n);
     }
     else 
      {
     return 1;
     }
  }

