#include <stdio.h>

int main() {
    char words[3][20] = {"banana", "kiwi", "apple"};
    char temp[20];
    int lengths[3] = {0};
    
    for (int i = 0; i < 3; i++) {
        int len = 0;
        while (words[i][len] != '\0') {
            len++;
        }
        lengths[i] = len;
    }
    
    for (int i = 0; i < 3 - 1; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (lengths[i] > lengths[j]) {
                int tLen = lengths[i];
                lengths[i] = lengths[j];
                lengths[j] = tLen;
                
                int m = 0;
                while (words[i][m] != '\0') {
                    temp[m] = words[i][m];
                    m++;
                }
                temp[m] = '\0';
                
                m = 0;
                while (words[j][m] != '\0') {
                    words[i][m] = words[j][m];
                    m++;
                }
                words[i][m] = '\0';
                
                m = 0;
                while (temp[m] != '\0') {
                    words[j][m] = temp[m];
                    m++;
                }
                words[j][m] = '\0';
            }
        }
    }
    
    for (int i = 0; i < 3; i++) {
        printf("%s\n", words[i]);
    }
    return 0;
}