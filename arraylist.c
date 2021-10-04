#include <stdlib.h>

#include "arraylist.h"

arraylist_t * init_arraylist(){
    arraylist_t * al = malloc(sizeof(arraylist_t));
    al->size = 2;
    al->len = 0;
    al->data = calloc(al->size, sizeof(int));
    return al;
}

void dealloc_arraylist(arraylist_t * al){
    free(al->data);
    free(al);
}

void _expand(arraylist_t * al){
    //create new array, doubled in size
    int * new_data = calloc(al->size * 2, sizeof(int));

    //copy over old data
    for(int i=0;i<al->size;i++){
        new_data[i] = al->data[i];
    }

    free(al->data);
    al->data = new_data; 
    al->size = 2*al->size;
}

void append(arraylist_t * al, int value){
    if(al->len + 1 > al->size){
        _expand(al);
    }
    al->data[al->len] = value;
    al->len++;
}

int get(arraylist_t * al, int index, int * res){
    if(index >= al->len)
        return 0;
    
    * res = al->data[index];
    return 1;
}
