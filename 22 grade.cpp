#include<stdio.h>
int main()
{
	char grade;
	int sal,bon,total;
	printf("Enter the employee salary:");
	scanf("%d",&sal);
	if(sal<=0)
	{
		printf("invalid");
	}
	else if(sal<=10000)
	{
		bon=2*(sal/100);
		total=sal+bon;
		printf("\nSalary :%d",sal);
		printf("\nBonus :%d",bon);
		printf("\nTotal salary :%d",total);
	}
	else
	printf("\nEnter the grade(a,b):");
	scanf("%s",&grade);
		if(grade=='a'||grade=='A')
		{
			bon=5*(sal/100);
			total=sal+bon;
			printf("\nSalary :%d",sal);
			printf("\nBonus :%d",bon);
			printf("\nTotal salary :%d",total);
		}
		else if(grade=='b'||grade=='B')
		{
			bon=10*(sal/100);
			total=sal+bon;
			printf("\nSalary :%d",sal);
			printf("\nBonus :%d",bon);
			printf("\nTotal salary :%d",total);
		}
		else
		{
			printf("Invalid grade....");
		}
}
