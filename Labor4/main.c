#include <stdio.h>
#include <constant.h>
#include "functions.h"

int main() {

    IntArray array;
    int capacity=10;
    createIntArray(capacity,&array);
    array.size =0;
    for (int i = 0; i < array.capacity/2; ++i) {
        array.elements[i]=i+1;
        array.size=i;
    }
    printArray(array);
    getItemAt(array,1);

}
