#include <stdio.h>

int main() {
    char str[] = "apple";
    int freq[256] = {0};
    
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }
    
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }
    return 0;
}