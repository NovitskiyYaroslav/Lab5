#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <malloc.h>

int matrix_init(int rows, int cols);
void matrix(int **matrix);
int matrix_fill(int **matrix, int rows, int colls);
void matrix_free(int** matrix, int rows);
void matrix_sort(int** matrix, int rows, int colls);
int matrix_min(int** matrix, int rows, int colls);
int matrix_max(int** matrix, int rows, int colls);
void matrix_multiplication(int **matrix_A, int rows_A, int colls_A, int **matrix_B, int rows_B,int colls_B );
void matrix_transponete(int** matrix, int rows, int colls);
