#include <stdio.h>

int main() {
    char str[] = "swiss";
    char result = '\0';
    int found = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                result = str[i];
                found = 1;
                break;
            }
        }
        if (found == 1) {
            break;
        }
    }
    
    if (found == 1) {
        printf("%c\n", result);
    } else {
        printf("-1\n");
    }
    return 0;
}