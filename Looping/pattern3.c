#include <stdio.h>

int main()
{
    int r,c,t;
    int n;
    printf("Enter minimun 6 or greater than 6 for see exact RISHABH");
    scanf("%d",&n);

    for(r=0;r<=n;r++)
    {
        for(c=0;c<n;c++)
        {
            if (c==0 && r<n)
            {printf("*");}
            else if (r==0 && (c>0 && c<=n))
            {printf("*");}
            else if (r==n/2-1 && (c>0 && c<=n))
            {printf("*");}
            else if ((r>=0 && r<=n/2-1) && c==n-1)
            {printf("*");}
            else if (r>=n/2 && r==c)
            {printf("*");}
            else
            {printf(" ");}

        }
        printf("\n");
    }
    
    for(r=0;r<=n;r++)
    {
        for(c=0;c<n;c++)
        {
            if (c==n/2)
            {printf("*");}
            else if (r==0 && (c>=0 && c<n))
            {printf("*");}
            else if (r==n && (c>=0 && c<n))
            {printf("*");}
                else
            {printf(" ");}

        }
        printf("\n");
    }
     printf("\n");
    for(r=0;r<=n;r++)
    {
        for(c=0;c<n;c++)
        {
            if (c==0 && (r>=0 && r<=n/2))
            {printf("*");}
            else if (r==0 && (c>0 && c<=n))
            {printf("*");}
            else if (r==n/2 && (c>0 && c<=n))
            {printf("*");}
            else if(c==n-1 && (r>=n/2 && r<=n))
            {printf("*");}
            else if (r==n && (c>0 && c<=n))
            {printf("*");}
            else
            {printf(" ");}

        }
        printf("\n");
    }
     printf("\n");
    for(r=0;r<=n;r++)
    {
        for(c=0;c<n;c++)
        {
            if (c==0)
            {printf("*");}
            else if (r!=0 && c==0 || c==n-1)
                {printf("*");}
            else if (r==n/2 && (c>=0 && c<n))
            {printf("*");}
                else
            {printf(" ");}

        }
        printf("\n");
    }
     printf("\n");
    for(r=0;r<=n;r++)
    {
        for(c=0;c<n;c++)
        {
            if (r==0 && (c>0 && c<n-1))
            {printf("*");}
            else if (r!=0 && (c==0 || c==n-1))
            {printf("*");}
            else if (r==n-(n/2) && (c>0 && c<n-1))
            {printf("*");}
            else
            {printf(" ");}

        }
        printf("\n");
    }
     printf("\n");
    for(r=1;r<=n/2;r++)
        {
            printf("*");
            for(c=1;c<=r/2;c++)
            printf(" ");
            printf("*");
            printf("\n");
        }
        for(r=1;r<=n/2;r++)
        {
            printf("*");
            for(c=r;c<=n/2;c++)
            printf(" ");
            printf("*");
            printf("\n");
        }
        for(r=1;r<=n/2;r++)
        {
            printf("*");
            for(c=1;c<=r/2;c++)
            printf(" ");
            printf("*");
            printf("\n");
        }
        for(r=1;r<=n/2;r++)
        {
            printf("*");
            for(c=r;c<=n/2;c++)
            printf(" ");
            printf("*");
            printf("\n");
        }
         printf("\n");
    for(r=0;r<=n;r++)
    {
        for(c=0;c<n;c++)
        {
            if (c==0)
            {printf("*");}
            else if (r!=0 && c==0 || c==n-1)
                {printf("*");}
            else if (r==n/2 && (c>=0 && c<n))
            {printf("*");}
                else
            {printf(" ");}

        }
        printf("\n");
    }
    return 0;
}