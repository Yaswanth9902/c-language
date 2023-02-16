#include<stdio.h>
 main()
{int i,num;
printf("eneter the prime factors:");
scanf("%d",&num);
for(i=1;i<=num/2;i++)
{if(num%i==0)
printf("%d\n",i);
}
return 0;
}
