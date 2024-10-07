#include<stdio.h>
int main(){
    for(int i=100;i<200;i++){
        if(i%2==0 && i%3==0 && i%5==0){
            printf("this is the number %d\n",i);
            break;
        }
        printf("this is not the number %d\n",i);
    }
   
}