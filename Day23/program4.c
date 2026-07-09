#include <stdio.h>

int main() {
    char str[] = "test sample";
    int freq[256] = {0};
    char maxChar = str[0];
    int maxCount = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }
    
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxChar = (char)i;
        }
    }
    
    printf("%c\n", maxChar);
    return 0;
}