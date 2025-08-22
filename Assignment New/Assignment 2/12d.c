#include<stdio.h>
#include<math.h>
int main(){

    int a,b,c;
    printf("Enter three Numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("Maximum is: %.2f", fmax(a,fmax(b,c)));
    // fmax gives the maximum value between two numbers.
    // At first max value from b and c is calculated
    // Then the max value of above is computed with a. Hence we get the result.
}