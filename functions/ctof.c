#include<stdio.h>
float convertTemp(float celsius);
int main(){
 float far = convertTemp(32);
 printf("The converted temp is :%.2f",far);

return 0;
}
float convertTemp(float celsius){
    float far = celsius * 9 / 5 + 32;
    return far;

}