#include <stdio.h>

int main() {
    int arr[] = {1, 4, 6, 8, 10};
    int size = 5;
    int targetSum = 14;
    
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == targetSum) {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }
    
    return 0;
}