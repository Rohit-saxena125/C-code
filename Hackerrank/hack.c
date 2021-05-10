#include <stdio.h>
#include <stdlib.h>
void main()
{
    int pass[1000][1000];
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &pass[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j != i; j++)
            if (pass[i] == pass[j + 1])
            {
                printf("incorrect");
                break;
            }
            else if (pass[i] != pass[j + 1])
            {
                printf("correct");
                break;
            }
            break;
    }
}