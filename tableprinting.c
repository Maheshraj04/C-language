#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for (int i = 1; i <=10; i++)
    {
        printf("The table of %d  is %d \n",n,i*n);
    }
    
    return 0;

}