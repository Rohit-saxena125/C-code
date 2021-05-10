// calculate salary wages per hour
// Name: Rohit saxena
//Date:21/01/2021
#include <stdio.h>
void main()
{
    int salary_hour, working_hour, hour, salary, pay;
    scanf("%d", &salary_hour);
    scanf("%d", &working_hour);
    if (working_hour > 30)
    //in a week working hour
    {
        hour = working_hour - 30;
        salary = hour * salary_hour;
        pay = 2 * salary + 30 * salary_hour;
        printf("%d", pay);
    }
    else if (working_hour <= 30)
    {
        pay = working_hour * salary_hour;
        printf("%d", pay);
    }
}