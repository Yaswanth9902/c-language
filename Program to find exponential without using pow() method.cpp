#include<stdio.h>
int main()
{int n,exp,exp1;
long long int value=1;
printf("using exponential method:");
scanf("%d%d",&n,&exp);
exp1=exp;
while(exp -- >0)
{    value*=n;
}
printf("%d^%d=%11d\n\n",n,exp1,value);
return 0;
}
