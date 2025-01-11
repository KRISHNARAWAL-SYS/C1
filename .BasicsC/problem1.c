#include<stdio.h>
//  to determine a num is greater than 9 &
 //  less than 100

int main(){
    int a;
    printf("enter a num :");
    scanf("%d",&a);
    printf("%d", (a>9) && (a<100));
    return 0 ;

}