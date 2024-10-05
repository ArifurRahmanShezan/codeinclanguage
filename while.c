#include<stdio.h>
int main(){
    printf("outside Loop");
    int i=0;
    while(i<5){
        printf("\ninside loop %d",i+1);
        i++;
    }
    printf("\noutside after loop");
    i=0;
    for(;i<5;){
        printf("\nHello for loop %d",i+1);
        i++;
    }
    return 0;
}