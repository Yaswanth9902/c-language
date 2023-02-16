#include<stdio.h>
int main()
{
	int n,marks,i,sum=0;
	float aggregate=0.0;
	printf("enter no of subjects :");
	scanf("%d",&n);
	printf("enter marks in four subjects :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&marks);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+marks;
		aggregate=sum/n;
	}
	printf("sum = %d\n",sum);
	printf("aggregate = %f",aggregate);
	if(aggregate<50)
    {
        printf("\nfail");
    }
    else if(aggregate>=60 && aggregate<75)
    {
        printf("\nfirst division");
    }
    else if(aggregate>=50 && aggregate<60)
    {
        printf("\nsecond division");
    }
    else if(aggregate>=40 && aggregate<50)
    {
        printf("\nthird division");
    }
    else
    {
        printf("\ndistinction");
    }
}
