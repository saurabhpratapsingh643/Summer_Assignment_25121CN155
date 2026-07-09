#include <stdio.h>

int main() {
    char str1[] = "listen";
    char str2[] = "silent";
    int count1[256] = {0};
    int count2[256] = {0};
    int isAnagram = 1;
    
    for (int i = 0; str1[i] != '\0'; i++) {
        count1[(int)str1[i]]++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        count2[(int)str2[i]]++;
    }
    
    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            isAnagram = 0;
            break;
        }
    }
    
    printf("%d\n", isAnagram);
    return 0;
}