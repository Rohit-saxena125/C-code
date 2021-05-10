// find hypotenious right angle triangle
#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c;
    scanf("%d%d", &a, &b);
    c = sqrt(a * a + b * b);

    printf("%d", c);
}