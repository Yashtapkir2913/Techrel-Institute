#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main()
{
    double x = 4.0, y = 3.0;
    

    // Power & Root
    printf("pow(2, 3) = %.2f\n", pow(2, 3));
    printf("sqrt(16) = %.2f\n", sqrt(16));
    printf("cbrt(27) = %.2f\n", cbrt(27));
    printf("hypot(3, 4) = %.2f\n", hypot(3, 4));

    // Logarithmic & Exponential
    printf("exp(1) = %.2f\n", exp(1));
    printf("log(2.718) = %.2f\n", log(2.718));
    printf("log10(100) = %.2f\n", log10(100));

    // Trigonometric (in radians)
    printf("sin(90 deg) = %.2f\n", sin(M_PI / 2));
    printf("cos(0) = %.2f\n", cos(0));
    printf("tan(45 deg) = %.2f\n", tan(M_PI / 4));
    printf("asin(1) = %.2f radians\n", asin(1));
    printf("acos(0) = %.2f radians\n", acos(0));
    printf("atan(1) = %.2f radians\n", atan(1));
    printf("atan2(3, 4) = %.2f radians\n", atan2(3, 4));

    // Hyperbolic
    printf("sinh(1) = %.2f\n", sinh(1));
    printf("cosh(1) = %.2f\n", cosh(1));
    printf("tanh(1) = %.2f\n", tanh(1));

    // Rounding & Absolute
    printf("ceil(3.2) = %.2f\n", ceil(3.2));
    printf("floor(3.8) = %.2f\n", floor(3.8));
    printf("round(3.6) = %.2f\n", round(3.6));
    printf("fabs(-5.5) = %.2f\n", fabs(-5.5));

    // Other Functions
    printf("fmod(10, 3) = %.2f\n", fmod(10, 3));
    printf("trunc(5.9) = %.2f\n", trunc(5.9));

    double intpart, fracpart;
    fracpart = modf(5.75, &intpart);
    printf("modf(5.75) -> intpart=%.2f, fracpart=%.2f\n", intpart, fracpart);

    return 0;
}
