#include <stdio.h>

int main() {
    int id[3] = {1, 2, 3};
    int targetId, found = 0;
    
    printf("Enter Employee ID to verify system record: ");
    scanf("%d", &targetId);
    
    for (int i = 0; i < 3; i++) {
        if (id[i] == targetId) {
            printf("Employee ID %d matches our active records.\n", id[i]);
            found = 1;
            break;
        }
    }
    
    if (found == 0) {
        printf("Employee not found in the database.\n");
    }
    
    return 0;
}