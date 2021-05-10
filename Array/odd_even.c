// seprate odd even array
#include <stdio.h>
void main()
{
    int arr[100], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("{");
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            printf("%d,", arr[i]);
    }
    printf("\b}");
    printf("{");
    for (i = 0; i < n; i++)
    {
        if (i% 2 == 1)
            printf("%d,", arr[i]);
    }
    printf("\b}");
}