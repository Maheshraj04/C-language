#include <stdio.h>
#include <math.h>

void squareofnum(int n, int power);

int main() {
    int num, power;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the power: ");
    scanf("%d", &power);

    squareofnum(num, power);
    return 0;
}

void squareofnum(int n, int power) {
    int result = (int)pow(n, power);
    printf("Result: %d\n", result);
}
