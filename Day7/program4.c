#include <stdio.h>

int reverse_number(int num, int reversed_so_far) {
    if (num == 0) {
        return reversed_so_far;
    }
    return reverse_number(num / 10, reversed_so_far * 10 + (num % 10));
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int result = reverse_number(num, 0);
    printf("Reversed number: %d\n", result);
    
    return 0;
}