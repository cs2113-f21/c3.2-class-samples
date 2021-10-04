#include <stdlib.h>
#include "linkedlist.h"

linkedlist_t * init_linkedlist(){

    linkedlist_t * ll = malloc(sizeof(linkedlist_t));
    ll->head = NULL;
    ll->size = 0;

    return ll;

}

void deallocate_linkedlist(linkedlist_t * ll){
    /*
    node_t * cur = ll->head;
    while(cur != NULL){
        //free(cur);
        node_t * next = cur->next;
        free(cur);
        cur = next;
    }*/
    _deallocate_linkedlist(ll->head);
    free(ll);
}

//helper recursive function
void _deallocate_linkedlist(node_t * cur){
    if(cur == NULL) return; //base case
    node_t * next = cur->next;
    _deallocate_linkedlist(cur->next); //recurse first
    free(cur);
    return;
}

node_t * init_node(int value){
    node_t * n= malloc(sizeof(node_t));
    n->next = NULL;
    n->data = value;
}
void append(linkedlist_t * ll, int value){
    if(ll->head == NULL){
        ll->head = init_node(value);
        return;
    }

    node_t * cur = ll->head;
    while(cur->next != NULL){ cur = cur->next;}

    cur->next = init_node(value);

}