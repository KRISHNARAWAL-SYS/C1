#include<stdio.h>
//table of n

void printtable(int n);

int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);

    printtable(n);   //actual parameter/argument
   
    
    return 0;   
}


void printtable(int n){   //formal parameter
    for (int i = 1,t; i<=10; i++)
    {
      printf("%d \n",n*i);
    }
   
}