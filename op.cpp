#include<stdio.h>
#include<conio.h>
int main()
{
	int mat1 [3][3],mat2 [3][3],mat3 [3][3],i,j,k,sum=0;
	printf("Enter the 1st 3*3 matrix:\n");
	for(i=0,i<3,i++)
	{
	 for(j=0,j<3,j++)	
	 scanf("%d",&mat1 [i][j]);
	}
	printf("enter the 2nd 3*3 matrix:\n");
	for(i=0,i<3,i++)
	{
	for(j=0,j<3,j++)
	scanf("%d",&mat2 [i][j]);
	}
	printf("multipling two matrices");
	for(i=0,i<3,i++)
	{
	for(j=0,j<3,j++) 
	{
	sum=0;
	for(k=0,k<3,k++)
	sum=sum+mat1[i][j]*mat2[i][j];
	mat[i][j]=sum;
	}
	}
	printf("multiplication of two given matrices\n");
	for(i=0,i<3,i++)
	{
	for (j=0,j<3,j++)
	printf("%d\t",mat3[i][j]);
	printf("\n");
	getch();
	return 0;
	}
}
