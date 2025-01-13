#include<stdio.h>
//format specifier
// & - "address of"
// %p - pointer address(hexa decimal)
// %u - unsigned int
int main(){
    int age = 20;
    int *ptr = &age;
    //address
    printf("%p\n", &age);
    printf("%u\n", &age);
    printf("%u\n", ptr);
    printf("%u",&ptr);

    return 0;

}