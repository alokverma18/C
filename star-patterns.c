#include <stdio.h>
int main(){
    int i,j,k,n;

    printf("Enter number of Rows : ");
    scanf("%d",&n);
    printf("\nPattern 1 : \n\n");
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\nPattern 2 : \n\n");

    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(k=0;k<i+1;k++){
            printf("*");
        }
        printf("\n");
    }

    printf("\nPattern 3 : \n\n");

    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(k=0;k<2*i+1;k++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}