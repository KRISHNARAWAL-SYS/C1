#include<stdio.h>
//pointers in function call
// 1. call by value (we pass value of variavle as arguement)              
//2. call by reference (we pass address ofvariable as argument)
 void square(int n);  // call by value
 void _square( int *n);  //call by reference

 int main (){
    int number = 4;
    square(number);
    printf("number = %d \n",number);


    _square(&number);
    printf("number = %d\n", number);
    return 0;
 }

 void square(int n){
    n = n * n; 
    printf("square =%d\n",n);
}

void _square(int *n){
    *n=(*n)*(*n);
    printf("square = ")
}