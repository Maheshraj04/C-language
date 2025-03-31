#include <stdio.h>

void calculateprice(float value); 

int main() {
    float price;
    printf("Enter the price: ");
    scanf("%f", &price); 

    calculateprice(price);
    return 0;
}

void calculateprice(float value) { 
    value = value + (0.18 * value); 
    printf("Final price is: %.2f\n", value); 
}
