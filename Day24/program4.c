#include <stdio.h>

int main() {
    char str[] = "bananas";
    int index = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                break;
            }
        }
        if (j == i) {
            str[index] = str[i];
            index++;
        }
    }
    str[index] = '\0';
    
    printf("%s\n", str);
    return 0;
}