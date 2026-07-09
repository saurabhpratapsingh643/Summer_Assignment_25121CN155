#include <stdio.h>

int main() {
    int arr1[] = {10, 20, 30, 40};
    int arr2[] = {20, 40, 60, 80};
    int size1 = 4;
    int size2 = 4;
    
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\n");
    
    return 0;
}