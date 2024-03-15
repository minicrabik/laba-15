#ifndef UNTITLED15_MATRIX_H
#define UNTITLED15_MATRIX_H
#include <stdio.h>

typedef struct matrix {
    int **values; // элементы матрицы
    int n_rows; // количество рядов
    int n_cols; // количество столбцов
} matrix;

typedef struct position {
    int row_index;
    int col_index;
} position;

//размещает в динамической памяти матрицу размером nRows на nCols.
// Возвращает матрицу.
matrix getMemMatrix(int n_rows, int n_cols);

// размещает в динамической памяти массив из nMatrices матриц размером nRows на nCols.
// Возвращает указатель на нулевую матрицу
matrix *getMemArrayOfMatrices(int n_matrices, int n_rows, int n_cols);

// освобождает память выделенную под массив m
void free_mem_matrix(matrix *m);

// освобождает память ms занимаемую n_matrices матрицами
void free_mem_matrices(matrix *ms, int n_matrices);

#endif //UNTITLED15_MATRIX_H
