#include<stdio.h>
#include<math.h>
#include<string.h>
void main()
{
  int a=20;
  int *p=&a;
  printf("%d %d %d %d",--*p,*p++,*p--,++*p);
}