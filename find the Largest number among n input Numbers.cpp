#include <stdio.h>
int main()
{int i,n;
float c,big;
printf("enter the biggest number :");
scanf("%d",&n);
printf("enter the element1:");
scanf("%f",&big);
for(i=2;i<=n;i++)
{
	scanf("%f",&c);
	if(big<c)
	big=c;

}
printf("the largest number %d number is %f",n,big);
return 0;
}
