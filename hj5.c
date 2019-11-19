#include<stdio.h>


//spørg klues med indrykninger i ecplise
//number er global skal det ændres?
//den giver 3 værdier efter man har indtastet en negativ eller et bogstav?

unsigned long FibonacciRec (unsigned n);
void get_number();

int number =0;

int main()
{
    //veribles
   
    int n;
    int a=0;
    int b=1;
    int c;
    printf("Give me a number for the n´the Fibonacci you want: ");
    get_number();
    n=number;
    
    
    
    for(int i = 1; i<=n; i++)
    {  
        c = a + b;        //add a and b and put it in c
        a = b;            //put b´s value in a 
        b = c;            //set c´s value in b
 
    }
    
    printf("%d\n",c);
    printf("%lu\n",FibonacciRec(n));
    
    return 0;
}



unsigned long FibonacciRec (unsigned n)
 {
  
     if (n > 1)
     {
     return FibonacciRec (n - 1) + FibonacciRec (n - 2);
     }
     else 
      {
     return 1;
     }
  }


void get_number()
{

    for (;;)    //for loop that continues until break out of
    {
        int NoNumber = scanf("%d", &number);

        if (NoNumber != 1)  //if user types a charater when asked for a number
        {
            printf("This is not a number\n");
            for (;;)
                 if (getchar() == '\n')  //eatline
                 break;
            printf("Try again: ");
         continue;
         }


       if (number < 0)   //if user types a negative when asked for a positive number
        {
            printf("This is not a positive number\n");
            printf("Try again: ");
            continue;
        }


        else  // break if user types a postive number
        {
            break;
        }
    }

}


