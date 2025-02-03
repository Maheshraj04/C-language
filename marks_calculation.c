#include <stdio.h>

int main() {
    float marks1, marks2, marks3, marks4, marks5;
    float total, percentage;
    char grade;

    // Input marks for 5 subjects
    printf("Enter marks for 5 subjects (out of 100):\n");
    scanf("%f %f %f %f %f", &marks1, &marks2, &marks3, &marks4, &marks5);

    // Calculate total and percentage
    total = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage = (total / 500) * 100;

    // Determine grade using if-else if ladder
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 50) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    // Print the marksheet
    printf("\n------- Marksheet -------\n");
    printf("Subject 1: %.2f\n", marks1);
    printf("Subject 2: %.2f\n", marks2);
    printf("Subject 3: %.2f\n", marks3);
    printf("Subject 4: %.2f\n", marks4);
    printf("Subject 5: %.2f\n", marks5);
    printf("--------------------------\n");
    printf("Total Marks: %.2f / 500.00\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
    printf("--------------------------\n");

    // Print remarks
    if (grade == 'F') {
        printf("Remarks: Fail\n");
    } else {
        printf("Remarks: Pass\n");
    }

    return 0;
}
