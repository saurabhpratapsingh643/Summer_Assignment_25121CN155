#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {2, 4, 5}, {3, 5, 6}};
    int isSymmetric = 1;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }
    
    printf("%d\n", isSymmetric);
    return 0;
}