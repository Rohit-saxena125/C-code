#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
int arr[1000];
    int n,i,b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    for(i=0;i<n;i++)
        if(arr[i]%2==1)
        {
            b=b+arr[i];
      
        }
    printf("%d",b);
    
      
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
