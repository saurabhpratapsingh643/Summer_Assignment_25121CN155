#include <stdio.h>

int find_factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * find_factorial(n - 1);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial of negative numbers is not defined.\n");
    } else {
        printf("Factorial of %d is: %d\n", num, find_factorial(num));
    }
    
    return 0;
}