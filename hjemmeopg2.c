#include <stdio.h> 


void TemperatureConv(int, int, int); 
int main() 
{ 
     
    int Farenheit;
    int Kelvin=0;
    int Celsius=0;
    scanf("%i",&Farenheit);
     
    TemperatureConv(Celsius,Kelvin,Farenheit); 
    
    
} 
  
void TemperatureConv(int Kelvin, int Celsius, int Farenheit ) 
{ 

Celsius = 5.0 / 9.0 * (Farenheit - 32.0);
Kelvin = Celsius + 273.16; 
printf("%i,%i,%i",Farenheit,Celsius,Kelvin);
} 
