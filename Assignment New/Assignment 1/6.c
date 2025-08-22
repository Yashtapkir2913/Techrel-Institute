#include <stdio.h>

int main() {
    int l, b, h;
    int surface_area, volume;

    // Input dimensions
    printf("Enter length: ");
    scanf("%d", &l);
    printf("Enter breadth: ");
    scanf("%d", &b);
    printf("Enter height: ");
    scanf("%d", &h);

    // Calculate
    surface_area = 2 * (l*b + l*h + b*h);
    volume = l * b * h;

    // Output
    printf("Surface Area = %d\n", surface_area);
    printf("Volume       = %d\n", volume);

    return 0;
}
