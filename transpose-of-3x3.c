#include <stdio.h>
int main(){
    int i,j;
    int matrix[3][3],transpose[3][3];
    for (i=0;i<3;i++){
        printf("Enter elements of row %d: \n",i+1);
        for(j=0;j<3;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The given matrix: \n");
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",matrix[i][j]);
        }
        printf("\n\n");
    }
    printf("Transpose of the given matrix:\n");
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            transpose[i][j]=matrix[j][i];
            printf("%d  ",transpose[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}