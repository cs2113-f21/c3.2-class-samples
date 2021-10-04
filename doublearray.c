#include <stdio.h>
#include <stdlib.h>

int ** darray_alloc(int h, int w){
    //  pointer to a pointer     (thing it points at)
    //   v                         v
    int ** p = (int **) malloc( h * sizeof(int *));
    for(int i = 0; i < h; i++){
        p[i] = (int *) malloc(w * sizeof(int));
    }
    return p;

}

void free_daray(int ** p, int h, int w){
    //deallocate in the opposite direction in which you allocated
    for(int i=0;i<h;i++){
        free(p[i]);
    }
    free(p); 
}

int main(){

    int a[][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int ** aa = darray_alloc(4,5);
    for(int i=0;i<4;i++){
        for(int j = 0; j<5; j++){
            aa[i][j] = 2*i+j;
        }
    }

    free_daray(aa, 4, 5);

}