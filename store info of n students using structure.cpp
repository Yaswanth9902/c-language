#include<stdio.h>
int main()
{
	struct student
	{
		int roll;
		char name[10];
		int mark;
	}s1;
	printf("Enter student details\n");
	printf("enter marks :");
	scanf("%d",&s1.mark);
	printf("enter roll :");
	scanf("%d",&s1.roll);
	printf("enter name :");
	scanf("%d",&s1.name);
	return 0;
}
