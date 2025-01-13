// pointer to pointer
// syntax
// int**pptr
// char**pptr
// float**pptr
//// q. print the value of 'i' from its pointer t pointer
#include<stdio.h>

int main(){
    int i =10;
    int ptr = &i;
    int **pptr = &ptr;

    printf("%d \n",**pptr);

    return 0;

}