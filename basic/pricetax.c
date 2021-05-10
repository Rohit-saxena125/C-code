// calculate price after adding sales tax
// Name: Rohit saxena
//Date:21/01/2021
#include <stdio.h>
#include <math.h>
void main()
{
    int rate, o_price;
    float tax, s_price;
    scanf("%d %d", &rate, & o_price);
    tax =rate*o_price/100;
    s_price = tax + o_price ;
    printf("%f", s_price);
}