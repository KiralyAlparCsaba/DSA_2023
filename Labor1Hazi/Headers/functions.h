//
// Created by Wufli on 2023. 02. 14..
//

#ifndef LABOR1HAZI_FUNCTIONS_H
#define LABOR1HAZI_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int* allocate_memory(int n);
float avg(float x1, float x2);
float maximum(float x1, float x2, float x3);
void RandomNumberGenerator(int n, int **array, int start, int end);
void printArrayReverted(int n, int *array);
void deallocateMemoryForArray(int n, int *array);

#endif //LABOR1HAZI_FUNCTIONS_H
