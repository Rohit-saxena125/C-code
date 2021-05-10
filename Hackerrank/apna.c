// compare to string
#include<stdio.h>
#include<string.h>
void main()
{
    char str[1000],str2[1000];
    gets(str);
    gets(str2);
    strcat(str,str2);
    printf("%s",str);
}