////////////////////////////////////////////////////////////
//
// Source file :hj4.c
// Author :Nick Rokkjær Dalsager
// Date : 11-11-2018
// Version :1
//
// Description : Let the user buy an amount of carrots,
//               potatoes, onions or Strawberry with
//               discount and freight price.
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>

//making a datatype of struct called Product
struct Product
{
    float carrots;
    float potatoes;
    float Onion;
    float Strawberry;
};


//declaration of functions
void get_number(void);
void show_menu(void);
int get_input(struct Product *);
void chech_out(struct Product *);
//veriable declaration
float number;


//Declaration of contans for product

//potatoes
const int P_PRICE = 25;
const int P_FREIGHT = 12;

//Onion
const int O_PRICE = 15;
const int O_FREIGHT = 5;

//Strawberry
const int S_PRICE = 35;
const int S_FREIGHT = 12;

//carrots
const int C_PRICE = 28;
const int C_FREIGHT = 12;


//Declaration of contans for discount
const int DISCOUNT_ONE = 5;
const int DISCOUNT_TWO = 10;
const int DISCOUNT_THREE = 15;


int main(void)
{
    struct Product product;  //local struct declaration

    /*
    For some reason "Onion" was pointing at junk-value, if it werent givned a number,
    so to fix this problem I gave "Onion" the value 0, at the beginnig.
    */
    product.Onion = 0;


    while (1)          //runs a while loop until user enters "a"
    {

        show_menu();
        if (get_input(&product))  //&product this is pointer to datatype product
            break;
    }
    printf ("Bye!");
    return 0;
}



void show_menu(void)   //fuction that prins a menu
{

    printf("\nf)Change amount  h)Shopping cart  s)Strawberry ");
    printf(" c)Carrot  p)Potato  o)Onion  ");
    printf("a)Quit");
    printf("\nType what you wanne do: \n");
}




void get_number()
{

    for (;;)    //for loop that continues until break out of
    {
        int NoNumber = scanf("%f", &number);

        if (NoNumber != 1)  //if user types a charater when asked for a number
        {
            printf("This is not a number\n");
            for (;;)
                 if (getchar() == '\n')  //eatline
                 break;

         continue;
         }


       if (number < 0)   //if user types a negative when asked for a positive number
        {
            printf("This is not a positive number\n");
            continue;
        }


        else  // break if user types a postive number
        {
            break;
        }
    }

}



