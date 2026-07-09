#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};
    int size1 = 4;
    int size2 = 4;
    int uni[8];
    int uniSize = 0;
    
    for (int i = 0; i < size1; i++) {
        uni[uniSize] = arr1[i];
        uniSize++;
    }
    
    for (int i = 0; i < size2; i++) {
        int exists = 0;
        for (int j = 0; j < uniSize; j++) {
            if (arr2[i] == uni[j]) {
                exists = 1;
                break;
            }
        }
        if (exists == 0) {
            uni[uniSize] = arr2[i];
            uniSize++;
        }
    }
    
    for (int i = 0; i < uniSize; i++) {
        printf("%d ", uni[i]);
    }
    printf("\n");
    
    return 0;
}