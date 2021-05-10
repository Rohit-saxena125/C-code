#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>

void getMaxCountElement(int array[], int size)
{
    int i, j, maxCount, count;
    maxCount = INT_MIN;
    for (i = 0; i < size; i++)
    {
        count = 1;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] == array[i])
            {
                count++;
                if (count > maxCount)
                {
                    maxCount = count;
                }
            }
            
        }
    }
    printf("%d", maxCount);
}

int main()
{
    int array[1000], i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    getMaxCountElement(array, n);

    return 0;
}