int get_input(struct Product *product)
{


    char letter;

    scanf(" %c", &letter);   //make a space before %c, so it remove numbers of white-spaces.
    switch (letter)
    {
        case 'f':   //Change amount
            printf("\n\n\nWhenever you enter a new amount it will reset the old one!\n\n");

            break;

        case 'h':   //Shopping cart
            printf("\nShopping cart\n------------\n");
            chech_out(product);

            break;


        case 'c':  //carrots
            printf("Enter number of carrots in kg: ");
            get_number();
            float C_freightPrice = number * C_FREIGHT;   //gets freight price
            float C_kgPrice = number * C_PRICE;       //gets price of product in kg
            float C_totalprice = C_freightPrice + C_kgPrice;    //add the two above numbers to get a total price


            printf("\n You have purchased for %.1fkr \n", C_kgPrice);

             if (C_totalprice <= 100)    //if price is less then 100 kr
                {
                  printf(" There is no discount and the freight price is %.1fkr\n",C_freightPrice);
                  product->carrots = C_totalprice;
                 }

             if (C_totalprice>=101 && C_totalprice<=350)    //between 101 and 350 - 5 % discount
                {
                  printf(" There is a discount on %d procent and the freight price is %.1fkr\n",DISCOUNT_ONE, C_freightPrice);
                  float New=(C_totalprice/100)*DISCOUNT_ONE;
                  float total=C_totalprice-New;
                  product->carrots = total;
                 }

             if(C_totalprice>=351 && C_totalprice<=600)  //between 351 and 600 - 10 % discount
              {
                 printf(" There is a discount on %d procent and the freight price is %.1fkr\n",DISCOUNT_TWO, C_freightPrice);
                 float New=(C_totalprice/100)*DISCOUNT_TWO;
                 float total=C_totalprice-New;
                 product->carrots = total;

               }

            if(C_totalprice>=601)   //over 600 - 15 % discount
              {
                 printf(" There is a discount on %d procent and the freight price is %.1fkr\n",DISCOUNT_THREE, C_freightPrice);
                 float New=(C_totalprice/100)*DISCOUNT_THREE;
                 float total=C_totalprice-New;
                 product->carrots = total;
                }

            printf(" So the total amount is %3.fkr \n",product->carrots);

            break;





        case 'p':
            printf("Enter number of potatoes in kg: ");
            get_number();
            float P_freightPrice = number * P_FREIGHT ;
            float P_kgPrice = number * P_PRICE;
            float P_totalprice=P_freightPrice + P_kgPrice;

            printf("\n You have purchased for %.1fkr \n",P_kgPrice);

            if (P_totalprice <= 100)   //between 101 and 350 - 5 % discount
             {
               printf(" There is no discount and the freight price is %.1fkr\n",P_freightPrice);
               product->potatoes = P_totalprice;
              }

            if (P_totalprice>=101 && P_totalprice<=350)
              {
                 printf(" There is a discount on %d procent and the freight price is %.1fkr\n",DISCOUNT_ONE, P_freightPrice);
                 float New=(P_totalprice/100)*DISCOUNT_ONE;
                 float total=P_totalprice-New;
                 product->potatoes = total;
               }

            if(P_totalprice>=351 && P_totalprice<=600)
                 {
                    printf(" There is a discount on %d procent and the freight price is %.1fkr\n",DISCOUNT_TWO, P_freightPrice);
                    float New=(P_totalprice/100)*DISCOUNT_TWO;
                    float total=P_totalprice-New;
                    product->potatoes = total;
                  }

            if(P_totalprice>=601)
              {
              printf(" There is a discount on %d procent and the freight price is %.1fkr\n",DISCOUNT_THREE, P_freightPrice);
              float New=(P_totalprice/100)*DISCOUNT_THREE;
              float total=P_totalprice-New;
              product->potatoes = total;
                 }

            printf(" So the total amount is %3.fkr \n",product->potatoes);


            break;

        case 'o':
            printf("Enter number of onions in bunch: ");
            get_number();
            float O_freightPrice = number * O_FREIGHT;
            float O_kgPrice = number * O_PRICE;
            float O_totalprice=O_freightPrice + O_kgPrice;


             printf("\n You have purchased for %.1fkr \n",O_kgPrice);

             if (O_totalprice <= 100)   //under og = 100 - no discount
              {
               printf(" There is no discount and the freight price is %.1fkr\n",O_freightPrice);
               product->Onion = O_totalprice;
              }

             if (O_totalprice>=101 && O_totalprice<=350)  //between 101 and 350 - 5 % discount
              {
                 printf(" There is a discount on %d procent and the freight price is %.1fkr\n",DISCOUNT_ONE, O_freightPrice);
                 float New=(O_totalprice/100)*DISCOUNT_ONE;   //calulate discount price
                 float total=O_totalprice-New;              //minus the discount to the total price
                 product->Onion = total;                //send it to struct
              }

             if(O_totalprice>=351 && O_totalprice<=600) //between 351 and 600 - 10 % discount
             {
                 printf(" There is a discount on %d procent and the freight price is %.1fkr\n",DISCOUNT_TWO, O_freightPrice);
                 float New=(O_totalprice/100)*DISCOUNT_TWO;      //calulate discount price
                 float total=O_totalprice-New;                  //minus the discount to the total price
                 product->Onion = total;                 //send it to struct

              }

            if(O_totalprice>=601) //over 600 - 15 % discount
             {
                 printf(" There is a discount on %d procent and the freight price is %.1fkr\n",DISCOUNT_THREE, O_freightPrice);
                 float New=(O_totalprice/100)*DISCOUNT_THREE;
                 float total=O_totalprice-New;
                 product->Onion = total;
              }

            printf(" So the total amount is %3.fkr \n",product->Onion);

            break;




        case 's':
            printf ("Enter number in trays of strawberries: ");
            get_number();
            float S_freightPrice = number*S_FREIGHT;
            float S_kgPrice = number*S_PRICE;
            float S_totalprice=S_freightPrice+S_kgPrice;

             printf("\n You have purchased for %.1fkr \n",S_kgPrice);

            if (S_totalprice <= 100)   //between 101 and 350 - 5 % discount
             {
               printf(" There is no discount and the freight price is %.1fkr\n",S_freightPrice);
               product->Strawberry = S_totalprice;
             }
            if (S_totalprice>=101 && S_totalprice<=350)    //between 351 and 600 - 10 % discount
             {
                 printf(" There is a discount on %d procent and the freight price is %.1fkr\n",DISCOUNT_ONE, S_freightPrice);
                 float New=(S_totalprice/100)*DISCOUNT_ONE;
                 float total=S_totalprice-New;
                 product->Strawberry = total;
             }

            if(S_totalprice>=351 && S_totalprice<=600) //between 351 and 600 - 10 % discount
             {
                 printf(" There is a discount on %d procent and the freight price is %.1fkr\n",DISCOUNT_TWO, S_freightPrice);
                 float New=(S_totalprice/100)*DISCOUNT_TWO;
                 float total=S_totalprice-New;
                 product->Strawberry = total;
             }

            if(S_totalprice>=601)   //over 600 - 15 % discount
            {
                 printf(" There is a discount on %d procent and the freight price is %.1fkr\n",DISCOUNT_THREE, S_freightPrice);
                 float New=(S_totalprice/100)*DISCOUNT_THREE;
                 float total=S_totalprice-New;
                 product->Strawberry = total;
            }

            printf(" So the total amount is %3.fkr \n",product->Strawberry);

            break;


        case 'a':       //break program when user types "a"
            printf("\nChech out\n------------\n");
            chech_out (product);

            return 1;


        default:
            ;
    }
    return 0;

}




void chech_out (struct Product *product)
{

     printf("\nPotatoes=%2.fkr\n",product->potatoes);
     printf("\nCarrots=%2.fkr\n",product->carrots);
     printf("\nStrawberry=%2.fkr\n",product->Strawberry);
     printf("\nOnion=%2.fkr\n",product->Onion);

    /*
    Takes the total amount that the user has to pay
    an prints it
    */
     float total=product->potatoes+product->carrots+product->Strawberry+product->Onion;
     printf("\nTotal price for everything purchased = %.2fkr\n\n",total);
}
