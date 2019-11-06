#include <stdio.h>
#include <string.h>

//lav fragt priserne globale
//spørg kluas om hvordan jeg implementere discount




    struct Product 
    {
        //float carrots;
        float potatoes;
        float Onion;
        //float Strawberry;
    };
    typedef struct Product product;
    
void get_number (void);
void show_menu (void);
int get_input (struct Product *);
void chech_out (struct Product *);
int number;

int main (void)
{
    struct Product product;
 
    

	while (1)
	{
		//show_product1 ();
		show_menu ();
		if (get_input (&product)) // end on "a"
			break;
	}
	printf ("Bye!");
	return 0;
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



int get_input (struct Product *product )
{
	char letter;

	scanf ("%c", &letter);
	switch (letter)
	{
		case 'f':
            printf("\n\n\nWhenever you enter a new amount it will reset the old one!\n\n");
            
			break;
		case 'h':
			chech_out(product);
            
         
			break;
		case 'c':
		/*	
            get_number();           
            float C_freightPrice = number*12;
            float C_kgPrice = number*28;
            float C_totalprice=C_freightPrice+C_kgPrice;
            product->carrots = C_totalprice;
           */  
            
			break;
		case 'p':
			
			
            get_number();           
            float P_freightPrice = number*12;
            float P_kgPrice = number*25;
            float P_totalprice=P_freightPrice+P_kgPrice;
            
       printf("\n%f\n",P_totalprice);     
            
     if (P_totalprice <= 100)
     {
       product->potatoes = P_totalprice;    
     }
     if (P_totalprice>=101 && number<=350)
     {
         float New=(P_totalprice/100)*5;
         float total=P_totalprice-New;
         product->potatoes = total;
            
     }
     if(P_totalprice>=351 && P_totalprice<=600)
     {
         float New=(P_totalprice/100)*10;
         float total=P_totalprice-New;
         product->potatoes = total;
  
     }
    if(P_totalprice>=601)
    {
         float New=(P_totalprice/100)*15;
         float total=P_totalprice-New;
         product->potatoes = total; 
    }  
        
			break;
            
		case 'o':
			
            get_number();           
            float O_freightPrice = number*12;
            float O_kgPrice = number*25;
            float O_totalprice=O_freightPrice+O_kgPrice;
            product->Onion = O_totalprice;
                        
       printf("\n%f\n",O_totalprice);     
            
     if (O_totalprice <= 100)
     {
       product->Onion = O_totalprice;    
     }
     if (O_totalprice>=101 && number<=350)
     {
         float New=(O_totalprice/100)*5;
         float total=O_totalprice-New;
         product->Onion = total;
            
     }
     if(O_totalprice>=351 && O_totalprice<=600)
     {
         float New=(O_totalprice/100)*10;
         float total=O_totalprice-New;
         product->Onion = total;
  
     }
    if(O_totalprice>=601)
    {
         float New=(O_totalprice/100)*15;
         float total=O_totalprice-New;
         product->Onion = total;    
    }  
            
           
			break;
            /*
		case 's':
			get_number();           
            float S_freightPrice = number*12;
            float S_kgPrice = number*25;
            float S_totalprice=S_freightPrice+S_kgPrice;
            product->Strawberry = S_totalprice;
            
			break;
           */   
		case 'a':
			return 1;
		default:
			;
	}
	return 0;
}




void chech_out (struct Product *product)
{
    
    printf("\npotatoes=%3.f, Onion=%3.f \n",product->potatoes,product->Onion);
    
}

