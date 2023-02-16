#include<stdio.h>
int main()
{
	int num,t,n,nt,st;
	printf("enter the total no.of users\n");
	scanf("%d",&n);
	printf("no.of teaching staff\n");
	scanf("%d",&t);
	if(n>0&&t>0&&n>t+t/3)
	{
	nt=t/3;
	st=n-(t+nt);
	printf("non teaching staff\n");
	printf("%d\n",nt);
	printf("student users\n");
	printf("%d",st);
	}
	else
	printf("invalid");	
}
