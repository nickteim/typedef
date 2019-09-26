#include <stdio.h> 
#include <stdbool.h> 

void TemperatureConv(int, int, int); 
int main() 
{ 
     
   
    int Farenheit;
    
    _Bool input_is_good;
    
    input_is_good = (scanf("%i",&Farenheit));
    
    while (input_is_good==true)
    {
        
        int Kelvin=0;
        int Celsius=0;
       
        TemperatureConv(Celsius,Kelvin,Farenheit); 
        
       input_is_good = (scanf("%i",&Farenheit));
    }
    
} 
  
void TemperatureConv(int Kelvin, int Celsius, int Farenheit ) 
{ 

Celsius = 5.0 / 9.0 * (Farenheit - 32.0);
Kelvin = Celsius + 273.16; 
printf("%i,%i,%i\n",Farenheit,Celsius,Kelvin);
} 
