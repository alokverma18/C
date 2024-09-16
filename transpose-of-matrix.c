#include <stdio.h>
int main(){
    int i,j,m,n;
    printf("Enter number of Rows in the matrix: ");
    scanf("%d",&m);
    printf("Enter number of Columns in the matrix: ");
    scanf("%d",&n);
    int matrix[m][n],transpose[n][m];
    for (i=0;i<m;i++){
        printf("Enter elements of row %d: \n",i+1);
        for(j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The given matrix: \n");
    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the given matrix:\n");
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            transpose[i][j]=matrix[j][i];
            printf("%d  ",transpose[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}