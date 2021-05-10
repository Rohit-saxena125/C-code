#include <stdio.h>
void main()
{
    int i, j, end, sum;
    printf("enter upper limit:");
    scanf("%d", &end);
    printf("all perfect no bw 1 to %d:\n", end);
    for (i = 1; i <= end; i++)
    {
        sum = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
}