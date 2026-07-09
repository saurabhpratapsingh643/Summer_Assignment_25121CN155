#include <stdio.h>

int main() {
    char str[] = "Hello";
    int choice;

    printf("1. Display String\n2. Find Length\n3. Exit\n");

    while (1) {
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("String: %s\n", str);
        } else if (choice == 2) {
            int length = 0;
            while (str[length] != '\0') {
                length++;
            }
            printf("Length: %d\n", length);
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}