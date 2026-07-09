#include <stdio.h>

int main() {
    char names[3][20] = {"Zack", "Alex", "Mary"};
    char temp[20];
    
    for (int i = 0; i < 3 - 1; i++) {
        for (int j = i + 1; j < 3; j++) {
            int k = 0;
            while (names[i][k] != '\0' && names[j][k] != '\0' && names[i][k] == names[j][k]) {
                k++;
            }
            if (names[i][k] > names[j][k]) {
                int m = 0;
                while (names[i][m] != '\0') {
                    temp[m] = names[i][m];
                    m++;
                }
                temp[m] = '\0';
                
                m = 0;
                while (names[j][m] != '\0') {
                    names[i][m] = names[j][m];
                    m++;
                }
                names[i][m] = '\0';
                
                m = 0;
                while (temp[m] != '\0') {
                    names[j][m] = temp[m];
                    m++;
                }
                names[j][m] = '\0';
            }
        }
    }
    
    for (int i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}