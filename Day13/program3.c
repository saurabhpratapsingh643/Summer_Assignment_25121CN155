#include <stdio.h>

void findMinMax(int arr[], int size) {
    if (size <= 0) return;
    int smallest = arr[0];
    int largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) smallest = arr[i];
        if (arr[i] > largest) largest = arr[i];
    }
    printf("%d\n", smallest);
    printf("%d\n", largest);
}

int main() {
    int arr[] = {12, 45, 2, 99, 24};
    int size = sizeof(arr) / sizeof(arr[0]);
    findMinMax(arr, size);
    return 0;
}