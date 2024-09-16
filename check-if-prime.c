#include <stdio.h>
int main(){
    int i,n,count;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(n==0 || n==1){
        printf("Not a Prime");
    }
    else if(count>0){
        printf("Not a Prime");
    }
    else{
        printf("Prime Number");
    }
    return 0;
}