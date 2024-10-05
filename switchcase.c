#include<stdio.h>
#include<stdbool.h>
int main(){
    int day=3;
    switch (day){
        case 1:
            printf("saturday");
            break;
        case 2:
            printf("Sunday");
            break;
        case 3 :
            printf("Monday");
            break;
        case 4:
            printf("tuesday");
            break;
        case 5:
            printf("wednesday");
            break;
        case 6:
            printf("Thursday");
            break;
        case 7:
            printf("friday");
            break;
        default:
            printf("wrong day");
    }
    return 0;
}