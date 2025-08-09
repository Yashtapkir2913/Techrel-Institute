#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);

    (n&1)? printf("Odd Number"):printf("Even Number");
    return 0;
}