#include<stdio.h>
// TERNARY
// Condition ? doSomething if True : doSomething if False;
int main(){
    int age;
    printf("enter age:");
    scanf("%d",&age);

    age>=18 ? printf("adult \n") : printf("notadult") ;
    return 0;
}