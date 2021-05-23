#include<stdio.h>
void main()
{
    float celsius,Farhenite;
    scanf("Enter the temperature in degree celsius %f",&celsius);
    Farhenite =(9/5)*celsius+32;
    printf("Temperature in degree farhenite:%f",Farhenite);
    printf("###############################################################");
    scanf("Enter the temperature in degree Farhenite %f",&Farhenite);
    celsius =(5/9)*(Farhenite-32);
    printf("Temperature in degree celsius:%f",celsius);
}