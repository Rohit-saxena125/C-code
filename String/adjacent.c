#include <stdio.h>
#include <string.h>

// main function
int main()
{
	char string[30]={0};
	char c=0;
	int length=0,i=0;
	printf("\nEnter the string : ");
	fgets(string,30,stdin);
	length = strlen(string);

	if(length%2==0)
	{
		for(i=0;i<length;i+=2)
		{
			c = string[i] ; 
			string[i] = string[i+1];  
			string[i+1] = c;
		}
		printf("\nAfter Swap String : %s",string);
	}
	else
	{
		printf("\n odd length.\n");
	}
	
	return 0;
}