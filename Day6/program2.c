#include <stdio.h>

int main() {
    long long binary_num;
    int decimal_num = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%lld", &binary_num);

    long long temp = binary_num;
    while (temp > 0) {
        rem = temp % 10;
        decimal_num = decimal_num + rem * base;
        base = base * 2;
        temp = temp / 10;
    }

    printf("Decimal equivalent of %lld is: %d\n", binary_num, decimal_num);

    return 0;
}