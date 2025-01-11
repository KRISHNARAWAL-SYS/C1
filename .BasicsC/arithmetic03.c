// "type converion
// int op float = float
// int op int  = int
// int op float = float
#include<stdio.h>
#include<math.h>
 
 int main(){

    printf("%d \n",  2 * 8);
    printf("%f \n",  2.0 * 8);
    printf("%f\n ", 2.0 * 8.0);
    

    // int + float gives float because float carry more space than int.


    int a = (int) 1.9999999;
    printf("%d",a);
    // (int) is used to print the float value in 
    // intger form as float cant be convert in int by compiler
    return 0;
 }

