//Q. write a function to calculate area of a square ,  circle & a rectangle
#include<stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float rad);
float rectArea(float a,float b);

int main(){
    float a = 4.0;
    float b = 2.0;
    float rad = 4.0;
    float side = 2.0;

    printf("area is : %f", rectArea(a,b));

    return 0;
}

float squareArea(float side){
    return side*side;
}

float circleArea(float rad){
    return 3.14*rad*rad;
}

float rectArea( float a,float b){
    return a*b;
}