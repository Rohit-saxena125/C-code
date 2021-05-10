#include <stdio.h>
void main()
{
    int n, i, arr[1000], sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n / 2; i++)
    {
        if (n % 2 == 0)
        {
            sum = arr[i] + arr[(n - 1) - i];
            printf("%d\t", sum);
        }
    }
}