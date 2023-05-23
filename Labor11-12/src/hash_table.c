//
// Created by Wufli on 2023. 05. 16..
//

#include "hash_table.h"
#include "constant.h"
#include <stdlib.h>
#include <stdio.h>



void createHashArray(HashTable *pHashTable) {
    pHashTable->items = (HashItem*)calloc(CAPACITY, sizeof(HashItem));
    if(!pHashTable->items)
    {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
    for (int i = 0; i < CAPACITY; ++i) {
        pHashTable->items[i] = dummyData;
    }
    pHashTable->size = 0;
}

HashItem createHashItem(int key, int data)
{
    HashItem item = {key, data};
    return item;
}

int hashCode(int key) {
    return key % CAPACITY;
}

void insert(HashTable *hashTable, int key, int data) {
    if(hashTable->size >= CAPACITY) return;
    int index = hashCode(key);
    int i = 0;
    while (hashTable->items[(index + i)%CAPACITY].key != dummyData.key)
    {
        i++;
    }
    hashTable->items[(index+i)%CAPACITY] = createHashItem(key, data);
    hashTable->size++;
}
