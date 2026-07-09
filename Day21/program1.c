#include <stdio.h>

int main() {
    char str[] = "Hello";
    int length = 0;
    
    while (str[length] != '\0') {
        length++;
    }
    
    printf("%d\n", length);
    return 0;
}