#include <stdio.h>

int main() {
    int var = 10;  
    int *ptr;      
    ptr = &var;
    printf("Value of var: %d\n", *ptr);
     return 0;
}