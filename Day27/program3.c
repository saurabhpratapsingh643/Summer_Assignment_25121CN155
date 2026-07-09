#include <stdio.h>

int main() {
    int salaries[3] = {30000, 45000, 60000};
    int totalBudget = 0;
    
    for (int i = 0; i < 3; i++) {
        printf("Employee %d Salary: Rs %d\n", i + 1, salaries[i]);
        totalBudget = totalBudget + salaries[i];
    }
    
    printf("\nTotal company salary payout budget: Rs %d\n", totalBudget);
    return 0;
}