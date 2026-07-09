#include <stdio.h>

int main() {
    int arr[] = {11, 22, 33, 44, 55};
    int size = 5;
    int key = 33;
    int low = 0;
    int high = size - 1;
    int foundIndex = -1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            foundIndex = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    printf("%d\n", foundIndex);
    return 0;
}