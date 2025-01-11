#include<stdio.h>

int main(){
    char ch;
    printf("enter  character");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z'){
        printf("upper case");
    } else if(ch>='a' && ch<='z'){
        printf("lowwer case");
    } else {
        printf("not valid char");
    }
    return 0;

}