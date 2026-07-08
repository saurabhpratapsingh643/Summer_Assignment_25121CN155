#include <stdio.h>

int main() {
    int num, original_num, last_digit, total_sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original_num = num;
    
    while (num > 0) {
        last_digit = num % 10;
        
        int fact = 1;
        for (int i = 1; i <= last_digit; i++) {
            fact *= i;
        }
        
        total_sum += fact;
        num = num / 10;
    }
    
    if (total_sum == original_num) {
        printf("%d is a Strong Number.\n", original_num);
    } else {
        printf("%d is NOT a Strong Number.\n", original_num);
    }
    
    return 0;
}