#include<stdio.h>
// print all even number betwen 5 - 50 
int main(){
    for (int i = 5; i<=50; i++)
    {
        if(i % 2 != 0){//==will print odd nmbers
            continue;
        }
        printf("%d \n",i);
    }
    return 0;
}