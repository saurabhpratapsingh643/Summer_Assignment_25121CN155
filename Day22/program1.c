#include <stdio.h>

int main() {
    char str[] = "radar";
    int length = 0;
    
    while (str[length] != '\0') {
        length++;
    }
    
    int isPalindrome = 1;
    int start = 0;
    int end = length - 1;
    
    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }
    
    printf("%d\n", isPalindrome);
    return 0;
}