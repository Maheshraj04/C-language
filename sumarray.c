#include<stdio.h>
int main(){
    int size;
    int sum=0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i= 0;i<size;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum);

    return 0;
}