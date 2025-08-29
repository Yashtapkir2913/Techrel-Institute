#include <stdio.h>
int main()
{
    int n, i, j, k, st = 1, sp;
    printf("Enter N: ");
    scanf("%d", &n);

    sp = n - 1;   

    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= sp; k++)
        {
            printf(" ");
        }
        sp = sp - 1;

        for (j = 1; j <= st; j++)
        {
            printf("*");
        }
        st = st + 2;

        printf("\n");
    }

    return 0;
}
/*
    *
   ***
  *****
 *******
*********
*/
