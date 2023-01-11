#include<stdio.h>

	struct student
	{
		int rollnum;
		char name[10];
		int marks;
	};
	int main()
	{
	struct student std;
	struct student *ptr;
	
	ptr=&std;
	
	printf("Enetr the student details :\n");
	printf("Enter the name :\n");
	gets(ptr->name);
	printf("enter roll num :\n");
	scanf("%d",&ptr->rollnum);
	printf("enter marks :\n");
	scanf("%d",&ptr->marks);
	
	printf("entered details :\n");
	printf("name is:%s \nroll no is:%d \nmarks is %d \n",ptr->name,ptr->rollnum,ptr->marks);
	
	return 0;
}
