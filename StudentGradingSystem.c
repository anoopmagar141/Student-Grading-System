#include <stdio.h>

int main() {
    int subjects, i;
    float marks, total = 0, percentage;
    char grade;

    printf("Enter the number of subjects: ");
    scanf("%d", &subjects);

    // Get marks for each subject
    for (i = 1; i <= subjects; i++) {
        printf("Enter marks for subject %d: ", i);
        scanf("%f", &marks);

        // Validate marks
        if (marks < 0 || marks > 100) {
            printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
            i--; // Repeat for the same subject
            continue;
        }
        total += marks;
    }

    // Calculate percentage
    percentage = total / subjects; 

    // Determine grade
    if (percentage >= 90) grade = 'A';
    else if (percentage >= 80) grade = 'B';
    else if (percentage >= 70) grade = 'C';
    else if (percentage >= 60) grade = 'D';
    else grade = 'F';

    // Display results
    printf("\nTotal Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
