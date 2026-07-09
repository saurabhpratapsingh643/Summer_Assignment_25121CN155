#include <stdio.h>

int main() {
    int choice, a, b;
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Exit\n");

    while (1) {
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3) {
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
        }

        if (choice == 1) {
            printf("Result: %d\n", a + b);
        } else if (choice == 2) {
            printf("Result: %d\n", a - b);
        } else if (choice == 3) {
            printf("Result: %d\n", a * b);
        } else if (choice == 4) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}