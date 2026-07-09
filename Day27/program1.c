#include <stdio.h>

int main() {
    int rollNumbers[3] = {101, 102, 103};
    int marks[3] = {85, 92, 78};
    int searchRoll, found = 0;
    
    printf("Enter student Roll Number to check marks: ");
    scanf("%d", &searchRoll);
    
    for (int i = 0; i < 3; i++) {
        if (rollNumbers[i] == searchRoll) {
            printf("Roll Number: %d, Marks: %d\n", rollNumbers[i], marks[i]);
            found = 1;
            break;
        }
    }
    
    if (found == 0) {
        printf("Record not found!\n");
    }
    
    return 0;
}