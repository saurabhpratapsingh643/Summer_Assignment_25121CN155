#include <stdio.h>

int main() {
    char str[] = "Hello world welcome to c";
    int words = 0;
    
    if (str[0] != '\0') {
        words = 1;
    }
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            words++;
        }
    }
    
    printf("%d\n", words);
    return 0;
}