#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   int n,b=0,j;
    scanf("%d",&n);
    for(j=2;j<n;j++)
    {
        if(j%2==0 && (n-j)%2==0)
        {
            b=1;
            printf("PLAY");
            break;
        }
    }
    if(b==0)
        printf("NOT PLAY");

    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
