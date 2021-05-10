// reverse order of n number of element
#include <stdio.h>
void main()
{
    int arr[100], n, i;
    scanf("%d", &n);
    printf("{");
    for (i = 0; i < n; i++)
    {
        scanf("%d,", &arr[i]);
    }
    printf("\b}");
    printf("{");
    for (i = n - 1; i > 0; i--)
    {
        printf("%d,", arr[i]);
    }
    printf("\b}");
}