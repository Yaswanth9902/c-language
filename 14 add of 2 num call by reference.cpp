#include <stdio.h>
long addTwoNumbers(long *, long *);
 
int main()
{
   long f, s, sum;
   printf(" Input the first number : ");
   scanf("%ld", &f);
   printf(" Input the second  number : ");
   scanf("%ld", &s);   
   sum = addTwoNumbers(&f, &s);
   printf(" The sum of %ld and %ld  is %ld\n\n", f, s, sum);
   return 0;
}
long addTwoNumbers(long *n1, long *n2) 
{
   long sum;
   sum = *n1 + *n2;
   return sum;
}
