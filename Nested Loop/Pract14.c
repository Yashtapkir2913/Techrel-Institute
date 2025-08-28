#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter N: ");
    scanf("%d", &n);
    int a= n/2+1;

    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            
            if(j==a || i==a)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
}
/*
    *
    *
* * * * *
    *
    *
*/