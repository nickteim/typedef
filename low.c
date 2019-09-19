#include <stdlib.h>  

#include <stdio.h>   

#define ONE_SEC 60


int main(void)
{
    int sec;
    int left;
    int min;
    printf("inter number in sec\n");
    scanf("%i",&sec);
    while(sec>0)
    {
        min=sec/ONE_SEC;
        left=sec%ONE_SEC;
        printf("you entered sec %i, wich is min %i and sec %i\n Stop progam by entering negative number or enter new number: ",sec,min,left);
        scanf("%i",&sec);
    }
    return 0;
}
