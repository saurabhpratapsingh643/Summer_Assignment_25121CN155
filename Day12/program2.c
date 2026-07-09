#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isArmstrong(int n) {
    int original = n, temp = n;
    int digits = 0, sum = 0;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        int remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }
    return sum == original;
}

int main() {
    printf("%d\n", isArmstrong(153));
    return 0;
}