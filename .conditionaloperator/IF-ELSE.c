#include<stdio.h>

int main(){
    int age;
    printf("enter age:");
    scanf("%d",&age);

    if(age>18){
        printf("adult \n");
        printf("can vote\n");
        printf("can drive");


    }
    else{
        printf("not adult");
    }
    printf("\n thank you");
    return 0;

}