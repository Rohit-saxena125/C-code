#include <stdio.h>
void main()
{
    int physics, chemistry, maths, total;
    scanf("%d %d %d",&maths,&physics,&chemistry);
    total = physics + chemistry + maths;
    if (maths >= 65)
    {
        if (physics >= 55)
        {
            if (chemistry >= 50)
            {
                if (total >= 180)
                {
                    printf("Congructulations you are eligible to apply ");
                }
                else
                {
                    printf("Sorry you are not eligible");
                }
            }
            else
            {
                printf("Sorry you are not eligible");
            }
        }
        else
        {
            printf("Sorry you are not eligible");
        }
    }
    else
    {
        printf("Sorry you are not eligible");
    }
}