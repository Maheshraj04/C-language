#include<stdio.h>
int main(){
    int m;
    printf("Enter the number of rows:");
    scanf("%d",&m);
    for (int i = 1; i <= m; i++)//no of lines ->  i rows
    {
       for (int j = 1; j <= m; j++) //no of columns -> j columns
       {
      printf("%d",j);
       }
     printf("\n");  
       
    }
    
    return 0;
}