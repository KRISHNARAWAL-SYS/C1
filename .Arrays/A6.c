// Array as function argument
//Function Declaration
//void printNumbers(int arr[],,int n)
//              OR
// void printNumber(int*arr,int n)

// Function call
//printNumber(arr,n);
#include<stdio.h>

void printNumbers(int arr[],int n);   // *arr can also used 


int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=6;
    printNumber(arr,n);

    return 0;
}

void printNumber(int arr[],int n){
    for(int i=0;i<n;i++){
    printf("%d \t", arr[i]);

}

}