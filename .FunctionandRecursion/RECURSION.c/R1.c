//RECURSION: when a function calls itself, it's called recursion
// eg.
//Q. print "hello world" 5 times

#include<stdio.h>

void printhello(int count);

int main(){
    printhello(5);

    return 0;
}
// recursive function
void printhello(int count){
    if(count == 0){
        return;
    }

    printf("hello world\n");
    printhello(count-1);
}
