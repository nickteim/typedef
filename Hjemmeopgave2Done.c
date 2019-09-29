#include <stdio.h>
#include <stdbool.h>

//decare the used function in the top so c (the langues) knows it exsted
void TemperatureConv(double);

int main()
{

    //decare varibles
    double Farenheit;
    _Bool input_is_good;



    /*promt user for Farenheit
      We have decared input_is_good to be a bool,
      and set it, in line 21, to be true when only numbers comes as input
    */
    printf("Enter a Farenheit and it will be converted to Celsius and Kelvin.\nPlease enter a Farenheit:");
    input_is_good = (scanf("%lf", &Farenheit));


    // while we get a number as input we send it to function TemperatureConv and ask for a new number
    while (input_is_good == true)
    {

        TemperatureConv(Farenheit);

        input_is_good = (scanf("%lf", &Farenheit));
    }

    return 0;

}

void TemperatureConv(double Farenheit)
{

    const double Celsius = 5.0 / 9.0 * (Farenheit - 32.0);
    const double Kelvin = Celsius + 273.16;
    printf("The converted temperatur in Celsius is %.2lf°C, and in Kelvin it is %.2lfK.", Celsius, Kelvin);
    printf("\n \nPess a non-numeric value to end the program or enter a new Farenheit:");

}
