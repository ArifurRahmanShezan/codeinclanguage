#include<stdio.h>
#include<stdbool.h>
int main (){
    int tourday=2;
    if(tourday==4){
        bool boatavailable=true;
        if(boatavailable==true){
            printf("got to saint martin");
        }
        else{
            printf("go to cox'sBazar");
        }
    
    }
    else if(tourday==2){
        int boatavilable=true;
        if(boatavilable==true){
            printf("go to tanguar haor");

        }
        else{
            printf("go to sylhet");
        }
    }
    else{
        printf("GF er shate video call e kotha bolo");
    }
}