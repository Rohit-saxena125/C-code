// find smallest number in an array'
#include <stdio.h>
void main()
{
    int arr[100], n, i, small;
    // input section
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    small = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i]; // logic seaction
        }
    }
    // output section
    printf("%d", small);
}