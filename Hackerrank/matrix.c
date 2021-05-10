#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int arr[100][100], i, j, b, c;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1 && arr[5 / 2][5 / 2])
            {
                printf("0");
                break;
            }
            else if (i < 2 && j < 2)
            {
                if (arr[i][j] == 1)
                {
                    b = 2 - i;
                    c = 2 - j;
                    printf("%d", b + c);
                }
            }
            else if (i < 2 && j > 2)
            {
                if (arr[i][j] == 1)
                {
                    b = 2 - i;
                    c = j - 2;
                    printf("%d", b + c);
                }
            }
            else if (i < 2 && j > 2)
            {
                if (arr[i][j] == 1)
                {
                    b = 2 - i;
                    c = j - 2;
                    printf("%d", b + c);
                }
            }
            else if (i > 2 && j > 2)
            {
                if (arr[i][j] == 1)
                {
                    b = i - 2;
                    c = j - 2;
                    printf("%d", b + c);
                }
            }
            else if (i > 2 && j < 2)
            {
                if (arr[i][j] == 1)
                {
                    b = i - 2;
                    c = 2 - j;
                    printf("%d", b + c);
                }
            }
            else if (i == 2 && j < 2)
            {
                if (arr[i][j] == 1)
                {
                    c = 2 - j;
                    printf("%d", c);
                }
            }
            else if (i == 2 && j > 2)
            {
                if (arr[i][j] == 1)
                {
                    c = j - 2;
                    printf("%d", c);
                }
            }
            else if (i > 2 && j == 2)
            {
                if (arr[i][j] == 1)
                {
                    b = i - 2;
                    printf("%d", b);
                }
            }
            else if (i < 2 && j == 2)
            {
                if (arr[i][j] == 1)
                {
                    b = 2 - i;
                    printf("%d", b);
                }
            }
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
