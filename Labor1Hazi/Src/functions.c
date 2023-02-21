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
float avg(float x1, float x2) {
    return (x1+x2)/2;
}

float maximum(float x1, float x2, float x3) {
    if(x1>x2&&x1>x3)
        return x1;
    else if(x2>x3)
        return x2;
    else
        return x3;
}

void RandomNumberGenerator(int n, int **array, int start, int end) {
    (*array)=allocate_memory(n);
        srand(time(0));
    for (int i = 0; i < n; ++i) {
        (*array)[i]=(rand()%(end-start+1))+start;

    }
}

void printArrayReverted(int n, int *array) {
    //ebben az esetben a generalt szamok lesznek kiirva forditva
    for (int i = n-1; i >=0; --i) {
        printf("%i ", array[i]);

    }
    /*ha allomanybol kiolvasott szamokat akarunk megforditani szukseg van meg a kovetkezo programreszletre:
    if(!freopen("filename.txt","r",stdin)
     exit(-2);
    for(i=0;i<n;++i){
      scanf("%f",array[i]);
      }
      */
}
void deallocateMemoryForArray(int n, int *array) {
    free(array);
}




