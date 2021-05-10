// find area & perimeter of rectangle
#include <stdio.h>
void main()
{
    int l, b, area, perimeter;
    scanf("%d%d", &l, &b);
    area = l * b;
    perimeter = 2 * (l + b);
    printf("%d\n%d", area, perimeter);
}