//
// Created by Wufli on 2023. 02. 21..
//

#include "../Header/functions.h"


int **allocate_memory(int rows,int cols) {
    int **array_m;
    array_m=(int**)malloc(rows*sizeof(int*));
    if(!array_m){
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);

    }
    for (int i = 0; i < cols; ++i) {
        array_m[i]=(int*)malloc(cols*sizeof(int));
        if(!array_m[i]){
            printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
            exit(MEMORY_ALLOCATION_ERROR_CODE);
        }
    }
    return array_m;
}

void readMatrix(int *pRows, int *pCols, int ***dpArray, const char *input) {

    if(!(freopen(input,"r",stdin))){
        printf(FILE_OPEN_ERROR_MESSAGE);
        exit(FILE_OPEN_ERROR_CODE);
    }
    scanf("%i%i",pRows,pCols);
    (*dpArray)= allocate_memory(*pRows,*pCols);
    for (int i = 0; i < *pRows; ++i) {
        for (int j = 0; j < *pCols; ++j) {
            scanf("%i",&(*dpArray)[i][j]);

        }

    }
    freopen("CON","r",stdin);
}

void printMatrix(int rows, int cols, int **pMatrix, const char *output) {
    freopen(output,"w",stdout);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%i ", pMatrix[i][j]);

        }
        printf("\n");
    }
}

void deallocateMemoryForMatrix(int rows, int ***dpMatrix) {
    for (int i = 0; i < rows; ++i) {
        (*dpMatrix)[i]=NULL;
        free((*dpMatrix)[i]);
    }
    (*dpMatrix)=NULL;
    free(*dpMatrix);

}
