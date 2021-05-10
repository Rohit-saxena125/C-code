// find sum & average of array
#include <stdio.h>
void main()
{
    int arr[100], n, c = 0, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        c = c + arr[i];
    }
    printf("%d\n%d", c, c / n);
}