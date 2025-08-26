#include <stdio.h>

int main() {
    int a[100], n, i; 
    printf("Enter N: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    
    for (i = 0; i < n / 2; i++) {
        int temp = a[i]; 
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

   
    printf("Reversed array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n"); 

    return 0;
}
//Reverse of Array