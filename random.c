/*
 ============================================================================
 Name        : random.c
 Author      : Henning Slavensky
 Version     : 1.0
 Date				 : 240916
 Copyright   : open for everyone
 Description : random
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // include headerfile for time

int main (void)
{
	int r;
    int guess=0;
	srand (time (NULL)); // seed random function with really random number
	r = rand()%100; //get random number
    printf("Enter first guess;");
    scanf("%i",&guess);
    while(r>0)
    {
        if (r==guess)
        {
            printf("you guessed it!!");
            break;
        }
       
        else
        {
            printf("scret number %i\n",r);
            printf("wrong, new number please;");
            scanf("%i",&guess);
            
        }
               
    }
        
	//printf ("\r\nSecret number = %d", s); // show the random number
	//printf ("\r\nMax value is  = %d", RAND_MAX); // show max value

	return 0;
}
/* ------------------------------------------------------------
 * Task:
 * 0) Compile and run the program
 * As you can see the max value is really big,
 * and could be difficult to guess.
 * 1) Make the program in such a way, that the random value
 * is between 0 and 100 (using the modulus operator)
 * 2) Use a while loop to keep guessing, until you guess the number
 * using scanf() to take your guess
 * 3) Use a if() statement to tell the user if the guess is to high
 * or to low
 * 4) end the program with a greeting if you hit the right number
 * -----------------------------------------------------------------
 */
