#include <stdio.h>

int i, j, k; // for Loops

//Declarartion of User-Defined Functions
void ScanMatrix(int array[10][10], int rows, int columns);

void DisplayMatrix(int array[10][10], int rows, int columns);

void AddMatrix(int arrayone[10][10], int arraytwo[10][10], int rows, int columns);

void SubMatrix(int arrayone[10][10], int arraytwo[10][10], int rows, int columns);

void ScalarProduct(int array[10][10], int scalar, int rows, int columns);

void ProductMatrix(int arrayone[10][10], int arraytwo[10][10], int rowsA, int columnsA, int columnsB);

void TransposeMatrix(int arrayone[10][10], int rows, int columns);

int main(){


    int matrixA[10][10]; 
    int matrixB[10][10];
    int rowA, colA;
    int rowB, colB;
    int operation; // Switch statement
    char again = 'y';
    int scalar = 0;

    while ((again == 'Y')||(again == 'y')){

        //Taking the choice of Operation from user
        printf("\nChoose the Operation: \n");
        printf("\t1. Addition\n");
        printf("\t2. Subtraction\n");
        printf("\t3. Scalar Multiplication\n");
        printf("\t4. Matrix Multiplication\n");
        printf("\t5. Matrix Transpose\n");
        printf("Enter your choice: ");
        scanf(" %d", &operation);

        switch (operation){

        case 1:
            printf("\nEnter the Rows and Columns for Matrix A: ");
            scanf("%d%d", &rowA, &colA);

            printf("Enter the Rows and Columns for Matrix B: ");
            scanf("%d%d", &rowB, &colB);

            while((rowA != rowB) || (colA != colB)){
                printf("\nMatrices must be of the same size\n");
                printf("\nEnter the Rows and Columns for Matrix A: ");
                scanf("%d%d", &rowA, &colA);

                printf("Enter the Rows and Columns for Matrix B: ");
                scanf("%d%d", &rowB, &colB);

            }

            printf("\nEnter the Elements of Matrix A (%d x %d): \n", rowA, colA); 
            ScanMatrix(matrixA, rowA, colA);
            printf("\n\tMatrix A\n\n");
            DisplayMatrix(matrixA, rowA, colA);

            printf("\nEnter the Elements of Matrix B (%d x %d): \n", rowB, colB); 
            ScanMatrix(matrixB, rowB, colB);
            printf("\n\tMatrix B\n\n");
            DisplayMatrix(matrixB, rowB, colB);

            printf("\nThe Sum of given matrices is : \n");
            AddMatrix(matrixA, matrixB, rowA, colA);

            break;

        case 2:

            printf("\nEnter the Rows and Columns for Matrix A: ");
            scanf("%d%d", &rowA, &colA);

            printf("Enter the Rows and Columns for Matrix B: ");
            scanf("%d%d", &rowB, &colB);

            while ((rowA != rowB) || (colA != colB)){
                printf("\nMatrices must be of the same size\n");
                printf("\nEnter the Rows and Columns for Matrix A: ");
                scanf("%d%d", &rowA, &colA);

                printf("Enter the Rows and Columns for Matrix B: ");
                scanf("%d%d", &rowB, &colB);
            }

            printf("\n\tEnter the Elements of Matrix A (%d x %d): \n", rowA, colA); 
                        ScanMatrix(matrixA, rowA, colA);
            printf("\n\t\tMatrix A\n\n");
            DisplayMatrix(matrixA, rowA, colA);

            printf("\n\tEnter the Elements of Matrix B (%d x %d): \n", rowB, colB); 
                        ScanMatrix(matrixB, rowB, colB);
            printf("\n\t\tMatrix B\n\n");
            DisplayMatrix(matrixB, rowB, colB);

            printf("\n Matrix A - Matrix B: \n");
            SubMatrix(matrixA, matrixB, rowA, colA);
            break;

        case 3:

            printf("\nEnter the Scalar value: ");
            scanf("%d", &scalar);
            printf("\nThe given Scalar value is: %d ", scalar);

            printf("\nEnter the Rows and Columns for Matrix A: ");
            scanf("%d%d", &rowA, &colA);

            printf("\n\tEnter the Elements of Matrix A (%d x %d): \n", rowA, colA);
            ScanMatrix(matrixA, rowA, colA);
            printf("\n\t\tMatrix A\n\n");
            DisplayMatrix(matrixA, rowA, colA);

            printf("\nThe Multiplication of %d with the Matrix A is: \n", scalar);
            ScalarProduct(matrixA, scalar, rowA, colA);

            break;

        case 4:
            
            printf("\nEnter the Rows and Columns for Matrix A: ");
            scanf("%d%d", &rowA, &colA);

            printf("Enter the Rows and Columns for Matrix B: ");
            scanf("%d%d", &rowB, &colB);

            //In Multiplication of two matrices Matrix A Column must be equal to  Matrix B Row
            while (colA != rowB)
            {
                printf("\n\nError!!! Column of Matrix A is not equal to Row of MAtrix B.\n\n");
                printf("\nEnter the Rows and Columns for Matrix A: ");
                scanf("%d%d", &rowA, &colA);

                printf("Enter the Rows and Columns for Matrix B: ");
                scanf("%d%d", &rowB, &colB);
            }

            // Storing elements of Matrix A.
            printf("\n\tEnter the Elements of Matrix A (%d x %d): \n", rowA, colA); 
            ScanMatrix(matrixA, rowA, colA);
            printf("\n\t\tMatrix A\n\n");
            DisplayMatrix(matrixA, rowA, colA);

            // Storing elements of Matrix B.
            printf("\n\tEnter the Eelements of Matrix B (%d x %d): \n", rowB, colB); 
            ScanMatrix(matrixB, rowB, colB);
            printf("\n\t\tMatrix B\n\n");
            DisplayMatrix(matrixB, rowB, colB);
            printf("\nThe Multiplication of Matrix A with the Matrix B is: \n");
            ProductMatrix(matrixA, matrixB, rowA, colA, colB);

            break;

        case 5:

            printf("\nEnter the Rows and Columns for Matrix: ");
            scanf("%d%d", &rowA, &colA);

            printf("\n\tEnter the Elements of Matrix (%d x %d): \n", rowA, colA);
            ScanMatrix(matrixA, rowA, colA);
            printf("\n\t\tMatrix A\n\n");
            DisplayMatrix(matrixA, rowA, colA);
            printf("\nTranspose of the given Matrix is:\n");
            TransposeMatrix(matrixA,rowA,colA);

            break;


        default:
            printf("\nInvalid Input!!! Please Choose from (1-5) only.");
            
        }

        printf("\n\nDo you want to try again?? Y/N ");
        scanf(" %c", &again);
    }
    printf("\n\nThank You for using this Matrix Calculator, Goodbye!\n\n");      //AK18

    return 0;
}

