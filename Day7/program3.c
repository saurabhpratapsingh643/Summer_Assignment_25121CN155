#include <stdio.h>

int get_digit_sum(int num) {
    if (num == 0) {
        return 0;
    }
    return (num % 10) + get_digit_sum(num / 10);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Handle negative inputs cleanly
    int check_num = num;
    if (check_num < 0) {
        check_num = -check_num;
    }
    
    printf("Sum of digits of %d is: %d\n", num, get_digit_sum(check_num));
    
    return 0;
}