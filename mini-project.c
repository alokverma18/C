#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


//Declarartion of User-Defined Functions
void readMatrix(int array[10][10], int rows, int colums);
void printMatrix(int array[10][10], int rows, int colums);
void matrixAddSub(int arrayone[10][10], int arraytwo[10][10], int rows, int colums, int mul);
void matrixScalarMultiply(int array[10][10], int scalar, int rows, int colums);
void matrixMultiply(int arrayone[10][10], int arraytwo[10][10], int rowsA, int columsA, int columsB);

int main(){

    int i, j, k; //For Loops

    int matrixA[10][10]; 
    int matrixB[10][10];
    int rowA, colA;
    int rowB, colB;
    int operation; //Switch statement
    char again = 'Y';
    int scalar = 0;
    int add = 1;
    int sub = -1;

    while ((again == 'Y')||(again == 'y')){


        //this is the operation menu just type 1, 2, 3 or 4 to calculate
        printf("\nChoose the Operation: \n");
        printf("\t1. Addition\n");
        printf("\t2. Subtraction\n");
        printf("\t3. Scalar Multiplication\n");
        printf("\t4. Matrix Multiplication\n");
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
            readMatrix(matrixA, rowA, colA);
            printf("\n\tMatrix A\n\n");
            printMatrix(matrixA, rowA, colA);


            printf("\nEnter the Elements of Matrix B (%d x %d): \n", rowB, colB); 
            readMatrix(matrixB, rowB, colB);
            printf("\n\tMatrix B\n\n");
            printMatrix(matrixB, rowB, colB);


            printf("\nThe Sum of given matrices is : \n");
            matrixAddSub(matrixA, matrixB, rowA, colA, add);

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
                        readMatrix(matrixA, rowA, colA);
            printf("\n\t\tMatrix A\n\n");
            printMatrix(matrixA, rowA, colA);

            printf("\n\tEnter the Elements of Matrix B (%d x %d): \n", rowB, colB); 
                        readMatrix(matrixB, rowB, colB);
            printf("\n\t\tMatrix B\n\n");
            printMatrix(matrixB, rowB, colB);

            printf("\n Matrix A - Matrix B: \n");
            matrixAddSub(matrixA, matrixB, rowA, colA, sub);
            break;

        case 3:

            printf("\nEnter the Scalar value: ");
            scanf("%d", &scalar);
            printf("\nThe given Scalar value is: %d ", scalar);


            printf("\nEnter the Rows and Columns for Matrix A: ");
            scanf("%d%d", &rowA, &colA);

            printf("\n\tEnter the Elements of Matrix A (%d x %d): \n", rowA, colA);
            readMatrix(matrixA, rowA, colA);
            printf("\n\t\tMatrix A\n\n");
            printMatrix(matrixA, rowA, colA);

            printf("\nThe Multiplication of "%d" with the Matrix A is: \n", scalar);
            matrixScalarMultiply(matrixA, scalar, rowA, colA);

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
                        readMatrix(matrixA, rowA, colA);
            printf("\n\t\tMatrix A\n\n");
            printMatrix(matrixA, rowA, colA);

            // Storing elements of Matrix B.
            printf("\n\tEnter the Eelements of Matrix B (%d x %d): \n", rowB, colB); 
                        readMatrix(matrixB, rowB, colB);
            printf("\n\t\tMatrix A\n\n");
            printMatrix(matrixB, rowB, colB);
            matrixMultiply(matrixA, matrixB, rowA, colA, colB);

            break;

        default:
            printf("\nInvalid Input!!! Please Choose from (1-4) only.");
            
        }

        printf("\n\nDo you want to try again?? Y/N\n");
        scanf(" %c", &again);
    }
    printf("\n\nThank You for using this Calculator, Goodbye!\n\n");

    return 0;
}


//Definition of User-Defined Functions 
void readMatrix(int array[10][10], int rows, int colums){
    int i, j;
    for (i = 0; i < rows; i++){
        printf("\t%d entries for row %d: ", colums, i + 1);
        for (j = 0; j < colums; j++){
            scanf("%d", &array[i][j]);
        }
    }

    return;
}

void printMatrix(int array[10][10], int rows, int colums){
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < colums; j++){
            printf("\t%d", array[i][j]);
        }
        printf("\n");
    }
}


void matrixAddSub(int arrayone[10][10], int arraytwo[10][10], int rows, int columns){
    int i, j;
    int sum[10][10];

    for (i = 0; i < rows; i++){
        for (j = 0; j < columns; j++){
            sum[i][j] = arrayone[i][j] + arraytwo[i][j];
            printf("\t%d", sum[i][j]);
        }
        printf("\n");
    }
}


void Sub(int arrayone[10][10], int arraytwo[10][10], int rows, int columns){
    int i, j;
    int dif[10][10];

    for (i = 0; i < rows; i++){
        for (j = 0; j < columns; j++){
            dif[i][j] = arrayone[i][j] - arraytwo[i][j];
            printf("\t%d", dif[i][j]);
        }
        printf("\n");
    }
}


void matrixScalarMultiply(int array[10][10], int scalar, int rows, int columns){
    int i, j;
    int sca[10][10];
    for (i = 0; i < rows; i++){
        for (j = 0; j < columns; j++){
            sca[i][j] = scalar * array[i][j];
            printf("%d\t", sca[i][j]);
        }
        printf("\n");
    }

}

void matrixMultiply(int arrayone[10][10], int arraytwo[10][10], int rowsA, int columnsA,int columnsB){
    int i, j, k;
    int pro[10][10]:

    for (i = 0; i<rowsA; ++i)
        for (j = 0; j<columnsB; ++j)
        // Initializing the Elements of Result Matrix to 0 before Processing
        pro[i][j] = 0;
            for (k = 0; k<columnsA; ++k)
            {
                pro[i][j] += arrayone[i][k] * arraytwo[k][j];
            }
    printf("\nOutput Matrix:\n");
    for (i = 0; i<rowsA; ++i)
        for (j = 0; j<columnsB; ++j)
        {
            printf("\t%d ", pro[i][j]);
        }
                printf("\n\n");
}