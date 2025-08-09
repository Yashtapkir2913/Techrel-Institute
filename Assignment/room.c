#include <stdio.h>

int main() {
    float l, b, h;
    float d1, d2, w1, w2;
    float wall, door, window, paint, roof;

    printf("Enter room length, breadth, height: ");
    scanf("%f%f%f", &l, &b, &h);

    printf("Enter door length and height: ");
    scanf("%f%f", &d1, &d2);

    printf("Enter window length and height: ");
    scanf("%f%f", &w1, &w2);

    wall = 2*(l+b)*h;
    door = d1*d2;
    window = 2*(w1*w2);

    paint = wall-door-window;
    roof = l*b;

    printf("Paint area = %f\n",paint);
    printf("Whitewash area = %f\n",roof);

    return 0;
}
