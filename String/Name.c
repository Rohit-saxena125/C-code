// Read name through user
#include<stdio.h>
void main()
{
    char name[100];
   // scanf("%s",name);
    //printf("%s",name);
    scanf("%[^\n]s",name);
   // gets(name);
    printf("%s",name);
}