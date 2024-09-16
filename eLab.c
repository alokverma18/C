#include <stdio.h>
#include <stdlib.h>
int main(){
    int j=0,t,i,n,k; 
    scanf("%d",&t);
    while(j<t){
        scanf("%d %d",&n,&k);
        int integers[n];
        int flag=0;
        for(i=0;i<n;i++){
            scanf("%d",&integers[i]);
        }
        for(i=0;i<n;i++){
            if(abs(integers[i]-integers[i+1])<=k){
                flag++;
            }
        }
        if(flag==(n-1)){
            printf("\nYES");
        }
        else{
            printf("\nNO");
        } 
        j++;
    }
return 0; 
}