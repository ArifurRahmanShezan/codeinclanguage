#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a<5){
        printf("A is less than 5");
    }
    else if(a<10){
        printf("A is less than 10");
    }
    else if(a<15){
        printf("Ais less than 15");
    }
    else if(a<30){
        printf("A is less than 30");
    }
    else{
        printf("A is a big number");
    }
    return 0;

}