//Definition of User-Defined Functions

void ScanMatrix(int array[10][10], int rows, int columns){
    
    for (i = 0; i < rows; i++){
        printf("\t%d entries for row %d: ", columns, i + 1);
        for (j = 0; j < columns; j++){
            scanf("%d", &array[i][j]);
        }
    }

    return;
}

void DisplayMatrix(int array[10][10], int rows, int columns){
    

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++){
            printf("\t%d", array[i][j]);
        }
        printf("\n");
    }
}

void AddMatrix(int arrayone[10][10], int arraytwo[10][10], int rows, int columns){
    
    int sum[10][10];

    for (i = 0; i < rows; i++){
        for (j = 0; j < columns; j++){
            sum[i][j] = arrayone[i][j] + arraytwo[i][j];
            printf("\t%d", sum[i][j]);
        }
        printf("\n");
    }
}

void SubMatrix(int arrayone[10][10], int arraytwo[10][10], int rows, int columns){
    
    int dif[10][10];

    for (i = 0; i < rows; i++){
        for (j = 0; j < columns; j++){
            dif[i][j] = arrayone[i][j] - arraytwo[i][j];
            printf("\t%d", dif[i][j]);
        }
        printf("\n");
    }
}

void ScalarProduct(int array[10][10], int scalar, int rows, int columns){
    
    int sca[10][10];
    for (i = 0; i < rows; i++){
        for (j = 0; j < columns; j++){
            sca[i][j] = scalar * array[i][j];
            printf("\t%d ", sca[i][j]);
        }
        printf("\n");
    }

}

void ProductMatrix(int arrayone[10][10], int arraytwo[10][10], int rowsA, int columnsA,int columnsB){
    
    int pro[10][10];

     // Initializing all the Elements of Matrix Pro to 0
    for (i = 0; i<rowsA; ++i)
        for (j = 0; j<columnsB; ++j)
        {
            pro[i][j] = 0;
        }

    for (i = 0; i<rowsA; i++)
        for (j = 0; j<columnsB; j++)
        // Initializing the Elements of Result Matrix to 0 before Processing
        //pro[i][j] = 0;
            for (k = 0; k<columnsA; ++k)
            {
                pro[i][j] += arrayone[i][k] * arraytwo[k][j];
            }
    for (i = 0; i<rowsA; ++i){
        for (j = 0; j<columnsB; ++j)
        {
            printf("\t%d ", pro[i][j]);
        }
                printf("\n\n");
    }
}
void TransposeMatrix(int arrayone[10][10], int rows, int columns){

    int transpose[10][10];

    for (i=0;i<columns;i++){
            for(j=0;j<rows;j++){
                transpose[i][j]=arrayone[j][i];
                printf("\t%d ",transpose[i][j]);
            }
            printf("\n\n");
        }

}
