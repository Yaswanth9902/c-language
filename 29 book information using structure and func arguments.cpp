#include<stdio.h>
#include<string.h>
struct book
{
int bookid;
char title[30];
char author[20];
float price;
};
void print_book(struct book b1);
int main()
{
struct book b1;
printf("\nenter book details: \n");
printf("\nenter title :");
scanf("%s",&b1.title);
printf("enter author :");
scanf("%s",&b1.author);
printf("enter price :");
scanf("%f",&b1.price);
print_book(b1);
}
void print_book(struct book b1)
{
printf("\nBook details = \n");
printf("\ntitle:%s \nauthor:%s \nprice:%3.1f ",b1.title,b1.author,b1.price);
}
