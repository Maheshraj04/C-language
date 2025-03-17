#include<stdio.h>
void namaste();
void bonjour();
int main(){
printf("Enter f for fench and i for indian:");
char ch;
scanf("%c",&ch);
if(ch =='f'){
    bonjour();
}
else{
    namaste();
}
}
void namaste(){
    printf("Namaste\n");
}
void bonjour(){
    printf("Bonjour\n");
}