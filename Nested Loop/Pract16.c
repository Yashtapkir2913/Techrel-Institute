#include <stdio.h>
int main()
{
    int n, i, j,a=1;
    printf("Enter N: ");
    scanf("%d", &n);
   

    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}
/*
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/