#include <stdio.h>
int fact(int x);
int main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    printf("Factorial of %d : %d",a,fact(a));
    return 0;
}
int fact(int x){
    if(x==1 || x==0){
        return 1;
    }
    return x*(fact(x-1));
}