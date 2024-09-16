// A Program on the Implementation of Linear Search in an Array

#include <stdio.h>

int main(){
    
    int i,j=0,n,x;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int array[n];
    
    printf("Enter the Elements : ");

    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    printf("Enter the Element to search : ");
    scanf("%d",&x);

    for(i=0;i<n;i++){
        if(array[i]==x){
            printf("Element Found at Index %d \n",i);
            j++;
        }
    }
    if(j==0){
        printf("Element not Found");
    }
    
    return 0;
    
}