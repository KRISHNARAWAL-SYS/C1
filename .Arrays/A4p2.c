// Pointer Arithmetic part 2
//1.
// 
//2.
#include<stdio.h>

int main(){
    int age = 29;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u , %u diff is(in terms of int) : %u\n",ptr,_ptr,ptr-_ptr);
    //_ptr = &age;
    printf("comparison = %u", ptr>_ptr);
    return 0;
}