#include <stdio.h>

int main() {
    char str[] = "swiss";
    char result = '\0';
    
    for (int i = 0; str[i] != '\0'; i++) {
        int repeating = 0;
        for (int j = 0; str[j] != '\0'; j++) {
            if (i != j && str[i] == str[j]) {
                repeating = 1;
                break;
            }
        }
        if (repeating == 0) {
            result = str[i];
            break;
        }
    }
    
    if (result != '\0') {
        printf("%c\n", result);
    } else {
        printf("-1\n");
    }
    return 0;
}