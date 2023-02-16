#include<stdio.h>
int main()
{
	int a1;
	int i,n;
	printf("no of elements to store in a array\n =");
	scanf("%d",&n);
	printf("enter elements in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a1[i]);
	}
	printf("elements entered by you\n");
	for(i=0;i<n;i++)
	{
		printf("elements=%d%d\n",i,a1[i]);
	}
	return 0;
}
