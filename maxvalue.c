#include<stdio.h>
int main(){
    
   int arr[10] ={2,45,6,54,67,-1,69,70,34,100};
   int max = arr [0];//sabse chota number
   for(int i =0 ; i<10;i++){
    
    if(max<arr[i]){
        max = arr[i];
    }
   
   }
   printf("The Max number is:%d",max); 
}