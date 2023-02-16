#include<stdio.h>
int main()
{
	int num,t,n,i,nt,st;
	printf("enter the total no.of users");
	scanf("%d",&n);
	printf("no.of teaching staff");
	scanf("%d",&t);
	if(n>0&&t>0&&n>t+t/3)
	{
	nt=t/3;
	st=n-(t+nt);
	printf("student users:%d",st);
	}
	else
	{
	printf("invalid");
	}
}
