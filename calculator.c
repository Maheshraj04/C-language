#include<stdio.h>
int main(){
    int a,b;
    char A;
  printf("Enter the number:");
  scanf("%d",&a);
  printf("Enter the number:");
  scanf("%d",&b);
  printf("Enter the character:");
  scanf(" %c",&A);
  switch (A)
  {
  case '+':
    printf("%d + %d = %d",a,b,a+b);
    break;
 case '-':
 printf("%d - %d = %d",a,b,a-b);
  
  default:
   printf("Invalid char");
  }
}