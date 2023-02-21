#include <stdio.h>
#include "functions.h"



int main() {
    int **matrix,n,m;
    readMatrix(&n,&m,&matrix,"matrix.in");
    printMatrix(n,m,matrix,"CON");
    deallocateMemoryForMatrix(n,&matrix);
}
