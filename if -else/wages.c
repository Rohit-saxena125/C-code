#include <stdio.h>
#include <math.h>
int main()
{
    float i, m, t, k, j;
    printf("enter the no. of hours worked by employee = ");
    scanf("%f", &i);
    printf("enter the wages/hour given to employee = ");
    scanf("%f", &m);
    if (i > 30)
    {
        t = i - 30;
        k = 2 * t * m;
        printf("the salary to be payed for this employee = %f", k);
    }
    else
    {
        j = i * m;
        printf("the salary to be payed for this employee = %f", j);
    }
    return 0;
}