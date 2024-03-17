#ifndef UNTITLED15_MATRIX_H
#define UNTITLED15_MATRIX_H

#include <stdio.h>
#include <stdbool.h>

typedef struct matrix {
    int **values; // элементы матрицы
    int n_rows; // количество рядов
    int n_cols; // количество столбцов
} matrix;

typedef struct position {
    int row_index;
    int col_index;
} position;

//размещает в динамической памяти матрицу размером n_rows на n_cols.
// Возвращает матрицу.
matrix getMemMatrix(int n_rows, int n_cols);

// размещает в динамической памяти массив из nMatrices матриц размером n_rows на n_cols.
// Возвращает указатель на нулевую матрицу
matrix *getMemArrayOfMatrices(int n_matrices, int n_rows, int n_cols);

// освобождает память выделенную под массив m
void freeMemMatrix(matrix *m);

// освобождает память ms занимаемую n_matrices матрицами
void freeMemMatrices(matrix *ms, int n_matrices);

// ввод матрицы m.
void inputMatrix(matrix *m);

// ввод массива из nMatrices матриц, хранящейся по адресу ms.
void inputMatrices(matrix *ms, int n_matrices);

//вывод матрицы m.
void outputMatrix(matrix m);

// вывод массива из n_matrices матриц, хранящейся по адресу ms.
void outputMatrices(matrix *ms, int n_matrices);


// вывод ms состоящую из n_matrices матриц
void outputMatrices(matrix *ms, int n_matrices);


// меняет местами строки i1 и i2 в матрице m
void swapRows(matrix *m, int i1, int i2);


// меняет местами столбцы j1 и j2 в матрице m
void swapColumns(matrix *m, int j1, int j2);


// сортирует вставками строки матрицы m по критерию criteria
void insertionSortRowsMatrixByRowCriteria(matrix *m, int (*criteria)(int *, int));


// сортирует выборкой столбы матрицы m по критерию criteria
void selectionSortColsMatrixByColCriteria(matrix *m, int (*criteria)(int *, int));


// возвращает true, если матрица m является квадратной
// иначе false
bool isSquareMatrix(matrix *m);


// возвращает true, если матрицы m1 и m2 равны
// иначе false
bool areTwoMatricesEqual(matrix *m1, matrix *m2);


// возвращает true, если матрица m является единичной
// иначе false
bool isEMatrix(matrix *m);


// возвращает true, если матрица m является симметричной
bool isSymmetricMatrix(matrix *m);


// транспонирует квадратную матрицу m
void transposeSquareMatrix(matrix *m);


// транспонирует матрицу m
void transposeMatrix(matrix *m);


// возвращает position минимального элемента матрицы m
position getMinValuePos(matrix m);

#endif //UNTITLED15_MATRIX_H