#include <stdio.h>

int main() {
    char name[50];
    int rollNumber;
    int physics, chemistry, math;
    int total;
    float percentage;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNumber);

    printf("Enter Physics Marks (out of 100): ");
    scanf("%d", &physics);

    printf("Enter Chemistry Marks (out of 100): ");
    scanf("%d", &chemistry);

    printf("Enter Math Marks (out of 100): ");
    scanf("%d", &math);

    total = physics + chemistry + math;
    percentage = total / 3.0;

    printf("\n-----------------------------------\n");
    printf("             MARKSHEET             \n");
    printf("-----------------------------------\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", rollNumber);
    printf("-----------------------------------\n");
    printf("Subject       Marks Obtained\n");
    printf("Physics:      %d\n", physics);
    printf("Chemistry:    %d\n", chemistry);
    printf("Math:         %d\n", math);
    printf("-----------------------------------\n");
    printf("Total Marks:  %d / 300\n", total);
    printf("Percentage:   %.2f%%\n", percentage);
    printf("-----------------------------------\n");

    if (percentage >= 40.0) {
        printf("Result:       PASSED\n");
    } else {
        printf("Result:       FAILED\n");
    }
    printf("-----------------------------------\n");

    return 0;
}