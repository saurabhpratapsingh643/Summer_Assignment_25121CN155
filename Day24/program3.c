#include <stdio.h>

int main() {
    char str[] = "I love programming in C";
    int maxLen = 0, currLen = 0;
    int maxStart = 0, currStart = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            if (currLen == 0) {
                currStart = i;
            }
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = currStart;
            }
            currLen = 0;
        }
    }
    if (currLen > maxLen) {
        maxLen = currLen;
        maxStart = currStart;
    }
    
    for (int i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}