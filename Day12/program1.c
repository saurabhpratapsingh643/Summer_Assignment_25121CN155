#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int n) {
    int original = n;
    int reversed = 0, remainder;
    while (n > 0) {
        remainder = n % 10;
        reversed = (reversed * 10) + remainder;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    printf("%d\n", isPalindrome(121));
    return 0;
}