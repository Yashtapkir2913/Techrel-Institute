#include<stdio.h>

int main() {
    int x, y;

    printf("Enter start value x: ");
    scanf("%d", &x);

    printf("Enter end value y: ");
    scanf("%d", &y);

    printf("Even numbers from %d to %d are:\n", x, y);
    for(int i = x; i <= y; i++) { // if(i % 2 != 0) only for Odd Numbers
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
