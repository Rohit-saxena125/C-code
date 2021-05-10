#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i, t;
    char str[100];
    scanf("%d", &t);
    for (i = 0; i< t;i++)
    {
        scanf("%s", str);
        if (strlen(str) > 10)
        {
            printf("%c%ld%c\n", str[0], strlen(str) - 2, str[strlen(str) - 1]);
        }
        else
            printf("%s\n", str);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}