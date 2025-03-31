#include <stdio.h>

int sum(int n);

int main() {
    int n, result;

    printf("Enter the number: ");
    scanf("%d", &n);

    result = sum(n); 
    printf("Sum of numbers from 1 to %d is: %d\n", n, result);

    return 0;
}

int sum(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sum(n - 1);
}
