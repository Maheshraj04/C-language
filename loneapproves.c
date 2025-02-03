#include <stdio.h>
int main() {
    float salary, credit_score;
    printf("Enter your salary: ");
    scanf("%f", &salary);
    printf("Enter your credit score: ");
    scanf("%f", &credit_score);

    if (salary >= 50000) {
        if (credit_score >= 700) {
            printf("Loan Approved\n");
        } else {
            printf("Loan Not Approved\n");
        }
    } else {
        printf("Loan Not Approved\n");
    }

    return 0;
}
