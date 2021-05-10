// find area & circumference
#include <stdio.h>
#define pi 3.14
void main()
{
    float r, area, circum;
    scanf("%f", &r);
    area = pi * r * r;
    circum = 2 * pi * r;
    printf("%f\n%f", area, circum);
}