#include<stdio.h>
int main()
{
	struct student
	{
		int roll;
		char name[10];
		int marks;
	}d;
	
	printf("enter student details\n");
	printf("roll number :");
	scanf("%d",&d.roll);
	printf("enter marks :");
	scanf("%d",&d.marks);
	printf("enter name :");
	scanf("%d",&d.name);
	return 0;
}
