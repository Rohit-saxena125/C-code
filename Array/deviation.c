// find standard deviation help of array

#include <stdio.h>
#include <math.h>
void main()
{
    int arr[100], n, i;
    float b = 0, c, a = 0, sigma;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // logic section
    for (i = 0; i < n; i++)
    {
        b = b + arr[i]; // b is used as a xi
    }
    c = b / n; // c is used as a maen
    for (i = 0; i < n; i++)
    {
        a += pow(arr[i] - c, 2);
    }

    sigma = sqrt(a / n);
    printf("%f", sigma);
}
