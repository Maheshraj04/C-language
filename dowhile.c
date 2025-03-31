#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        if (n % 10 != 0)
            count++;
        n /= 10;
    }

    printf("Number of non-zero digits: %d\n", count);
    return 0;
}



