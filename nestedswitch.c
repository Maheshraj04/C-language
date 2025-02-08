#include<stdio.h>
int main(){
    int a ,b;
    printf("Enter the department:");
    scanf("%d",&a);
    printf("Enter the branch");
    scanf("%d",&b);
    switch (a)
    {
    case 1:
        printf("Computer science\n");
        switch (b)
        {
        case 1 :
            printf("DSA\n");
            break;
        case 2:
        printf("ops");
            break;
        default:
            printf("invalid");
            break;
        }
    case 2:
    printf("Mechinical\n");
    switch (b)
    {
    case 1:
    printf("Engenearing Drawing\n");
        /* code */
        break;
    case 2:
    printf("Mech work\n");
    default:
    printf("invalid\n");
        break;
    }
    default:
        break;
    }
}