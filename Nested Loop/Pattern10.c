#include <stdio.h>
int main() {
    int i, j, n;
    printf("Enter N: ");
    scanf("%d",&n);

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            if (i%2==0)
            printf("1 ");
            else 
            printf("0 ");
         
        }
        printf("\n");
    }

    return 0;
}
/*
0 0 0 0 0 
1 1 1 1
0 0 0
1 1
0
*/