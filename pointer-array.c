#include <stdio.h>
int main(){
    int a[]={10,20,30,40,50};
    int *ptr;
    ptr=&a;
    printf("%d ",*ptr);
    ptr++;
    printf("%d ",*ptr);
    ptr--;
    printf("%d ",*ptr);

    int *pptr=&a;
    
    ptr+=4;
    pptr+=2;
    printf("%d ",ptr-pptr);

    printf("%d ",sizeof(ptr));

    printf("%d \n",ptr>pptr);

    for(int i=0;i<5;i++){
        printf("%d ",*(a+i));
    }

}