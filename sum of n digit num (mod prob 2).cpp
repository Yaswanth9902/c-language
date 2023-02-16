#include<stdio.h>
int main()
{ 
int num,sum=0,d,n;
printf("enter a num:");
scanf("%d",&num);
{
while(num!=0)
{
d=num%10;
sum=sum+d;
num=num/10;
}
printf("%d",sum);
if(num<99,num>1000)
else{
printf("invalid");}
}
return 0;
}
