// keep taking no. as input from user until user enters an odd no.
// jb bhi user se input lena hota hai or condition chalani hoti 
// hai we use do while
# include<stdio.h>

int main(){

    int n;
    do
    {
        printf("enter number:");
        scanf("%d \n", &n);
        printf("%d \n",n);
        

         if( n % 2 != 0){
            break;
        }
    } while (1);
    printf(" that's it");

    return 0;
    
}