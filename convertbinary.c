//convert decimal into binary
#include<stdio.h>
int main(){
    int dec, binary=0,i=1,rem;
    scanf("%d",&dec);
    while (dec != 0)
    {
        rem = dec%2;
        binary+=rem*i;
        dec = dec/2;
        i = i*10;


    }
    
printf("%d",binary);
   return 0; 
}