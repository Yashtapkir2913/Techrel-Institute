#include <stdio.h>

int main() {
    char ch;

    printf("Enter Anything: ");
    scanf(" %c", &ch);

    if(ch>='A' && ch<='B')// isupper(ch)
    printf("Uppercase");

    else if(ch>='a' && ch<='z') //isupper(ch)
    printf("Lowercase");

    else if(ch>='0' && ch<='9') //isdigit(ch)
    printf("Digits");

    else
    printf("Special Symbol");
    
    return 0;
}
