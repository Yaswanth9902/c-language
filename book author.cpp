#include<stdio.h>
#include<string.h>
struct book	
{
char bookid[20];
char title[30];
char author[20];
float price;
};
void print_book(struct book b1);
int main()
{
struct book b1;
printf("\n enter book details\n ");
printf("Enter title of the book :\n");
scanf("%s",&b1.title);
printf("enter the author name :\n");
scanf("%s",&b1.author);
printf("enter the price of the book :\n");
scanf("%f",&b1.price);

print_book(b1);
}
void print_book(struct book b1)
{
printf("\n book details:\n title of the book is %s\n author of the book is %s\n price of the book is %f",b1.title,b1.author,b1.price);
}

