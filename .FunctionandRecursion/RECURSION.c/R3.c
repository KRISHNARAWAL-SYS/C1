// factorial of n
#include<stdio.h>

int fact(int n);

int main(){
    printf("%d ", fact(5));

    return 0;
}

int fact( int n){
    if(n==1){
        return;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1*n;
    return factN;
}