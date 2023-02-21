#include <stdio.h>
#include "functions.h"

int main() {
    float x1=7.75,x2=6.52,x3=8.23;
    printf("A ket szam atlaga:%f\n",avg(x1,x2));
    printf("A harom szam kozul a legnagyobb:%f\n", maximum(x1,x2,x3));
    int n,*array,start,end;
    printf("Kerem a tomb hosszat,minimum es maximum erteket:\n");
    scanf("%i%i%i", &n,&start,&end);
    RandomNumberGenerator(n,&array,start,end);
    printArrayReverted(n,array);
    deallocateMemoryForArray(n,array);
}
