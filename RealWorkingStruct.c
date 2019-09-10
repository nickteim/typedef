#include <stdlib.h>  
#include <stdio.h>   
#define MAX_FIELD_LEN 20

struct student
{
    char auID[ MAX_FIELD_LEN ];
    char name[ MAX_FIELD_LEN ];
    unsigned age;
};
typedef struct student STUDENT;





int main( void )
{
    //allocate space for students
    printf("enrolledment;");
    int enrolledment;
    scanf( "%i", &enrolledment );
   
    STUDENT students[enrolledment];           

    //prompt for  student name and age and auID
    for( int i=0; i<enrolledment; i++ )
    {
       
        printf( "Enter auID: " );
        scanf("%19s", students[i].auID );      //%19s fordi der er en array på 20 i struct og der skal være plads til Null
       
            
        //prompt for name
        printf( "Enter first name: " );
        scanf("%19s", students[i].name );     //%19s fordi der er en array på 20 i struct og der skal være plads til Null
       
            
        //prompt for age
        printf( "Enter age:" );
        scanf( "%i", &students[i].age );
       
    }


    //print students name and age and auID
    for( int i=0; i<enrolledment; i++ )
    {
        
        printf( "\n %s is %i and has this au-ID number: %s.\n",
                students[i].name, 
                students[i].age, 
                students[i].auID );
    }
}
