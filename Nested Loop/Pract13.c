#include <stdio.h>
int main()
{
    int n, i, j,a;
    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if(i%2==1)
            printf("%d", j);
            else
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }
}
/*
1
AB
123
ABCD
12345
ABCDEF
1234567
*/