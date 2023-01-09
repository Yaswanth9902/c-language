#include<stdio.h>

int main()
{
	int a ;o
	printf("Enter the age of the person: ");
	scanf("%d",&a);
	if (a>=18)
	{
		printf("Eigible for voting");
	}
	else if(a<0)
	{
		printf("enter a valid age");
	 }	
	
	else
	{
		printf("Not eligible for voting\n");
		printf("you are allowed to vote after %d years",18-a);
		
	}	

	return 0;
}
