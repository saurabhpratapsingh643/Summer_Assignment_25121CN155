#include <stdio.h>

void findSumAndAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double average = (double)sum / size;
    printf("%d\n", sum);
    printf("%.2f\n", average);
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    findSumAndAverage(arr, size);
    return 0;
}