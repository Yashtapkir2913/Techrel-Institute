#include<stdio.h>

int main() {
    int x, y, ch, num, temp;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    printf("\n1. Equality\n2. Less Than\n3. Quotient and Remainder\n4. Range\n5. Swap\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch(ch) {
        case 1:
            if(x == y)
                printf("x is equal to y\n");
            else
                printf("x is not equal to y\n");
            break;

        case 2:
            if(x < y)
                printf("x is less than y\n");
            else
                printf("x is not less than y\n");
            break;

        case 3:
            printf("Quotient = %d\n", x / y);
            printf("Remainder = %d\n", x % y);
            break;

        case 4:
            printf("Enter a number: ");
            scanf("%d", &num);
            if((num >= x && num <= y) || (num >= y && num <= x))
                printf("Number is in range\n");
            else
                printf("Number is not in range\n");
            break;

        case 5:
            temp = x;
            x = y;
            y = temp;
            printf("After swapping: x = %d, y = %d\n", x, y);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
