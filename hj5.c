////////////////////////////////////////////////////////////
//
// Source file :Hjemmeopg5
// Author :Nick Rokkjær Dalsager
// Date : 24-11-2019
// Version :1
//
// Description : Let the user type a number as input
//               and program will give the
//               the n´the Fibonacci as output.
//               And compare it to a given solution
////////////////////////////////////////////////////////////



#include<stdio.h>

//declaration of functions
unsigned long FibonacciRec(unsigned n);
void get_number();
//variable
int number = 0;

int main()
{
    //declaration of variables
    int n;
    int a = 0;
    int b = 1;
    int c;
    printf("Give me a number for the n´the");
    printf("Fibonacci you want:");
    get_number();
    n = number;   //number is the input from user


    /*
    the user input has to be bigger or the same as i
    */
    for (int i = 1; i <= n; i++)
    {
        c = a + b;        //add a and b and put it in c
        a = b;            //put b´s value in a
        b = c;            //set c´s value in b

    }



    /*
    if the user gave number=0, here will the
    n´the Fibonacci be 1, so we set c=1
    */

    if (c == 0)
    {
        c = 1;
    }


    printf("\nMy solution: %d\n", c);
    printf("Kluas solution: %lu\n", FibonacciRec(n));

    return 0;
}



/*
function with "recursive do" from
teacher
*/
unsigned long FibonacciRec(unsigned n)
{

    if (n > 1)
    {
        return FibonacciRec(n - 1) + FibonacciRec(n - 2);
    }
    else
    {
        return 1;
    }
}



/*
fuction takes input from user
and makes sure, at it is a positive
and an non alphanumeric character
*/

void get_number()
{
    /*
    for loop that continues until break out of
    */
    for (;;)
    {
        int NoNumber = scanf("%d", &number);


        /*
        if user types a charater when asked for a number
        */
        if (NoNumber != 1)
        {
            printf("This is not a number\n");
            for (;;)
            {
                if (getchar() == '\n')  //eatline
                {
                    break;
                }
            }

            printf("Try again: ");
            continue;
        }

        /*
        if user types a negative when asked
        for a positive number
        */
        if (number < 0)
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
