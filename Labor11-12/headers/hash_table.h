//
// Created by Wufli on 2023. 05. 16..
//

#ifndef LABOR11_12_HASH_TABLE_H
#define LABOR11_12_HASH_TABLE_H

#define CAPACITY 31
typedef struct {
    int key;
    int data;
} HashItem;

typedef struct {
    HashItem *items;
    int size;
}HashTable;

static HashItem dummyData = {-1, 0};

//Allocates memory for a hash table with defined SIZE
void createHashArray(HashTable *pHashTable);
//Hash function
int hashCode(int key);
//Inserts a new data to the hashArray
void insert(HashTable *hashTable, char key, char data);
//Deletes a data from the array
void delete(HashTable *hashTable, char *key);

//Searches for a specific data with the given key. Return the position if it is present, -1 otherwise
bool search(HashTable hashTable, char* key);
//Create HashItem with key and data
HashItem createHashItem(int key, int data);
//Prints the content of the array to the standard input
void display(HashTable hashTable);
//Deallocates memory
void destroyHashArray(HashTable *pHashTable);

void delete(HashTable *hashTable, char *key);
/**
* Searches for a specific data with the given key
* @param hashTable
* @param key
* @return the position if it is present, -1 otherwise
*/
bool search(HashTable hashTable, char* key);
/**
* Prints the content of the array to the standard input
* @param hashTable
*/
void display(HashTable hashTable);
/**
* Deallocates memory
* @param pHashTable
*/
void destroyHashArray(HashTable *pHashTable);


#endif //LABOR11_12_HASH_TABLE_H
