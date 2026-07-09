#include <stdio.h>

int main() {
    char str[] = "Hello";
    int length = 0;
    
    while (str[length] != '\0') {
        length++;
    }
    
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    
    printf("%s\n", str);
    return 0;
}