//
// Created by Wufli on 2023. 02. 14..
//

#include "../Headers/functions.h"


int *allocate_memory(int n) {
    int * array;
    array=(int*)malloc(n*sizeof(int));
    if(!array)
        exit(-1);
    return array;
}

void readArray(int *n, int **array, const char *input) {
    if(!freopen(input,"r",stdin)){
        exit(-2);
    }
    scanf("%i",n);
    (*array)=allocate_memory(*n);
    for (int i = 0; i < *n; ++i) {
        scanf("%i",&(*array)[i]);

    }

}

void printArray(int n, int *pArray, const char *output) {
    if(!freopen(output,"w",stdout))
        exit(-2);
    for (int i = 0; i < n; ++i) {
        printf("%i",pArray[i]);
    }

}

