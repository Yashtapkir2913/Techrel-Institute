#include <stdio.h>
int main() {

    int days;
    printf("Enter number of late days: ");
    scanf("%d", &days);
    
    if (days <= 5)
        printf("Fine = Rs. 5");
    else if (days <= 10)
        printf("Fine = Rs. 10");
    else
        printf("Fine = Rs. 20");
    return 0;
}
