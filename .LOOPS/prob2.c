// print the sum of first n natural number
#include<stdio.h>

int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);

    int sum =0;
    for (int i = 1; i<=n; i++)
    {
       sum +=i ;
    }

    printf("sum is %d \n",sum);
    
// reverse counting??
    for(int i=n;i>=1;i--){
        printf("%d \n",i);
    }

    return 0 ;
}

