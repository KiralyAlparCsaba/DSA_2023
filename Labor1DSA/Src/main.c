#include <stdio.h>
#include "functions.h"
int main() {
int n,*pArray;
readArray(&n,&pArray,"data.in");
printArray(n,pArray,"CON");
}
