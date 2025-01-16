//Array is a pointer 
//int*ptr = &arr[0];
//     ||(same)
//int*ptr = arr;


// Traverse an Array
#include<stdio.h>

int main(){
    int aadhar[5];

    //input
    int *ptr = &aadhar[0];
    for(int i = 0; i<5; i++){
        printf("%d index :",i);
        scanf("%d \n",(ptr+i)); //&aadhar[i]
    }

    //output
    for(int i=0; i<5 ;i++){
        printf("%d index= %d\n",i,*(ptr+i)); //&aadhar[i] 
    }
    return 0;
}