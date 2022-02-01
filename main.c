#include "matrix.h"

int main()
{   int rows, colls, **a, **b,**c;
    scanf("%d", &rows);
    scanf("%d", &colls);
     //c = matrix_init(rows, colls);
     //matrix_print(c, rows, colls);

    a = matrix_fill(matrix_init(rows, colls), rows, colls);
    b = matrix_fill(matrix_init(rows, colls), rows, colls);
    matrix_print(a, rows, colls);

    printf("\n");
    matrix_print(a, rows, colls);
    printf("\n");
   // printf("%d\n", matrix_max(a, rows, colls));
   // printf("%d\n", matrix_min(a, rows, colls));
    //matrix_sort(a, rows, colls);
    printf("\n");

   // matrix_multiplication(a, rows, colls, b, rows, colls);
    matrix_transponete(a, rows, colls);

    matrix_free(a, rows);
    matrix_free(b, rows);
    matrix_free(c, rows);
    return 0;
}
