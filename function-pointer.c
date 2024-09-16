#include <stdio.h>

int sum(int a,int b);

int main(){
    void (*ptr)(int a,int b);   //Function Pointer Declaration
    ptr=&sum;
    (*ptr)(5,10);

    return 0;
}
int sum(int a,int b){
    printf("%d",a+b);
    return 0;
}