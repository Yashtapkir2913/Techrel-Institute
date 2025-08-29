#include <stdio.h>
int main()
{
    int n, i, j,k, ch;
    printf("Enter N: ");
    scanf("%d", &n);
   

    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <=n-i; j++)
        {
            printf(" ");          
        }
       for(ch=0;ch<i; ch++)
       {
        printf("%c",'A'+ch);
       }
       printf("\n");
    }
}
/*
    A
   AB
  ABC
 ABCD
ABCDE
*/