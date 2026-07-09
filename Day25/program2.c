#include <stdio.h>

int main() {
    char str1[] = "apple";
    char str2[] = "pear";
    int processed[256] = {0};
    
    for (int i = 0; str1[i] != '\0'; i++) {
        for (int j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j] && processed[(int)str1[i]] == 0) {
                printf("%c ", str1[i]);
                processed[(int)str1[i]] = 1;
                break;
            }
        }
    }
    printf("\n");
    return 0;
}