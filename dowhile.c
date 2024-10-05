#include<stdio.h>
int main(){
    int i=0;
    printf("outside loop");
    do {
        printf("\ninside do while loop");
        i++;

    }while(i<5);
    return 0;
}