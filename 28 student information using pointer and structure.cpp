#include <stdio.h>
struct student
{
    char name[30];
    int roll;
    int marks;
};
int main()
{
    struct student  std,*p;                
    p= &std;                 
    printf("Enter details of student: ");
    printf("\nName ?:");
    gets(p->name);
    printf("Roll No ?:");
    scanf("%d",&p->roll);
    printf("marks ?:"); 
    scanf("%d",&p->marks);
    printf("\nEntered details: ");
    printf("\nName:%s \nRollNo: %d \nmarks: %d\n",p->name,p->roll,p->marks);
    return 0;
}
