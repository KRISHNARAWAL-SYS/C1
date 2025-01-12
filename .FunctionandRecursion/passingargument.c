#include<stdio.h>

int sum(int a,int b);

int main(){
    int a ,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d \n",&b);

    int s = sum(a,b);            //after processing value of a&b it is then stored here
    printf("sum is %d \n", s );
    return 0;   
}


int sum(int a,int b){     // value of a&b copied here
    return a+b;
}

// first of all we defined a function sum for integer a & b at top
// then we take value of a & b in main
//then we write the definition of function(eg.return a+b)
// the value of a&b is then copied, and then copied value do whatever we define in that function
// 