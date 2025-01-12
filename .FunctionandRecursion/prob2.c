//write a function that print namaste if the user is indian 
//or print olaa is user is spanish
#include<stdio.h>

void namaste();
void olaa();

int main(){
    printf("enter s for spanish or i for indian:");
    char ch;
    scanf("%c",&ch);

    if (ch =='i')
    {
       namaste();
    } else {
        olaa();
    }
     return 0;
}

void namaste(){
    printf("namaste \n");
}

void olaa(){
    printf("olaa \n");
}


