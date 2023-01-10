#include<stdio.h>
#include<stdlib.h>
int main()
{
	int oddeven(int);
	int num;
	printf("enter a number ");
	scanf("%d",&num);
	oddeven(num);
	return 0;
}
int oddeven(int n)
{
	if(n%2==0)
	printf("even");
	else
	printf("odd");
}
