#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter N: ");
    scanf("%d", &n);

    for (i = n; i >=1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
/*
12345
1234
123
12
1
*/