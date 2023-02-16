#include <stdio.h>
int main() 
{
   int arr1[10];
   int i,n, sum = 0;
   int *pt;
   pt = &arr1[0];
   printf(" Input the number of elements to store in the array (max 10) : ");
   scanf("%d",&n);
   printf(" Input %d number of elements in the array : \n",n);
   for(i=0;i<n;i++)
      {
	  scanf("%d",&arr1[i]);
	  } 	
   for (i = 0; i < n; i++) {
      sum = sum + i;
      i++;
   }
   printf(" The sum of array is : %d\n", sum);
}
