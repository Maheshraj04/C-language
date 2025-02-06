#include<stdio.h>
int main(){
    char x;
    printf("Enter the color : ");
    scanf("%c",&x);
switch (x)
{
case 'R':
    printf("Stop");
    break;
    case 'Y':
    printf("Get Ready");
    break;
    case 'G':
    printf("GO");
    break;
default:
   printf("Invalid");
}
}