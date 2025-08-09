#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  

    printf("Previous Character: %c\n", ch - 1);
    printf("Next Character: %c\n", ch + 1);
    
    return 0;
}
