#include<stdio.h>
int main()
{
    int sub1,sub2,sub3;
    float marks,percentage;
    printf("Enter the marks of three subject \n");
    scanf("%d %d %d",&sub1,&sub2,&sub3);
    marks = sub1 + sub2 + sub3;
    percentage = (marks/300)*100;
    printf("the percentage %f %% \ntotal marks are %f",percentage,marks);
    return 0 ;
}