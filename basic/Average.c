#include <stdio.h>
void main()
{
    int mark1,mark2,mark3,mark5,mark4,total;
    float avg;
    scanf("%d %d %d %d %d",&mark1,&mark2,&mark3,&mark4,&mark5);
    total = mark1+mark2+mark3+mark4+mark5;
    avg = total/5;
    printf("%f",avg);
}