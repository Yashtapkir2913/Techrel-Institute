#include<stdio.h>

int main() {
    int x, y, sum = 0;

    printf("Enter start value x: ");
    scanf("%d", &x);

    printf("Enter end value y: ");
    scanf("%d", &y);

    for(int i = x; i <= y; i++) {
        if(i % 2 == 0) {    // For even numbers and for odd i%2!==0
            sum += i;
        }
    }

    printf("Sum of even numbers from %d to %d = %d\n", x, y, sum);
    return 0;
}
