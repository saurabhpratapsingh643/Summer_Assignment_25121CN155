#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {34, 78, 12, 89, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", linearSearch(arr, size, 12));
    return 0;
}