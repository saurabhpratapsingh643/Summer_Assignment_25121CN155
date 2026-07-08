#include <stdio.h>

int find_fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return find_fibonacci(n - 1) + find_fibonacci(n - 2);
}

int main() {
    int terms;
    
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);
    
    printf("Fibonacci Series: ");
    for (int i = 0; i < terms; i++) {
        printf("%d ", find_fibonacci(i));
    }
    printf("\n");
    
    return 0;
}