#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter N: ");
    scanf("%d", &n);
    int a = n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= a; j++)
        {
            printf("* ");
        }
        a--;
        printf("\n");
    }
}
/*
* * * *
* * *
* *
*
*/