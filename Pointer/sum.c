#include <stdio.h>

int update(int *a,int *b)
{
   int x,y;
   *a=x+y;
  if(x>y)
   {
       *b=x-y;
   }
   else if(x<y)
   {
       *b=y-x;
   }
   return(*a,*b);
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}