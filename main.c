#include "matrix.h"

int main()
{   int n, m, **a;
    scanf("%d", &n);
    scanf("%d", &m);
    a = matrix_init(n, m);
    for(int i = 0;i < n; i++){
        for(int j = 0; j < m; m++){
            a[i][j] = i + j;
            printf("%d ", a[i][j]);
        }
    printf("\n");
    }
    for(int i = 0; i < n; i++)
        free(a[i]);
    free(a);
    return 0;
}
