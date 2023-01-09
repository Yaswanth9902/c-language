#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[]={15,14,25,14,32,14,31};
	int i,j,k,n;
	n=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(arr[i]==arr[j])
		{
			for(k=j;k<n-1;k++)
			{
				arr[k]=arr[k+1];
			}n--;
		}
		
	}
}for (i=0;i<n;i++)
{
	printf("%d\t",arr[i]);
}return 0;
}

