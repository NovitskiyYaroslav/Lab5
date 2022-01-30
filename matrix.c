#include "matrix.h"

matrix_init(int rows, int cols){
    int ** matrix = (int**)malloc(rows * sizeof(int*));
        for(int i = 0; i < rows; i++)
            matrix[i] = (int*)malloc(cols * sizeof(int));
    return matrix;
}
