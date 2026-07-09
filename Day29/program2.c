#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    int choice, searchKey, found;

    printf("1. Display Array\n2. Search Element\n3. Exit\n");

    while (1) {
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (int i = 0; i < size; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        } else if (choice == 2) {
            printf("Enter element to search: ");
            scanf("%d", &searchKey);
            found = 0;
            for (int i = 0; i < size; i++) {
                if (arr[i] == searchKey) {
                    printf("Found at index %d\n", i);
                    found = 1;
                    break;
                }
            }
            if (!found) printf("Not found!\n");
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}