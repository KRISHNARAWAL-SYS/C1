#include<stdio.h>
//SWITCH
// switch(number){
//case C1 ://do something
//       break;
//case C2 ://do something
//         break;   
//case C3 ://DO SOMETHING
//         break;         
//}               
int main(){
    int day;   //1-mon,2-tue,3-wed
    printf("enter day(1-7) :");
    scanf("%d" , &day);

    switch (day)
    {
    case 1 : printf("monday \n");
            break;
    case 2 : printf("tuesday \n");
             break;
    case 3 : printf("wednesday \n");
             break; 
    case 4 : printf("thursday \n");
             break;
    case 5 : printf("friday \n");
             break;
    case 6 : printf("saturday \n");
             break;  
    case 7 : printf("Sunday \n");
             break;
    default : printf("not a valid day!\n")  ;                                         
    }
    return 0;
      
}
// case can be in any order
// nested switch(switch inside switch) are allowed
