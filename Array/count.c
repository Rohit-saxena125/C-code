// find the positive number , negative number or zero number in an array
#include <stdio.h>
void main()
{
    int arr[100], n, i, c_pos = 0, c_neg = 0, c_zero = 0;
    scanf("%d", &n);
    // input section
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // logic section
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            c_pos++;
        }
        else if (arr[i] == 0)
        {
            c_zero++;
        }
        else if (arr[i] < 0)
        {
            c_neg++;
        }
    } // output section
    printf("%d\n%d\n%d\n", c_pos, c_zero, c_neg);
}