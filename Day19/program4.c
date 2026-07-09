#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int diagonalSum = 0;
    
    for (int i = 0; i < 3; i++) {
        diagonalSum += matrix[i][i];
    }
    
    printf("%d\n", diagonalSum);
    return 0;
}