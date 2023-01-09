#include<stdio.h>
int main()
{
	int i,j,k;
	printf("enter the number:");
	scanf("%d",&i);
	if(i<0)
	{
		printf("invalid");
	}
	else if(i%2==0)
	{
		printf("given number is even");
	}
	else if(i%2!=0)
	{
		printf("given number is odd");
	}
	else
	{
		i=0;
		printf("given number is even");
	}
	return 0;
}
