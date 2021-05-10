#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char str[1000][1000];
    int n, i, b = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", str);
    }
    for (i = 0; i < n; i++)
        for (b = i; b == i;)
        {
            b = strlen(str);
            if (b > 10)
            {
                printf("\todd\n");
            }
            else if ((b < 5) && (b != '\0'))

            {
                printf("%s\n", str);
            }
           
        }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
