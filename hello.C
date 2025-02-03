// 1.Take positive integer input and tell if it
// is even or odd ⑩
// #include <stdio.h>
// int main(){
// int n;
// printf("Entrer the value n: ");
// scanf("%d",&n);
// if (n%2==0)
// {
//     printf("Even");
// }
// else{
//     printf("odd");
// }

// }



// 2. Take positive integer input and tell if it is
// divisible by 5 or not.

// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the value of a:");
//     scanf("%d",&a);
//     if (a%5==0)
//     {
//        printf("the number is divisible by 5");
//     }
//     else{
//         printf("Not divisible by 5");
//     }
//     }

//3. If cost price and selling price of an item is
// input through the keyboard, write a program to
// determine whether the seller has made profit or
// incurred loss or no profit no loss. Also determine
// how much profit he made or loss he incurred.
// #include <stdio.h>
// int main(){
//     int sp ,cp ;
//     printf("Enter the sp:");
//     scanf("%d",&sp);
//     printf("Enter the cp:");
//     scanf("%d",&cp);
//     if (sp>cp)
//     {
//         printf("Profit\n");
//         printf("Profit is %d",sp-cp);   
//     }
//     else if (cp>sp)
//     {
//        printf("loss\n");
//        printf("The amount of loss is %d" ,cp-sp);

//     }
//     else{
//         printf("No profit No Loss");
//     }
    
    
// }


// 4. Given the length and breadth of a rectangle,
// write a program to find whether the area of the
// rectangle is greater than its perimeter.

// #include<stdio.h>
// int main(){
//     float l,b;
//     printf("Enter the length:");
//     scanf("%f",&l);
//     printf("Enter the value of b");
//     scanf("%f",&b);
//     if (l*b>2*(l+b))
//     {
//         printf("Area is greater then premiter");
//     }
//     else{
//         printf("premeter is greater");
//     }
    
// }


// Ques 5: Take positive integer input and tell if it
// is a three digit number or not.

// #include <stdio.h>
// int main(){
//     int number;
//     printf("Enter the number:");
//     scanf("%d",&number);
//     if (number>99 && number<1000)
//     {
//        printf("The number is three digit number");
//     }
//     else{
//         printf("Numbeer is not three digit ");
//     }

// }


//6. Write a program to determine whether the year is a
// leap year or not.

// #include <stdio.h>
// int main(){
//     int year;
//     printf("Enter the year:");
//     scanf("%d",&year);
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//     {
//         printf("leap year\n");
//     }
//      else{
//         ("Print not a leap year\n");
//     }
//     return 0
// }

// #include <stdio.h>
// int main(){
//     int a =10;
//     int b = a++;
//     printf("%d,%d",a,b);
    
// }

// #include <stdio.h>
// int main(){ 
//     int n;
//     printf("Enter the value of a ");
//     scanf("%d",&n);
//     for (int  i = 1; i <=n; i++){
        
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int temperature;
    printf("Enter the Temperature ");
    scanf("%d",&temperature);
    if(temperature>=40)
    {
        printf("Heat warming");
    }
    else if (temperature<=0)
    {
       printf("cold warning");
    }
    else
    {
        printf("Normal Temperature");
    }

}

