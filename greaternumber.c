#include<stdio.h>
int main(){
    int arr[7] ={1,2,3,4,5,6,7};
    int x=0;
    for(int i =0;i<7;i++){
        if(arr[i]>3){
            x++;
          
        }
       
    }
    printf("%d",x);
}