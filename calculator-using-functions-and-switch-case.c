#include <stdio.h> 

int sum(int x, int y);
int sub(int x, int y);
int pro(int x, int y);
int div(int x, int y);
int rem(int x, int y);

int main() {
    printf("Menu : \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Remainder\n");
    int n;
    printf("Enter your Choice : ");
    scanf("%d",&n);
    int x,y,r;
    printf("Enter the two numbers: ");
    scanf("%d%d",&x,&y);
    
    printf("Result : ");
    switch(n){
        case 1:
            r=sum(x,y);
            break;
        case 2:
            r=sub(x,y);
            break;
        case 3:
            r=pro(x,y);
            break;
        case 4:
            r=div(x,y);
            break;
        case 5:
            r=rem(x,y);
            break;
        default:
            printf("Wrong value entered.");
    }
    printf("%d",r);
    
    return 0;

}
int sum(int x, int y){
    return x + y;
}
int sub(int x, int y){
    return x-y;
}
int pro(int x, int y){
    return x*y;
}
int div(int x, int y){
    return x/y;
}
int rem(int x, int y){
    return x%y;
}
