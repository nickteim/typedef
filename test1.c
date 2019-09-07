#include <stdio.h>
#include <stdlib.h>



typedef struct
{
    char* auID;
    char* name;
    int age;
}student;

int main(void)
{
    //allocate space for student
    int enrollment=(int)malloc(20 * sizeof(int+1));;
    printf("enrollment: ");
    scanf("%i",&enrollment);
    student students[enrollment];

    //promt student for name and age and auID
    for(int i = 0; i < enrollment; ++i)
    {



         //promt for au-ID
         char getauID[20];
         printf("Enter au-ID: ");
         scanf("%s", getauID);
         students[i].auID=getauID;




        //promt for name
         char getName[20];
         printf("Enter first name: ");
         scanf("%s", getName);
         students[i].name=getName;



        //promt for age
        int getAge;
        printf("Enter age:");
        scanf("%i",&getAge);
        students[i].age=getAge;
}

    for(int i=0; i<enrollment; i++)
    {
        printf("\n %s is %i and has this au-ID number: %s.\n",students[i].name, students[i].age, students[i].auID);
    }
}


