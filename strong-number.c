#include <stdio.h>
int main(){
    int i,j,r,n,temp,sum=0,fact;

    printf("\nIf the Sum of Factorial of Digits of a Number is equal to the Number itself, then that number is called a Strong number ! \n");

    printf("Enter a Number to check : ");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        r=temp%10;
        fact=1;
        for(i=1;i<=r;i++){
            fact*=i;
        }
        sum+=fact;
        temp/=10;
    }
    if(n==sum){
        printf("Strong !!!");
    }
    else{
        printf("It's Weak LoL !!!");
    }

    return 0;
}