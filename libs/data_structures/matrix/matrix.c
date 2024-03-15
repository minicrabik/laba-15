#include <stdio.h>
#include <malloc.h>
#include "matrix.h"

matrix getMemMatrix(int n_rows, int n_cols) {
    int **values = (int **) malloc(sizeof(int*) * n_rows);
    for (int i = 0; i < n_rows; i++)
        values[i] = (int *) malloc(sizeof(int) * n_cols);
    return (matrix){values, n_rows, n_cols};
}

matrix *getMemArrayOfMatrices(int nMatrices,
                              int n_rows, int n_cols) {
    matrix *ms = (matrix*) malloc(sizeof(matrix) * nMatrices);
    for (int i = 0; i < nMatrices; i++)
        ms[i] = getMemMatrix(n_rows, n_cols);
    return ms;
}

void free_mem_matrix(matrix *m) {
    for (int i = 0; i < m->n_rows; i++)
        free(m->values[i]);

    free(m->values);
    m->values = NULL;
    m->n_rows = 0;
    m->n_cols = 0;
}