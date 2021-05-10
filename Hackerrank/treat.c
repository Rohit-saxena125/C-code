#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, arr[100], i, k = 1;
    scanf("%d\n", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
        if (arr[i] >= 100)
        {
            printf("INVALID");
            k = 0;
            exit(0);
        }
        else if (arr[i] < 100)
            if (arr[i] < 10 || arr[i] == 10)
                printf("%d ", arr[i]);
            else if (arr[i] > 10)
                if (arr[i] % 2 == 0)
                    printf("%d ", arr[i] / 10);
                else
                {
                    if (arr[i] % 2 == 1)
                        printf("%1.1f ", (float)arr[i] / 10);
                }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}