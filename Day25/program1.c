#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int result[6];
    int i = 0, j = 0, k = 0;
    
    while (i < 3 && j < 3) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }
    
    while (i < 3) {
        result[k] = arr1[i];
        i++;
        k++;
    }
    while (j < 3) {
        result[k] = arr2[j];
        j++;
        k++;
    }
    
    for (int m = 0; m < 6; m++) {
        printf("%d ", result[m]);
    }
    printf("\n");
    return 0;
}