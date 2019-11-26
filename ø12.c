




#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main()
{

    int i, sum = 0;
    int n=0;


    //allocate space for how many words you want
    printf("how many words you want: ");
    int words;
    n=scanf( "%i", &words );
    char *letter[words];
    char tep[256];   //placeholder for the words which will be used in letter

    int number;

    for (i=0;n>i;i++) //gets all the words
     {
        printf("enter the %i word: ",i);
        scanf( "%s", tep );
        number= strlen(tep);
        letter[i] = (char*)malloc(number * sizeof(char)+1);
        strcpy(letter[i], tep);             //copy streng, has to arguments strcpy(streng to, from streng)
     }


    //print all words in letter
    for (i=0; n>i;i++)
     {
        printf("\n %s \n",letter[i]);
        free(letter[i]);

     }





    return 0;
}
