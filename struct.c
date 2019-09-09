#include <stdio.h>
#include <stdlib.h>



struct student
{
    char auID[20];
    char name[20];
    int age;
};
typedef struct student STUDENT;     //Lav en datastruktur med student og kald den STUDENT

int main(void)
{
    //allocate space for student
    int enrollment;
    printf("enrollment: ");
    scanf("%i",&enrollment);
    STUDENT students[enrollment];

    //promt student for name and age and auID
    for(int i = 0; i < enrollment; ++i)
    {

         //promt for au-ID
         printf("Enter au-ID: ");
         scanf("%19s", students[i].auID);

        //promt for name
         printf("Enter first name: ");
         scanf("%19s", students[i].name);  //%19s fordi der er en array på 20 i struct og der skal være plads til Null

        //promt for age
        printf("Enter age:");
        scanf("%i",students[i].age);

}
    for(int i=0; i<enrollment; i++)
    {
        printf("\n %s is %i and has this au-ID number: %s.\n",students[i].name, students[i].age, students[i].auID);
    }
}

