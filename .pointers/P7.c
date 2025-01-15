// swap 2 number 
#include<stdio.h>

void swap(int a , int b);
void _swap(int *a,int *b);


int main(){
     int x=3,y=5;
     _swap(&x,&y);
     printf("\nx = %d, y = %d",x,y);
     return 0;
}

//call by value
//void swap(int a ,int b){//  int t = a;
//a = b;                                      isse main function ki value swap nhi hui
//  b = t;
//  printf("a = %d,b = %d",a,b);
//}

// call by reference(with help of pointer)
void _swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
