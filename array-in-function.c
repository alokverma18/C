#include <stdio.h>
void mod(int x);
void modify(int a[],int y);
int main(){
    int arr[5]={5,10,15,20,25};
    int a[5]={30,35,40,45,50};
    mod(arr[2]);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    modify(a,5);
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
void mod(int x){
    x=x-x;
}
void modify(int a[],int y){
    for(int i=0;i<y;i++){
        a[i]=2*a[i];
    }
}