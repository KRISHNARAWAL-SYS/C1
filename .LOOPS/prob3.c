//print the table of a no. input by user.
#include<stdio.h>

int main(){
    int n;
    printf("enter no. :");
    scanf("%d \n", &n);
    

    for (int i=1 ; i<=10; i++)
    {
        printf("%d \n",i*n);
    }
    
    return 0;
}