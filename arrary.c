#include <stdio.h>

const int MAX_NODE = 10000;

int arr_index = 0;

struct NODE {
    int v;
} a[MAX_NODE];

NODE *myalloc(void){
    return &a[arr_index++];
}