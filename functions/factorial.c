#include<stdio.h>
int factorial(int fact);
int main(){
printf("factorial is :%d",factorial(5));
return 0;
}
int factorial(int fact) {
    if (fact == 1) {
        return 1;
}
int factNm1 = factorial(fact -1);
int factN= fact * factNm1;
return factN ;
}