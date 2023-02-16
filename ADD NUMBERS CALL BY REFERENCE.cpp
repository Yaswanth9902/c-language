#include <stdio.h>
#include <conio.h>
int add(int *, int *);
int main()
{
    int a,b,sum;
    printf("enter two integers to add :");
    scanf("%ld %ld",&a,&b);
    sum = add(&a,&b);
    printf("%ld + %ld = %ld \n",a,b,sum);
}
int add(int *x, int *y) 
{
    int sum;
    sum = *x + *y;
    return sum;
}

