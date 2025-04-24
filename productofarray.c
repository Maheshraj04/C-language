#include<stdio.h>
int main(){
    int n;
    int mul=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    int arr[n] ;
    for(int i=1;i<=n;i++){
        printf("Enter element %d: ",i);
        scanf("%d",&arr[i]);
        mul = mul*arr[i];
    }
    printf("The multiplication of the number is:%d",mul);
    return 0;
}