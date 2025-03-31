#include <stdio.h>

int main() {
    float a, b, c, d, sum;
    
    printf("Enter the angle1: ");
    scanf("%f", &a);
    
    printf("Enter the angle2: ");
    scanf("%f", &b);
    
    printf("Enter the angle3: ");
    scanf("%f", &c);
    
    printf("Enter the angle4: ");
    scanf("%f", &d);

    sum = a + b + c + d;

    switch ((int)sum) {
        case 360:
            printf("The angles form a quadrilateral.\n");
            break;
        default:
            printf("The angles do not form a quadrilateral.\n");
            break;
    }

    return 0;
}
