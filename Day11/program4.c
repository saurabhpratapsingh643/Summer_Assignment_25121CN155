#include <stdio.h>

long long findFactorial(int n) {
    if (n < 0) return -1;
    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    printf("%lld\n", findFactorial(5));
    return 0;
}