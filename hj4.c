#include <stdio.h>
#include <string.h>


struct product
{
    unsigned int carrots;
    unsigned int potatoes;
    unsigned int Onion;
    unsigned int Strawberry;
};

void discount (void);
void Freight (void);
void eatline (void);
void get_number ( );
void show_product1 ( );
void show_menu ( );
int get_input ( );


int main (void)
{

	while (1)
	{
		show_product1 ();
		show_menu ();
		if (get_input ()) // end on "a"
			break;
	}
	printf ("Bye!");
	return 0;
}

void eatline (void)
{
	while (getchar () != '\n')
		continue;
}

void show_menu (void)
{
	printf ("Type what you wanne do");
    printf ("f)change amount    h)change choise    s)Strawberry");
	printf ("c)carrots    p)potatoes  o)Onion");
	printf ("a)quit");
}

void get_number ( )
{
	int number;
	printf ("Enter number in kg: ");
	scanf ("%d", &number);
}



int get_input ( )
{
	char letter;

	scanf ("%c", &letter);
	switch (letter)
	{
		case 'f':
            get_number();
			break;
		case 'h':
			get_number();
			break;
		case 'c':
			get_number();
			break;
		case 'p':
			get_number();
			break;
		case 'o':
			get_number();
			break;
		case 's':
			get_number();
			break;
		case 'a':
			return 1;
		default:
			;
	}
	return 0;
}

void discount (void)
{
    get_number();
    
    if (number > 100)
     {
       return number;
     }
     if (number>101, number>350)
     {
         number/100*0.05=number;
         return number;
     }
     if(number>351, number>600)
     {
         number/100*0.10=number;
         return number; 
     }
    if(number>601)
    {
         number/100*0.15=number;
         return number;      
    }  
}
