#include <stdio.h>

int main() {
    int a[100], n, i, j, temp;
    int flag = 1;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    i = 0;   
    while(flag) {
        flag = 0;
        for(j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 1;
            }
        }
        i++;
    }

    printf("Sorted elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
