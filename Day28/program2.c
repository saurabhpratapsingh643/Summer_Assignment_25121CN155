#include <stdio.h>

int main() {
    int accountNumbers[2] = {1001, 1002};
    int balances[2] = {3000, 7000};
    int searchAcc, choice, amount;

    printf("Enter Account Number: ");
    scanf("%d", &searchAcc);

    int index = -1;
    for (int i = 0; i < 2; i++) {
        if (accountNumbers[i] == searchAcc) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Account not found!\n");
        return 0;
    }

    printf("1. Check Balance\n2. Withdraw\n3. Exit\n");
    while (1) {
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Balance: Rs %d\n", balances[index]);
        } else if (choice == 2) {
            printf("Enter amount: ");
            scanf("%d", &amount);
            if (amount <= balances[index]) {
                balances[index] -= amount;
                printf("Withdrawal successful!\n");
            } else {
                printf("Insufficient balance!\n");
            }
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}