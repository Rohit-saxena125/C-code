#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int arr[100][100], i, j, b, c, r, c1;
    int m, n;
    scanf("%d %d\n", &r, &c1);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    m = r / 2;
    n = c1 / 2;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c1; j++)
        {
            if (arr[i][j] == 1 && arr[m][n])
            {
                printf("0");
                break;
            }
            else if (i < m && j < n)
            {
                if (arr[i][j] == 1)
                {
                    b = m - i;
                    c = n - j;
                    printf("%d", b + c);
                }
            }
            else if (i < m && j > n)
            {
                if (arr[i][j] == 1)
                {
                    b = m - i;
                    c = j - n;
                    printf("%d", b + c);
                }
            }
            else if (i < m && j > n)
            {
                if (arr[i][j] == 1)
                {
                    b = m - i;
                    c = j - n;
                    printf("%d", b + c);
                }
            }
            else if (i > m && j > n)
            {
                if (arr[i][j] == 1)
                {
                    b = i - m;
                    c = j - n;
                    printf("%d", b + c);
                }
            }
            else if (i > m && j < n)
            {
                if (arr[i][j] == 1)
                {
                    b = i - m;
                    c = n - j;
                    printf("%d", b + c);
                }
            }
            else if (i == m && j < n)
            {
                if (arr[i][j] == 1)
                {
                    c = n - j;
                    printf("%d", c);
                }
            }
            else if (i == m && j > n)
            {
                if (arr[i][j] == 1)
                {
                    c = j - n;
                    printf("%d", c);
                }
            }
            else if (i > m && j == n)
            {
                if (arr[i][j] == 1)
                {
                    b = i - m;
                    printf("%d", b);
                }
            }
            else if (i < m && j == n)
            {
                if (arr[i][j] == 1)
                {
                    b = m - i;
                    printf("%d", b);
                }
            }
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
