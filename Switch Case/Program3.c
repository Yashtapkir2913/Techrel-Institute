#include<stdio.h>
int main(){

    char ch;

    printf("Enter Anything ");
    scanf("%c", &ch);

    switch (ch)
    {
        case 'A'...'Z' : printf("Capital Letters");
        break;
        case 'a'...'z' : printf("Small Letters");
        break;
        case '0'...'9' : printf("Digits");
        break;

        default: printf("Special Characters");
    }
    return 0;
}