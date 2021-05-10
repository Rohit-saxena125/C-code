#include <stdio.h>
void main()
{
    int n, i, j;
    int k = 2 * n - 2;
    scanf("%d", &n);
    for (i = 2 * n - 1; i > 0; i--)
    {
        for (j = 2 * n - 1; j > 0; j--)
        {
            if (i == 2 * n - 1 || i == 1 || j == 2 * n - 1 || j == 1)
            {
                printf("%d ", n);
            }
            else
            {
              printf("%d ", n - 1);
                  
            }
        }
        printf("\n");
    }
}