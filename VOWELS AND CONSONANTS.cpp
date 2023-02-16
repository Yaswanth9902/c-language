#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
int i,vowels=0,consonants=0;
printf("enter the string:\n");
gets(s);
for(i=0;s[i];i++)
{
	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')vowels++;
	else consonants++;
}
printf("consonants%d\n",consonants);
printf("vowels%d\n",vowels);
return 0;
}
