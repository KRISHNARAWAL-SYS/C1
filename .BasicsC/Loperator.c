#include<stdio.h>

// logical operators
// AND   &&
// OR    ||
// NOT   !

int main(){
//not
    printf("\n %d",!(5>1));
//and 
    printf("\n %d", (5>2) && (6>3));
    printf("\n %d", (5>2) && (6>7));
    printf("\n %d",(-2>0) && (10<1));
//or
    printf("\n %d", (44>3) ||(22>11));
    printf("\n %d", (11 <3) ||(11>3));
    printf("\n %d", (8<1) || (88<1));

    printf("\n %d", !((5>2) &&(5>3)));  

    printf("\n %d", ((10*2-4)>(10*2-3) || (2*8+5)<(2*8+6)));

    return 0;

}

// OPERATOR PRECEDENCE
// DESCENDING PRIORITY
//    !
//    *,/,%
//    +,-
//     <,<=,>,>=
//      ==,!=
//     &&
//      ||
//       =