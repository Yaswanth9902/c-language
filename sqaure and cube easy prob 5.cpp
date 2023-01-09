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
	else
	{
		i>0;
		j=i*i;
		k=i*i*i;
		printf("square is:%d",j);
		printf("\n");
		printf("cube is:%d",k);
	}
	return 0;
}
