#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int p, i, N, c, d;
    char str[1000], space[1000], b, a;
    gets(str);
    scanf("%d", &N);
    scanf("%d\n", &p);
    while (str[c] != '\0')
    {
        if (!(str[c] == ' ' && str[c + 1] == ' '))
        {
            space[d] = str[c];
            d++;
        }
        c++;
    }

    space[d] = '\0';

    for (i = 0; i < p; i++)
    {
        for (i = N; i < strlen(str); i++)
        {
              b=str[i]);
        }
        for (i = 0; i < N; i++)
        {
                  a=str[i]);
        }
    }
    for (i = 0; i < p; i++)
    {
        strcat(b, a);
        printf("%c", b);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
