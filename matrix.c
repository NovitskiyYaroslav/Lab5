#include "matrix.h"

int matrix_init(int rows, int colls){
    int ** matrix = (int**)malloc(rows * sizeof(int*));
        for(int i = 0; i < rows; i++){
            matrix[i] = (int*)malloc(colls * sizeof(int));
        }
        for(int i = 0;i < rows; i++){
        for(int j = 0; j < colls; j++){
            matrix[i][j] = 0;
        }
    }
    return matrix;
}

void matrix_print(int **matrix, int rows, int colls){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < colls; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int matrix_fill(int **matrix, int rows, int colls){
    srand(time(NULL));
    for(int i = 0;i < rows; i++){
        for(int j = 0; j < colls; j++){
            matrix[i][j] = i * j + rand()%7;
        }
    }
    return matrix;
}

void matrix_free(int** matrix, int rows){
    for(int i = 0; i < rows; i++)
        free(matrix[i]);
    free(matrix);
}

int matrix_max(int** matrix, int rows, int colls){
    int max = matrix[0][0];
    for(int i = 0; i < rows;i++){
        for(int j = 0; j < colls; j++){
          if(matrix[i][j] > max)
            max = matrix[i][j];
        }
    }
    return max;
}

int matrix_min(int** matrix, int rows, int colls){
    int min = matrix[0][0];
    for(int i = 0; i < rows;i++){
        for(int j = 0; j < colls; j++){
          if(matrix[i][j] < min)
            min = matrix[i][j];
        }
    }
    return min;
}

void matrix_sort(int** matrix, int rows, int colls){
    int tmp = 0, row = 0;
    printf("choise row");
    scanf("%d", &row);
        while(row > rows || row < 0){
            printf("\n ne podhodit");
            scanf("%d", &row);
        }

    for(int i = 0; i < colls; i++){
        for(int j = 0; j < colls-1; j++){
            if(matrix[row][j] > matrix[row][j + 1]){
                tmp = matrix[row][j + 1];
                matrix[row][j + 1] = matrix[row][j];
                matrix[row][j] = tmp;
        }
    }
}
matrix_print(matrix, rows, colls);
}

void matrix_multiplication(int **matrix_A, int rows_A, int colls_A, int **matrix_B, int rows_B,int colls_B ){
    if(colls_A == rows_B){
            int** multymatrix = matrix_init(rows_A, colls_B);
            for(int i = 0; i < rows_A; i++){
                for(int j = 0; j < colls_B; j++){
                    for(int m = 0;m < colls_B; m++){
                        multymatrix[i][j] += matrix_A[i][m] * matrix_B[m][j];
                    }
                }
            }
        matrix_print(multymatrix, rows_A, colls_B);
    }
    else
        printf("cannot be multiply");
}

void matrix_transponete(int** matrix, int rows, int colls){
    int** matrixT = matrix_init(colls, rows);
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < colls; j++){
            matrixT[j][i] = matrix[i][j];
        }
    }
    matrix_print(matrixT, colls, rows);
}
