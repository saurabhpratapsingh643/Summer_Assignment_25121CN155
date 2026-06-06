#include <stdio.h>

int main() {
    int N, i, isprime = 1;

    printf("Enter the number: ");
    scanf("%d", &N);

    if (N <= 1) {
    printf("%d is neither prime nor composite", N);
    return 0;
    }

    for (i = 2; i <= N / 2; i++) {
        if (N % i == 0) {
        isprime = 0;
        break;
        }
    }

    if (isprime)
    printf("%d is a prime number", N);
    else
    printf("%d is not a prime number", N);

    return 0;
}