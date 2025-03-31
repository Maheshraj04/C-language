//write a function to calculate the  fibbonacci series using recursion
#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
    int ans1 = fibo(n-1);
    int ans2 = fibo(n-2);
    return ans1+ans2;
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Fibonacci number at position %d is %d",n,fibo(n));
    return 0;
   
}
