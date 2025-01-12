//a.
//FUNCTION CAN ONLY RETURN ONE VALUE AT A TIME
//B.
// CHANGES TO PARAMETERS IN FUNCTION DONT'T CHANGE THE VALUES IN CALLING FUNCTION
//FOR Eg.
#include<stdio.h>

void calculateprice(float value);

int main(){
    float value;
    printf("enter value:");
    scanf("%f \n",&value);
    calculateprice(value);
    printf("value is : %f\n",value);
    return 0;
}

void calculateprice(float value){
    value = value + (0.18*value);
    printf("final price is %f \n",value);
}