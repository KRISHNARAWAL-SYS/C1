//Q. SUM OF FIRST N NATAURAL NUMBER
#include<stdio.h>

int sum(int n);

int main(){
    printf("sum is %d",sum(4));

    return 0;
}

int sum(int n){

    if(n==1){
        return;
    }
    int sumNm1= sum(n-1); // sum of n to1
    int sumN= sumNm1 + n;
    return sumN;
}
