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
            a=a+2;
            
        }
        printf("\n");
    }
}
/*
1 
3 5
7 9 11
13 15 17 19
21 23 25 27 29
*/