// find largest number in an array'
#include <stdio.h>
void main()
{
    int arr[100], n, i,lar;
    // input section
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    lar=arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > lar)
        {
         lar=arr[i]; // logic seaction
        }
    }
    // output section
    printf("%d", lar);
}