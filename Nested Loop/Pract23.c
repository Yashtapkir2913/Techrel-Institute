#include <stdio.h>
int main()
{
    int n, i, j, k, sp;
    printf("Enter N: ");
    scanf("%d", &n);

    sp = n - 1; // spaces before first number

    for (i = 1; i <= n; i++)
    {
        // print spaces
        for (int q = 1; q <= sp; q++)
        {
            printf(" ");
        }
        sp--;

        // increasing numbers
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        // decreasing numbers
        for (k = i - 1; k >= 1; k--)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}
/*
    1
   121
  12321
 1234321
123454321
*/
