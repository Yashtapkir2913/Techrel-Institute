#include <stdio.h>

int main() {
    int i, j;
    for(i=1; i<=5; i++) {
        for(j=i; j<=5; j++)
            printf("%d", j);
        for(j=i-1; j>=1; j--)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}
/*
12345
23451
34521
45321
54321
*/