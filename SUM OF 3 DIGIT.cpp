#include<stdio.h>
int main()
{
	int number,n,d,sum=0;
	printf("enter value of n for n digit number\n");
	scanf("%d",&n);
	printf("enter a n digit number\n");
	 scanf("%d",&number);
	if(number>0&&number<100000000000)
	   
	{
	
	while(number!=0)
	{
		d=number%10;
		sum=sum+d;
		number=number/10;
	}
	printf("%d",sum);
	
}

else
 printf("Invalid Input");
return 0;
}
