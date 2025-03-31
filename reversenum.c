#include<stdio.h>
int main(){
    int n, s=0, rem ;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) 
    {
        rem = n % 10 ;
        s= s*10+rem;
        n=n/10;
    }
    printf("The reverse of the number: %d ",s);
    return 0;
}