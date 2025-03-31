#include<stdio.h>
int main(){
    int base,power,result=1;
    printf("Enter the base and power: ");
    scanf("%d%d",&base,&power);
    for(int i =1 ;i<=power;i++){
        result*=base;
    }
    printf("%d",result);

    return 0;
}