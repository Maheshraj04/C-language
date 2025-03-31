#include<stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("No geometry");
        break;
    case 2:
    printf("ITs a point");
    break;
    case 3:
    printf("Its a line");
    break;
    case 4:
    printf("Its a circle");
    break;
    case 5 :
    printf("Its a circle");
    break;
    default:
    printf("Invalid input ");
        break;
    }
}