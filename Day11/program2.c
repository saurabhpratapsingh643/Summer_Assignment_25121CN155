#include <stdio.h>

int findMaximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    printf("%d\n", findMaximum(15, 21));
    return 0;
}