#include <stdio.h>

int main() {
    float n;
    scanf("%f", &n);
    
    for (int i = 1; i <= 5; i++) {
        n += n * 0.05; 
    }
    
    printf("%.2f", n);
    return 0;
}
