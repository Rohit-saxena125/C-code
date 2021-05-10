#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];

    printf("enter the string :");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)

    {
        if (str[i] >= 'A' && str[i] <= 'Z')

            str[i] += 32;

        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;//change the upper character in lower charachter as soo on 
    }
    printf("\noutput string\n");
    printf("%s", str);
}