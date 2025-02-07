#include <stdio.h>

int main() {
    int speed, category;

    printf("Enter the speed: ");
    scanf("%d", &speed);

    if (speed <= 25)
        category = 1;
    else if (speed <= 35)
        category = 2;
    else if (speed >= 55)
        category = 3;
    else
        category = 4;

    switch (category) {
        case 1:
            printf("Residential area\n");
            break;
        case 2:
            printf("City\n");
            break;
        case 3:
            printf("Highway\n");
            break;
        default:
            printf("Invalid speed range\n");
            break;
    }

    return 0;
}
