#include <stdio.h>
int main()
{
    int n, i, j,a;
    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <=n; i++)
    {
        a=1;
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
            a=a+2;
        }
        printf("\n");
    }
}
/*
1
12
123
1234
12345
*/