#include <stdio.h>
#include <stdlib.h>

#include "arraylist.h"

int main(){

    arraylist_t * al = init_arraylist();
    for(int i=0;i<1000;i++){
        append(al,i*2);
    }

    for(int i=0;i<al->len;i++){
        int a;
        get(al,i,&a); //<--- 
        printf("%d:%d\n",i,a);
    }

    dealloc_arraylist(al);

}