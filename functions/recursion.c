#include<stdio.h>
void printHW(int count);
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",& num);
    printHW(num);
    return 0;
}
void printHW(int count){
    if (count==0){
        return;
    }
    printf("Hello World\n");
    printHW(count-1);
}