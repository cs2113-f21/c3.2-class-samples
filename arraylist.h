// starting moved towards a notion of objects! 
#ifndef _ARRAYLIST_H
#define _ARRAYLIST_H


typedef struct{
    int * data; //the array storing our list!
    int size; //number of slots in array
    int len; //the length of the list, or number of elements in list
} arraylist_t;

//constuctor
arraylist_t * init_arraylist();

//destructor
void dealloc_arraylist(arraylist_t * al);

void append(arraylist_t * al, int value);

//return is either 0 if out of bounds or 1 if success
// and if succes, it sets *res to the result
int get(arraylist_t * al, int index, int * res);

//return is either 0 if out of bounds or 1 if success
int set(arraylist_t * al, int index, int value);

int size(arraylist_t  *al); 

#endif
