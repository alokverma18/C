#include <stdio.h>
int main(){
    int b,c,d;
    char name[50];
    printf("Enter your Name: ");
    scanf("%s",name);
    printf("\nHello, %s",name);
    printf("\nWelcome to my C Calculator!!!");
    printf("\nEnter first number: ");
    scanf("%d",&b);
    printf("Enter second number: ");
    scanf("%d",&c);
    printf("Menu : \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Remainder\n");
    printf("\nEnter your Choice: ");
    scanf("%d",&d);
    if (d==1){
        printf("Sum: %d",b+c);}
    else if (d==2){
        printf("Difference(First-Second): %d",b-c);}
    else if (d==3){
        printf("Product: %d",b*c);}
    else if (d==4){
        printf("Quotient:%d",b/c);}
    else if(d==5){
        printf("Remainder:%d",b%c);}
    else{
        printf("\nEnter only these numbers (1,2,3,4,5)");}
    printf("\nThank You, %s.",name);
    return 0;
}

