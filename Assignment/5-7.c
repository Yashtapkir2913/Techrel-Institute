// Using nested if
#include <stdio.h>
int main() {

    int num;

    printf("Enter number: ");
    scanf("%d", &num);
    
    if (num % 5 == 0) {
        if (num % 7 == 0)
            printf("Divisible by both 5 and 7");
        else
            printf("Divisible by 5 but not 7");
    } else
        printf("Not divisible by 5");
    return 0;
}
