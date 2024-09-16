#include <stdio.h>
void hello();
int add(int,int);
int main(){

    hello();
    printf("%d",add(5,8));
    return 0;
}
    //function definition
    void hello(){
        printf("Hello! \n This is a simple function. \n");
}
int add(int a,int b){
    return a+b;
}