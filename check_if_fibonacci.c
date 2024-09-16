#include <stdio.h>
#include <math.h>
int a,n,x;
int perfectsquare(int n){
    int  x=sqrt(n);
    if(n==x*x){
        return 1;
    }
    else{
        return 0;
    }
}
int fibonacci(int y){
    if(perfectsquare((5*y*y)-4) || perfectsquare((5*y*y)+4)){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    printf("Enter the Number: ");
    scanf("%d",&a);
    if(fibonacci(a)){
        printf("Present in Fibonacci Sequence");
    }
    else{
        printf("Not Present");
    }


return 0;
}