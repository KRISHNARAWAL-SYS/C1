#include<stdio.h>

int main(){
    int a;

    printf("enter a two digit no:");
    scanf("%d",&a);

    a=(a%10)*10+ (a/10);
    
    printf ("reverse is :%d",a);
    return 0;
    }