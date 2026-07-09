#include <stdio.h>

void findDuplicates(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                int k;
                for (k = 0; k < i; k++) {
                    if (arr[k] == arr[i]) break;
                }
                if (k == i) {
                    printf("%d ", arr[i]);
                }
                break;
            }
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    findDuplicates(arr, size);
    return 0;
}