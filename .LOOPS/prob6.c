#include<stdio.h>
// print all oddnumber betwen 5 - 50
int main(){
    for (int i = 5; i<=50; i++)
    {
        if(i % 2 != 0){ // == will print all even numbers
            printf("%d \n",i);
            
        }
        
    }
    return 0;
}