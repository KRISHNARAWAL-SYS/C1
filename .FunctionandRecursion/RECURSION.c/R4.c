// write a function to convert celsius to fahrentheit.
#include<stdio.h>

float converttemp(float celsius);

int main(){
    float far = converttemp(10);
    printf("fahrenheit is %f", far);
    return 0;
}

float converttemp(float celsius){
    float far = celsius*(9/5)+32;
    return far;
}