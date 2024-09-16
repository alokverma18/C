#include <stdio.h>
#include <stdlib.h>
int main(){
    
    int num=30;
    int *pointer=&num;
    int **pointer2=&pointer;
    printf("num= %d\n",num);
    printf("Address of num= %u\n",&num);
    printf("pointer= %u\n",pointer);
    printf("pointer2= %u\n",pointer2);
    printf("Value of *(&num)= %d\n",*(&num));
    printf("Value of *pointer= %d\n",*pointer);
    printf("Value of *pointer2= %d\n",*pointer2);
    printf("Value of **pointer2= %d",**pointer2);





    return 0;
}