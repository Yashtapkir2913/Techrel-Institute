#include<stdio.h>
int main()
{
    int n,i,sum;

    printf("Enter The Number:");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
    if(n%i==0)
    sum = sum+i; // used to find the sum of the factors obtained
    printf("\n%d", i);
    }
    printf("\nSum is %d", sum);
    
}