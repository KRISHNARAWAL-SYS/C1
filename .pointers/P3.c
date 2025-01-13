#include<stdio.h>
// * - prints value
int main(){
    int age = 20;
    int *ptr = &age;
    
// value
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d", *(&age));
    return 0;

}