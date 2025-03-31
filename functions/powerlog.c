
//calculating th power using  the formula 
#include<stdio.h>
int powerlog(int a, int b){
    if (b==0) return 1;
    int x = powerlog(a,b/2);
    if (b%2==0) return x*x;
    else 
    return x*x*a;
}
int main(){
int a ,b;
printf("Enter base: ");
scanf("%d",&a);
printf("Enter the power");
scanf("%d",&b);
printf("The result is: %d",powerlog(a,b));  
return 0;
}