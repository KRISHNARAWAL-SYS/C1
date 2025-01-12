//Q. use library function to calculate te square of anumber given by user
#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);

    printf("%f ",pow(n,3));
    return 0;
}