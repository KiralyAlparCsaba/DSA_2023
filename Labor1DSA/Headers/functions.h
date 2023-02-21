//
// Created by Wufli on 2023. 02. 14..
//

#ifndef LABOR1DSA_FUNCTIONS_H
#define LABOR1DSA_FUNCTIONS_H

#include <stdlib.h>
#include <stdio.h>
int* allocate_memory(int n);
void deallocateMemoryForArray(int n, int **array);
void readArray(int *n, int **array,const char* input);
void printArray(int n, int *pArray, const char *output);



#endif //LABOR1DSA_FUNCTIONS_H
