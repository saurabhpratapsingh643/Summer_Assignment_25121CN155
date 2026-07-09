#include <stdio.h>

int main() {
    int arr[] = {1, 3, 2, 1, 4, 1, 3, 2, 2, 2};
    int size = 10;
    int maxElement = arr[0];
    int maxCount = 0;
    
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }
    
    printf("%d\n", maxElement);
    return 0;
}