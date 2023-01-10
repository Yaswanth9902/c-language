#include <stdio.h>
int checkPerfect(int n1);
void PerfectNumbers(int lowLimit, int highLimit);

int main()
{
    int lowLimit, highLimit;
    printf(" Input lowest search limit of perfect numbers : ");
    scanf("%d", &lowLimit);
    printf(" Input highest search limit of  perfect numbers : ");
    scanf("%d", &highLimit);
     
    printf("\n The perfect numbers between %d to %d are : \n", lowLimit, highLimit);
    PerfectNumbers(lowLimit, highLimit);
    printf("\n\n"); 
    return 0;
}
int checkPerfect(int n1)
{
    int i, sum;
    sum = 0;
    for(i=1; i<n1; i++)
    {
        if(n1 % i == 0)
        {
            sum += i;
        }
    }
    if(sum == n1)
        return 1;
    else
        return 0;
}
void PerfectNumbers(int lowLimit, int highLimit)
{
    while(lowLimit <= highLimit)
    {
        if(checkPerfect(lowLimit))
        {
            printf(" %d  ", lowLimit);
        }
        lowLimit++;
    }   
}
