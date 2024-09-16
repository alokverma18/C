
#include <stdio.h>

int main(){
    int i,j,k;
    int mata[3][3];  //={{1,2,3},{4,5,6},{7,8,9}};
    int matb[3][3];  //={{1,3,5},{7,8,9},{2,4,6}};
    int pro[3][3];

    for(i=0;i<3;i++){
        printf("Enter the elements of Row %d of matrix A\n",i+1);
        for(j=0;j<3;j++){
            scanf("%d",&mata[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++){
        printf("Enter the elements of Row %d of matrix B\n",i+1);
        for(j=0;j<3;j++){
            scanf("%d",&matb[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            pro[i][j]=0;
            for(k=0;k<3;k++){
                pro[i][j]+=mata[i][k]*matb[k][j];
            }
        }
        
    }  
    printf("Product Matrix: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",pro[i][j]);
        }
        printf("\n");
    }

    return 0;
}