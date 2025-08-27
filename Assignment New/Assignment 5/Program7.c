#include <stdio.h>

int main() {
    int i, j;
    for(i=5; i>=1; i--) {
        for(j=5; j>=1; j--) {
            if(j<i)
                printf("%d", i);
            else
                printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
/*
55555
54444
54333
54322
54321
*/