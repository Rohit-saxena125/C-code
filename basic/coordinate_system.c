#include <stdio.h>
void main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0)
    {
        printf("Ist quadrant");
    }
    else if (x < 0 && y > 0)
    {
        printf("IInd quadrant");
    }
    else if (x < 0 && y < 0)
    {
        printf("IIIrd quadrant");
    }
    else if (x > 0 && y < 0)
    {
        printf("IVth quadrant");
    }
}