#include <stdlib.h>
#include <stdio.h>

int * sum(int a, int b){
  int * c = (int *) malloc(sizeof(int));

  *c = a + b;
  return c;
}

int main() {
  int a[2] = {10,20};
  
  int * d = sum(a[0],a[1]);
  printf("*d=%d\n",*d);
  a[0] = *d;

  d = sum(a[0],a[1]); //<---
  
  printf("*d=%d\n",*d);
  free(d);
  return 0;
}