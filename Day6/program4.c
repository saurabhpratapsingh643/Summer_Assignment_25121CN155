#include <stdio.h>

int main() {
    double base, result = 1.0;
    int exponent;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    int exp = exponent;
    if (exp < 0) {
        exp = -exp;
    }

    for (int i = 1; i <= exp; i++) {
        result *= base;
    }

    if (exponent < 0) {
        result = 1.0 / result;
    }

    printf("%.2lf raised to the power of %d is: %.6lf\n", base, exponent, result);

    return 0;
}