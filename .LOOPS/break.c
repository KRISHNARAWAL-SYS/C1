// break --------------> exit the statement
# include<stdio.h>


 int main(){

    int n;                     // extra
    printf ("enter number :");
    scanf("%d \n", &n);


    for ( int i = 0; i<=100; i++)      // main
    {

        if (i==n)
        {
            break;
        }
        printf("%d \n",i);
    }


    printf("stop");
    return 0;
 }