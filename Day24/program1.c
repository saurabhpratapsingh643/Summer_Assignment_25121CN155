#include <stdio.h>

int main() {
    char str1[] = "abcd";
    char str2[] = "cdab";
    int len1 = 0, len2 = 0;
    
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;
    
    if (len1 != len2) {
        printf("0\n");
        return 0;
    }
    
    char temp[100];
    int i = 0;
    for (i = 0; i < len1; i++) {
        temp[i] = str1[i];
    }
    for (int j = 0; j < len1; j++) {
        temp[i] = str1[j];
        i++;
    }
    temp[i] = '\0';
    
    int isRotation = 0;
    for (int m = 0; m <= len1; m++) {
        int match = 1;
        for (int n = 0; n < len1; n++) {
            if (temp[m + n] != str2[n]) {
                match = 0;
                break;
            }
        }
        if (match == 1) {
            isRotation = 1;
            break;
        }
    }
    
    printf("%d\n", isRotation);
    return 0;
}