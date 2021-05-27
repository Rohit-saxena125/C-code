#include <stdio.h>
void main()
{
    int w, x, y, z, p;
    scanf("%d %d %d %d",&w,&x,&y,&z);
    p = (w + x) / (y - z);
    printf("%d",p);
}