#include<stdio.h>
int main(){

    int a;

    printf("Enter A number ");
    scanf("%d", &a);

    switch (a)
    {
        case 2: 
        printf("28/29 Days");
        break;

        case 1:
        case 3: 
        case 5: 
        case 7:
        case 9:
        case 11:
        printf("31 Days");
        break;

        case 4:
        case 6:
        case 8:
        case 10:
        case 12:
        printf("30 Days");
        break;
        
        default: printf("Invalid Month");
    }
return 0;
}

    
