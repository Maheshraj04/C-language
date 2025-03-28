#include <stdio.h>
int main(){
    int n ,s=0,rem;
    printf("Enter the number: ");
    scanf("%d",&n);
    while (n>0){
        rem =n%10;
        s+=rem;
        printf("%d",rem);
        n=n/10;
    }
   
    
    return 0;
    }

