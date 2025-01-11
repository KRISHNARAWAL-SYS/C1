 #include<stdio.h>

 int main(){
    int n;
    printf("enter number :");
    scanf("%d \n",n);
     
     int fact =1;
    for (int i = 1; i<=n; i++)// for factorial we cant use i =0
    {
        fact=fact*i;
    }
    printf("fact is %d",fact);

    return 0;
    

 }