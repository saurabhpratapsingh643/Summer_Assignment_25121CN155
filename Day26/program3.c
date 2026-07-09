#include <stdio.h>

int main() {
    int balance = 5000;
    int choice, amount;
    
    printf("1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
    
    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("Your balance is: Rs %d\n", balance);
        } else if (choice == 2) {
            printf("Enter amount to deposit: ");
            scanf("%d", &amount);
            balance = balance + amount;
            printf("Deposited successfully!\n");
        } else if (choice == 3) {
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);
            if (amount <= balance) {
                balance = balance - amount;
                printf("Please collect your cash.\n");
            } else {
                printf("Insufficient balance!\n");
            }
        } else if (choice == 4) {
            printf("Thank you for using our ATM!\n");
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }
    
    return 0;
}