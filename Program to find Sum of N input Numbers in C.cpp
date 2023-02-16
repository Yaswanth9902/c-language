#include<stdio.h>
int main()
{int i,n,sum=0,value;
printf("sum of n numbers:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	scanf("%d",&value);
	sum+=value;
}
printf("enter the number=%d\n",sum);
return 0;
}
