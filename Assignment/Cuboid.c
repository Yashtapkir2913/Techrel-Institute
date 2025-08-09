#include <stdio.h>

int main() {
    float l, b, h, sa, vol;
    printf("Enter length, breadth, height: ");
    scanf("%f%f%f", &l, &b, &h);

    sa = 2 * (l * b + l * h + b * h);
    vol = l * b * h;

    printf("Surface Area = %f\n", sa);
    printf("Volume = %f\n", vol);
    return 0;
}
