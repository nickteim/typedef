#include <stdio.h>
#include <string.h>


typedef struct
{
    float carrots;
    float potatoes;
    float Onion;
    float Strawberry;
} Product;

Product product;
void discount (void);
void Freight (void);
void eatline (void);
void get_number ( );
void show_product1 ( );
void show_menu ( );
int get_input ( );
int number;
void chech_out (void);

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
    printf ("f)change amount    h)chech out    s)Strawberry");
	printf ("c)carrots    p)potatoes  o)Onion");
	printf ("a)quit");
}

void get_number ( )
{
	
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
          
			break;
		case 'h':
			chech_out();
            return 0;
			break;
		case 'c':
			get_number();
			break;
		case 'p':
			
            get_number(); 
            //Freight;
            // mængde*fragtpris
            
            float freightPrice = number*12;
            product.potatoes = freightPrice;
            
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
       return;
     }
     if (number>101 && number<350)
     {
         number=number/100*0.05;
         return;
     }
     if(number>351 && number<600)
     {
         number=number/100*0.10;
         return; 
     }
    if(number>601)
    {
         number=number/100*0.15;
         return;      
    }  
}




void show_product1 (void)
{
    //if (p==)
    
}

void chech_out (void)
{
    
    printf("%f,%f,%f",product.carrots, product.potatoes, product.Onion);
    
}
