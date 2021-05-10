// n number of element insert in array
#include <stdio.h>
void main()
{
    int arr[100], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("{");
    for (i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("\b}");
}