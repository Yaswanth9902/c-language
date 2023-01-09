#include<stdio.h>
int main()
{
	int arr[]={16,18,27,16,23,21,19};
	int i;
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("original array:\n");
	for(int i=0;i<n;i++);
	{
	    printf("%d",arr[i]);
    }
    printf("\n");
    printf("array in reverse order:\n");
    for(int i=n-1;i>=0;i--)
	{
    	printf("%d",arr[i]);
	}
	return 0;
}
