#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H

//structs ...
struct node{
    struct node * next;
    int data;
};
typedef struct node node_t;

typedef struct {
    node_t * head;
    int size;
} linkedlist_t;


linkedlist_t * init_linkedlist();
void deallocate_linkedlist(linkedlist_t * ll);

void append(linkedlist_t * ll, int value);

#endif