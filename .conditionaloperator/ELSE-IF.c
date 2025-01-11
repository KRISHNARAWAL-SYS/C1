#include<stdio.h>
// to dtermine grade of a student.
int main(){
    int marks;
    printf("enter marks:"); 
    scanf("%d",&marks);

    if((marks>=90) ){
        printf("A");
    }
    else if((marks>=75)&&(marks<90)){
        printf("B");
    }
    else if((marks>=50)&&(marks<75)){
        printf("C");
    }
    else{
        printf("F");
    }
    return 0;

}