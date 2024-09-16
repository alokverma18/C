#include <stdio.h>

int main(){

    float a;
    printf("Enter a number: ");
    scanf("%d",&a);
    float *ptr=&a;
    printf("Address of Variable 'a': %d \n",&a);
    printf("Address of the Pointer variable 'ptr' : %d \n",&ptr);
    printf("Value stored in Pointer Variable '*ptr' :%f \n",*ptr);

    return 0;
}