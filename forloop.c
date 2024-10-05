#include<stdio.h>
int main(){
    printf("HEllo this is outside loop\n");
    for(int i=1;i<=5;i++){
        printf("this is inside loop\n");
        printf("i=%d\n",i);
    }
    printf("outside Loop");
}