#include <stdlib.h>
#include <stdio.h>



struct node
{
    int number;
    struct node *next;            //EACH pointer point to another node called next
};
typedef struct node node;





int main( void )
{
    //MOMORY for numbers
    node*numbers=NULL;             //THE begining of the list


    //PROMT USER FOR INPUT TILL EOF
    while(true)
    {
        //promt for number

        int number;
        printf( "number:" );
        scanf( "%i", &number );


        //check EOF
        if (number==EOF)
        {
            return 1;
        }


        //check if number already is in the list
        bool found=false;
        for (node*ptr=numbers;ptr!=NULL;ptr=ptr->next)        //ptr is a pointer that looks over every number in the list; like litterally the same as if you took your and and pointed on ech number
        {                                                     //ptr=ptr->next means update whatever the number ptr is pointing at to what that number is pointing at. in other words ptr can go though the whole list
            if(ptr->number==number)
            {
                found =true;
                break;
            }

        }


        // if number is not in the list add it to the list
        node*n=malloc(sizeof(node));
        if(!n)      //if there is not enouht space stop program
        {
            return 1;
        }

        //add number to list
        n->number=number;
        n->next=NULL;
        if(numbers)
        {
            for (node*ptr=numbers;ptr!=NULL;ptr=ptr->next)
             {
                 if(!ptr->next)             //!ptr->next means ptr->==NULL, means if found the end of the list go and update whatever ptr is pointing at with n
                {
                    ptr->next=n;
                    break;
                }

             }
        }
        else
        {
            numbers=n;
        }




}
  //print numbers in list


           printf("%i\n",ptr->number);


/*
        //free momory
        node*ptr=numbers;
        while(ptr!=NULL)
        {
            node*next=ptr->next;
            free(ptr);
            ptr=next;
        }
*/
}


