//
// Created by Wufli on 2023. 02. 21..
//

#ifndef LAB2_FUNCTIONS_H
#define LAB2_FUNCTIONS_H
#include <stdlib.h>
#include <stdio.h>
#include "constant.h"

int** allocateMemoryForMatrix1(int rows, int cols);
void readMatrix(int *pRows, int *pCols, int ***dpArray, const char *input);
void printMatrix(int rows, int cols, int **pMatrix, const char *output);
int minimumValueOfRow(int cols, int *pRow);
int* rowMinimums(int rows, int cols, int **pMatrix);
int minimumValueOfMatrix(int rows, int cols, int **pMatrix);
void deallocateMemoryForMatrix(int rows, int ***dpMatrix);




#endif //LAB2_FUNCTIONS_H
