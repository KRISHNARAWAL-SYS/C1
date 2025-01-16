//pointer arithmetic
// pointer can be incremented or decre mented

#include<stdio.h>
int main(){
    int price = 100;             //{integer holds 4 bytes}
    int *ptr = &price;
    printf("%u \n", ptr );
    ptr++;
    printf("%u \n", ptr );
    ptr--;
    printf("%u", ptr );
    

    float budget = 1000.00;     // float holds 4 bytes
    float *ptr1 = &budget;
    printf("\n\n\n%u \n", ptr1 );
    ptr1++;
    printf("%u \n", ptr1 );
    ptr1--;
    printf("%u", ptr1 );
    

    char ch = '@';                // char holds 1 byte
    char *ptr2 = &ch;
    printf("\n\n\n%u \n", ptr2 );
    ptr2++;
    printf("%u \n", ptr2 );
    ptr2--;
    printf("%u", ptr2 );
    
    return 0;

}