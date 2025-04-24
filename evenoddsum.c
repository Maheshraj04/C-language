#include<stdio.h>
int main(){
    int arr[8] ={1,2,3,4,5,6,7};
    int sumeven = 0;
    int sumodd = 0;
    for (int i=0;i<=6;i++){
        if(i%2==0){
            sumeven = sumeven + arr[i];
            
        }
        else{
            sumodd = sumodd + arr[i];
        }
    }
    int result = sumeven - sumodd;
printf("%d\n",sumeven);
printf("%d\n",sumodd);
printf("%d\n",result);

    
}