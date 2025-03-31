#include <stdio.h>
int main(){
    int a;
    printf("Enter the year to cheak the year is leap or not: ");
    scanf("%d",&a);
    if (a%400==0 || a%4==0 && a%100!=0)
    {
       printf("Enter year is leap year");
    }
    else
    printf("NOT a leap Year");
    
}