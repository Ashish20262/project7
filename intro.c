#include<stdio.h>


int main(){

    int a,b,c,choice;
    printf("press  1 for addition(+)\n");
    printf("press  2 for Subtraction(-)\n");
    printf("press  3 for Multiplication(*)\n");
    printf("press  4 for Division(/)\n");
    printf("press  5 for  Modulus(.|.)\n");
    printf("press  0 for  Exit\n");

    printf("Enter your choice = ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter the frist number = ");
        scanf("%d",&a);
         printf("Enter the secound number = ");
        scanf("%d",&b);
        printf("addition %d",c = a+b);
        break;
        
         
         case 2:
        printf("Enter the frist number = ");
        scanf("%d",&a);
         printf("Enter the secound number = ");
        scanf("%d",&b);
        printf("Subtraction %d",c = a-b);
        break;
         case 3:
        printf("Enter the frist number = ");
        scanf("%d",&a);
         printf("Enter the secound number = ");
        scanf("%d",&b);
        printf("Multiplication %d",c = a*b);
        break;
         case 4:
        printf("Enter the frist number = ");
        scanf("%d",&a);
         printf("Enter the secound number = ");
        scanf("%d",&b);
        printf("Division %d",c = a/b);
        break;
         case 5:
        printf("Enter the frist number = ");
        scanf("%d",&a);
         printf("Enter the secound number = ");
        scanf("%d",&b);
        printf("Modulus %d",c = a%b);
        break;
        case 0:
        printf("Exit for ");
          
        break;

    
    default:
        break;
    }
}