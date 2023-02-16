#include<stdio.h>
int main()
{
	char str[200],*pt;
	int i=0;
	printf("enter a string : ");
	gets(str);
	pt=&str[0];
	while(*pt!='\0')
	{
		i++;
		pt++;
	}
	printf("length of string : %d",i);
	return 0;
}
